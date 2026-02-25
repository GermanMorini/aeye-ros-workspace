#!/usr/bin/env bash
set -euo pipefail

# Inicializa el workspace:
# - crea directorios base (RUNME.sh)
# - clona repos faltantes listados en tools/src-repos.txt
# - ejecuta git pull en root y repos dentro de src
# Uso:
#   ./tools/init-workspace.sh

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
SRC_DIR="${ROOT_DIR}/src"
REPOS_FILE="${ROOT_DIR}/tools/src-repos.txt"

ensure_workspace_dirs() {
  mkdir -p \
    "${ROOT_DIR}/src" \
    "${ROOT_DIR}/log" \
    "${ROOT_DIR}/install" \
    "${ROOT_DIR}/build"
}

clone_missing_src_repos() {
  if [[ ! -f "${REPOS_FILE}" ]]; then
    echo "Aviso: no existe ${REPOS_FILE}."
    return 0
  fi

  while read -r rel_path url; do
    [[ -n "${rel_path}" ]] || continue
    [[ "${rel_path}" =~ ^# ]] && continue

    if [[ "${rel_path}" != src/* ]]; then
      echo "Saltando '${rel_path}': la ruta debe comenzar con src/."
      continue
    fi

    if [[ -e "${ROOT_DIR}/${rel_path}" ]]; then
      continue
    fi

    if [[ -z "${url:-}" ]]; then
      echo "Saltando '${rel_path}': falta URL en ${REPOS_FILE}."
      continue
    fi

    echo
    echo "Clonando faltante: ${rel_path} (${url})"
    mkdir -p "$(dirname "${ROOT_DIR}/${rel_path}")"
    if ! git -C "${ROOT_DIR}" clone "${url}" "${rel_path}"; then
      echo "Error clonando '${rel_path}'."
      return 1
    fi
  done < "${REPOS_FILE}"
}

update_repo() {
  local repo_path="$1"

  if ! git -C "${repo_path}" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
    echo "Saltando '${repo_path}': no es un repositorio Git."
    return 0
  fi

  echo
  echo "Actualizando: ${repo_path}"
  if ! git -C "${repo_path}" pull --ff-only; then
    echo "Error en '${repo_path}': git pull fallo."
    return 1
  fi
}

echo "Workspace: ${ROOT_DIR}"

ensure_workspace_dirs

failures=0

if ! clone_missing_src_repos; then
  failures=$((failures + 1))
fi

if ! update_repo "${ROOT_DIR}"; then
  failures=$((failures + 1))
fi

if [[ -d "${SRC_DIR}" ]]; then
  shopt -s nullglob
  for dir in "${SRC_DIR}"/*; do
    [[ -d "${dir}" ]] || continue
    if ! update_repo "${dir}"; then
      failures=$((failures + 1))
    fi
  done
  shopt -u nullglob
else
  echo "Aviso: no existe '${SRC_DIR}'."
fi

echo
if [[ ${failures} -gt 0 ]]; then
  echo "Terminado con ${failures} error(es)."
  exit 1
fi

echo "Terminado sin errores."

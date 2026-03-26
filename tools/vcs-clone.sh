#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
WORKSPACE_DIR="$(cd "${SCRIPT_DIR}/.." && pwd)"
REPOS_FILE="${WORKSPACE_DIR}/.repos"
SRC_DIR="${WORKSPACE_DIR}/src"
IMPORT_BASE_DIR="${SRC_DIR}"

if ! command -v vcs-import >/dev/null 2>&1; then
  echo "Error: 'vcs-import' no está instalado." >&2
  exit 1
fi

if [[ ! -f "${REPOS_FILE}" ]]; then
  echo "Error: no existe ${REPOS_FILE}" >&2
  exit 1
fi

# Si el .repos define rutas desde raíz ('.' o 'src/...'), importar desde workspace.
if grep -Eq '^[[:space:]]{2}(\.|src/)' "${REPOS_FILE}"; then
  IMPORT_BASE_DIR="${WORKSPACE_DIR}"
fi

mkdir -p "${SRC_DIR}"
vcs-import --skip-existing "${IMPORT_BASE_DIR}" < "${REPOS_FILE}"

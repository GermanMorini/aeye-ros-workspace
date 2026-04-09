#!/usr/bin/env bash
set -euo pipefail

CONTAINER="ros2"
WS="/ros2_ws"
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/.." && pwd)"
HOST_BAGS_DIR="${REPO_ROOT}/bags"
CONTAINER_BAGS_DIR="${WS}/bags"
PUBLISH_CLOCK="${PUBLISH_CLOCK:-true}"
CLOCK_RATE="${CLOCK_RATE:-50.0}"

print_available_bags() {
  if [ ! -d "${HOST_BAGS_DIR}" ]; then
    echo "No existe ${HOST_BAGS_DIR}" >&2
    return
  fi

  echo "Bags disponibles en ${HOST_BAGS_DIR}:" >&2
  find "${HOST_BAGS_DIR}" -mindepth 1 -maxdepth 1 -type d -printf '  %f\n' | sort >&2
}

if [ "$#" -lt 1 ]; then
  echo "Uso: $0 <bag_dir|ruta_en_bags> [args_extra_para_ros2_bag_play]" >&2
  print_available_bags
  exit 1
fi

INPUT_PATH="$1"
shift

if [ -d "${INPUT_PATH}" ]; then
  HOST_BAG_DIR="$(readlink -f "${INPUT_PATH}")"
elif [ -d "${HOST_BAGS_DIR}/${INPUT_PATH}" ]; then
  HOST_BAG_DIR="$(readlink -f "${HOST_BAGS_DIR}/${INPUT_PATH}")"
else
  echo "Bag no encontrado: ${INPUT_PATH}" >&2
  print_available_bags
  exit 1
fi

case "${HOST_BAG_DIR}" in
  "${HOST_BAGS_DIR}"/*)
    CONTAINER_BAG_DIR="${CONTAINER_BAGS_DIR}/${HOST_BAG_DIR#${HOST_BAGS_DIR}/}"
    ;;
  *)
    echo "El bag debe vivir dentro de ${HOST_BAGS_DIR}" >&2
    exit 1
    ;;
esac

if [ ! -f "${HOST_BAG_DIR}/metadata.yaml" ]; then
  echo "Bag inválido: falta metadata.yaml en ${HOST_BAG_DIR}" >&2
  exit 1
fi

PLAY_ARGS=()
case "${PUBLISH_CLOCK,,}" in
  true|1|yes)
    PLAY_ARGS+=(--clock "${CLOCK_RATE}")
    ;;
esac
PLAY_ARGS+=("${CONTAINER_BAG_DIR}")
if [ "$#" -gt 0 ]; then
  PLAY_ARGS+=("$@")
fi

printf -v PLAY_ARGS_QUOTED '%q ' "${PLAY_ARGS[@]}"

echo "Reproduciendo bag: ${HOST_BAG_DIR}"
if [ "${PUBLISH_CLOCK,,}" = "true" ] || [ "${PUBLISH_CLOCK,,}" = "1" ] || [ "${PUBLISH_CLOCK,,}" = "yes" ]; then
  echo "Publicando /clock a ${CLOCK_RATE} Hz"
else
  echo "Publicando /clock: no"
fi

docker exec -it "${CONTAINER}" bash -lc "\
  set -eo pipefail && \
  source /opt/ros/\${ROS_DISTRO:-humble}/setup.bash && \
  if [ -f ${WS}/install/setup.bash ]; then source ${WS}/install/setup.bash; fi && \
  cd ${WS} && \
  ros2 bag play ${PLAY_ARGS_QUOTED}"

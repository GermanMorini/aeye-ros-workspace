# ROS 2 Docker Workspace (Nav2 + MAVROS)

## Descripción
Este repositorio provee un workspace de ROS 2 Humble en Docker para el robot Salus (cuatriciclo grande de patrullaje autónomo). Incluye Nav2, MAVROS, ros2_control y herramientas de Gazebo (ros-gz). Mapviz se instala por `apt` en amd64 (no en ARM64 headless).

## Contexto del robot
- Plataforma: Raspberry Pi 5
- Hardware: Pixhawk 6X + DroneCAN F9P (GPS), lidar, odometría de ruedas
- Acceso: `ssh salus`
- Workspace ROS 2 en el robot: `~/ros2_ws`
- Código de referencia de controladores: `~/codigo/RASPY_SALUS`

## Requisitos
- Docker y Docker Compose v2
- Host Linux con X11 si usas RViz/Mapviz
- Permisos para acceder a `/dev` (el contenedor corre en modo privilegiado)

## Inicio rápido
1) Crear directorios locales del workspace:
```bash
./RUNME.sh
```

2) Construir y levantar el contenedor:
```bash
docker compose up -d --build
```

3) Abrir una shell dentro del contenedor:
```bash
./tools/exec.sh
```

4) Compilar el workspace (todo o paquetes específicos):
```bash
./tools/compile-ros.sh
./tools/compile-ros.sh pkg1 pkg2
```

## Crear paquetes en `src`
Opción A: crear un paquete nuevo desde el contenedor (recomendado):
```bash
./tools/create_pkg.sh mi_paquete
./tools/create_pkg.sh mi_paquete --build-type ament_cmake --dependencies rclcpp std_msgs
```

Opción B: crear el paquete a mano dentro de `src`:
```bash
mkdir -p src/mi_paquete
```
Luego agrega los archivos típicos del paquete (`package.xml`, `CMakeLists.txt` o `setup.py`, etc.).

## Agregar paquetes ya existentes a `src`
- Copiar o clonar el paquete dentro de `src`:
```bash
cp -R /ruta/mi_paquete src/
# o
git clone <repo> src/mi_paquete
```

Después de crear o agregar paquetes, compila:
```bash
./tools/compile-ros.sh
```

## Scripts útiles
- `tools/exec.sh` - abre una shell o ejecuta un comando dentro del contenedor
- `tools/root-exec.sh` - abre una shell como root dentro del contenedor
- `tools/create_pkg.sh <nombre> [args...]` - crea un paquete ROS 2 (por defecto ament_python + rclpy)
- `tools/compile-ros.sh [pkgs...]` - compila con colcon dentro del contenedor

## Testear Pixhawk (IMU) con el paquete `sensores`
1) Levanta el contenedor si no está corriendo:
```bash
docker compose up -d
```

2) Compila el paquete:
```bash
./tools/compile-ros.sh sensores
```

3) Ejecuta el driver del Pixhawk (ajusta `serial_port` si hace falta):
```bash
./tools/exec.sh "source /ros2_ws/install/setup.bash; ros2 run sensores pixhawk_driver --ros-args -p serial_port:=/dev/ttyACM0 -p baudrate:=921600"
```

4) En otra terminal, verifica la IMU:
```bash
./tools/exec.sh "source /ros2_ws/install/setup.bash; ros2 topic list | grep imu"
./tools/exec.sh "source /ros2_ws/install/setup.bash; ros2 topic hz /imu/data"
./tools/exec.sh "source /ros2_ws/install/setup.bash; ros2 topic echo /imu/data --qos-profile sensor_data --once"
```

Si ves `Permission denied` en `/dev/ttyACM0`, verifica que el contenedor tenga `dialout` (GID 20) en `docker-compose.yml`
o ejecuta temporalmente con `./tools/root-exec.sh`.

## Detalles del contenedor
- Imagen base: `ros:humble-perception`
- Nombre del contenedor: `ros2`
- Red: `host`
- Privileged: `true`
- Volúmenes: `src`, `build`, `install`, `log`, `/dev` y sockets X11
- Entorno: `TURTLEBOT3_MODEL=waffle`, `RCUTILS_COLORIZED_OUTPUT=1`
- Paquetes extra: Nav2, Mapviz, MAVROS, ros2_control, ackermann, ros-gz

## Instalar paquetes extra
Si necesitas agregar más paquetes o dependencias al contenedor, hazlo a partir de la línea 80 del `Dockerfile` (sección `# PAQUETES EXTRA`). Así aprovechas la caché y evitas reconstruir todo el contenedor, ahorrando tiempo.

## Mapviz
El archivo `mapviz_gps.mvc` se copia dentro del contenedor en `/home/ros/.mapviz_config`.

En **amd64**, el Dockerfile instala Mapviz por `apt` automáticamente.
En **ARM64 (Raspberry Pi)**, **no se instala Mapviz** por defecto (entorno headless).

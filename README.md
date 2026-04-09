# AEye ROS 2 Workspace

Workspace ROS 2 Humble para el robot Salus. El repositorio combina paquetes propios de navegacion, sensores, control de actuadores e interfaces, junto con dependencias vendorizadas del LiDAR RoboSense.

## Paquetes del workspace
- Propios:
  - `interfaces`
  - `controller_server`
  - `map_tools`
  - `navegacion_gps`
  - `sensores`
- Terceros vendorizados:
  - `rslidar_msg`
  - `rslidar_sdk`

Cada paquete bajo `src/` es un repositorio git anidado. Revisa estado y rama por paquete antes de hacer cambios o releases.

## Launches canónicos
- `ros2 launch navegacion_gps simulacion.launch.py`
- `ros2 launch navegacion_gps real.launch.py`
- `ros2 launch navegacion_gps rviz_real.launch.py`
- `ros2 launch sensores pixhawk.launch.py`
- `ros2 launch sensores rs16.launch.py`
- `ros2 launch map_tools no_go_editor.launch.py`
- `ros2 launch controller_server controller_server.launch.py`

## Arquitectura operativa
- Nav2 publica `/cmd_vel`.
- `nav2_collision_monitor` publica `/cmd_vel_safe`.
- `nav_command_server` arbitra `/cmd_vel_safe` y comandos manuales web en `/cmd_vel_teleop`.
- `nav_command_server` publica `/cmd_vel_final` (`interfaces/msg/CmdVelFinal`).
- `controller_server` consume `/cmd_vel_final` y lo traduce al protocolo UART v2 del actuador.
- El LiDAR RS16 publica `/scan_3d` y `pointcloud_to_laserscan` publica `/scan`.
- Localizacion:
  - entradas: `/imu/data`, `/gps/fix`, `/odom`
  - salidas: `/odometry/local`, `/odometry/gps`
  - TF esperada: `map -> odom -> base_footprint`

## Flujo Docker recomendado
1. Levanta el contenedor:
```bash
docker compose up -d --build ros2
```
2. Compila el workspace o paquetes puntuales:
```bash
./tools/compile-ros.sh
./tools/compile-ros.sh interfaces controller_server map_tools navegacion_gps sensores
```
3. Ejecuta un shell en el contenedor:
```bash
./tools/exec.sh
```

## Scripts útiles
- `./tools/exec.sh`: shell o comando dentro del contenedor.
- `./tools/root-exec.sh`: shell como root dentro del contenedor.
- `./tools/compile-ros.sh`: build con `colcon`.
- `./tools/launch_real_nav.sh`: levanta `navegacion_gps real.launch.py`.
- `./tools/launch_real_rviz.sh`: levanta `navegacion_gps rviz_real.launch.py`.
- `./tools/launch_sim_local_v2.sh`: levanta la simulación local v2 (`sim german`, 1 GPS).
- `./tools/launch_controller.sh`: levanta `controller_server controller_server.launch.py`.
- `./tools/launch_no_go_editor.sh`: levanta `map_tools no_go_editor.launch.py`.
- `./tools/healthcheck-lidar.sh`: chequeo rápido de `/scan_3d`, `/scan` y TF.
- `./tools/record_nav_debug_bag.sh [core|full_nav2|sim_german_1gps]`: graba tópicos y los deja persistidos en `./bags/`.
- `./tools/play_nav_debug_bag.sh <bag_dir>`: reproduce un bag guardado en `./bags/` con `/clock`.

## Record y Replay de tópicos
Los rosbags se guardan en `./bags/` del repo y se montan dentro del contenedor en `/ros2_ws/bags`, así se pueden reproducir después sin perderlos al recrear el contenedor.

Perfil recomendado para la parte de 1 GPS en `sim german` (`sim_local_v2.launch.py`):
```bash
docker compose up -d ros2
./tools/launch_sim_local_v2.sh
./tools/record_nav_debug_bag.sh sim_german_1gps
```

Ese perfil incluye `/clock` y las entradas/salidas relevantes de la simulación 1 GPS, incluyendo `/gps/fix_raw`, `/imu/data_raw`, `/scan_3d_raw`, `/odom_raw`, `/joint_states`, `/controller/drive_telemetry`, `/odometry/local` y los comandos de navegación.

Reproducir:
```bash
./tools/play_nav_debug_bag.sh nav_debug_sim_german_1gps_YYYYMMDD_HHMMSS
```

Para levantar nodos contra el replay, usar `use_sim_time:=True`.

## Validación sugerida
Build mínimo dentro del contenedor:
```bash
./tools/compile-ros.sh interfaces controller_server map_tools navegacion_gps sensores
```

Smoke de ejecutables:
```bash
./tools/exec.sh "source /opt/ros/humble/setup.bash && source /ros2_ws/install/setup.bash && ros2 pkg executables navegacion_gps"
./tools/exec.sh "source /opt/ros/humble/setup.bash && source /ros2_ws/install/setup.bash && ros2 pkg executables controller_server"
./tools/exec.sh "source /opt/ros/humble/setup.bash && source /ros2_ws/install/setup.bash && ros2 pkg executables sensores"
```

Smoke de launches:
```bash
./tools/exec.sh "source /opt/ros/humble/setup.bash && source /ros2_ws/install/setup.bash && ros2 launch navegacion_gps real.launch.py --show-args"
./tools/exec.sh "source /opt/ros/humble/setup.bash && source /ros2_ws/install/setup.bash && ros2 launch navegacion_gps simulacion.launch.py --show-args"
./tools/exec.sh "source /opt/ros/humble/setup.bash && source /ros2_ws/install/setup.bash && ros2 launch navegacion_gps rviz_real.launch.py --show-args"
```

## Notas
- `rslidar_sdk` y `rslidar_msg` se mantienen como terceros vendorizados; su documentación upstream puede no reflejar exactamente este workspace.
- Algunos scripts manuales en `tools/` conservan nombres o supuestos viejos. No tomarlos como fuente de verdad sin revisar el código actual.

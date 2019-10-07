# NVIDIA Isaac Integration for SICK AG Lidar


<b> Experimental support for TiM5xx Family !!! </b>

To get started:

1. Download and install [NVIDIA Isaac SDK](https://developer.nvidia.com/isaac-sdk)
2. Clone this repository
```bash
git clone https://github.com/kaidoho/sick_scan_nvidia_isaac.git
```
3. Adjust the path to NVIDIA Isaac SDK. Open the file WORKSPACE and change "/home/blofeld/Downloads/isaac_sdk/isaac_nightly_20190528" to your needs.
```bash
cd sick_scan_nvidia_isaac
gedit WORKSPACE
```
4. Build
```bash
cd sick_scan_nvidia_isaac
bazel build ...
```
5. Adjust the configuration to your needs
```bash
gedit packages/sick_lidar_2d/apps/tim571_sample.app.json
```
```json
"isaac.sick_lidar_2d.TiM5xxFamily": {
  "model": "TiM571",
  "ip": "192.168.100.235",
  "start_angle": "-450000",
  "stop_angle": "2250000"
},
```

6. Run the demo
```bash
bazel run packages/sick_lidar_2d/apps/tim5xx_sample
```

7. Open up a browser and connect to <b> http://127.0.0.1:3000 </b>

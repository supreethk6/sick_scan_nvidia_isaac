# NVIDIA Isaac Integration for SICK AG Lidar


<b> Experimental support for TiM5xx Family !!! </b>

To get started:

1. Download and install [NVIDIA Isaac SDK](https://developer.nvidia.com/isaac-sdk). 
Note that the docs are misleading. You'll find the script to install the dependencies under engine/engine/build/scripts.

2. Clone this repository
```bash
git clone https://github.com/SickScan/sick_scan_nvidia_isaac.git
```
3. Adjust the path to NVIDIA Isaac SDK. Open the file WORKSPACE and change "YOUR_SDK_PATH_HERE" to your needs.
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
  "ip": "192.168.0.1",
  "start_angle": "-450000",
  "stop_angle": "2250000"
},
```

6. Run the demo
```bash
bazel run packages/sick_lidar_2d/apps/tim5xx_sample
```

If you receive error messages complaining about missing "libperception" you have either not installed CUDA, or the wrong version. The repo is known to work with CUDA 10.2.

7. Open up a browser and connect to <b> http://127.0.0.1:3000 </b>

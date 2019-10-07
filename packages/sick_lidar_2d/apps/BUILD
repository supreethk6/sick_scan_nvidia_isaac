"""
Copyright 2019, SICK AG, Waldkirch

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http ://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
"""

load("@com_nvidia_isaac//engine/build:isaac.bzl", "isaac_app", "isaac_cc_module")

isaac_app(
    name = "tim5xx_sample",
    app_json_file = "tim571_sample.app.json",
    modules = [
        "sick_lidar_2d",
        "@com_nvidia_isaac//packages/perception",
        "@com_nvidia_isaac//packages/viewers",
    ],

)

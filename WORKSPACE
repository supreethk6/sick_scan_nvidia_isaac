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

workspace(name = "sick_sensor")

# Point following dependency to Isaac SDK night Release 0528 downloaded from https://developer.nvidia.com/isaac/downloads
local_repository(
    name = "com_nvidia_isaac",
    path = "/home/blofeld/Downloads/isaac_sdk/isaac_nightly_20190528",
)


load("@com_nvidia_isaac//third_party:engine.bzl", "isaac_engine_workspace")
load("@com_nvidia_isaac//third_party:packages.bzl", "isaac_packages_workspace")

isaac_engine_workspace()

isaac_packages_workspace()

# Configures toolchain
load("@com_nvidia_isaac//engine/build/toolchain:toolchain.bzl", "toolchain_configure")

toolchain_configure(name = "toolchain")

####################################################################################################

# SICK AG Sensor specific dependencies

load(":repositories.bzl", "sick_sensor_workspace")

sick_sensor_workspace()

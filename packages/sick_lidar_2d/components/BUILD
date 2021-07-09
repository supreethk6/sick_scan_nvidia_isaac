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

load("@com_nvidia_isaac_engine//bzl:isaac_engine.bzl", "isaac_cc_library")


isaac_cc_library(
    name = "TiM5xxFamily",
    visibility = ["//visibility:public"],
    alwayslink = 1,
    srcs = [
        "TiM5xxFamily.cpp",
        "SSBL_Wrapper.cpp"
    ],
    hdrs = [
        "SickIsaacLidar2D.hpp"
    ],
    deps = [
        "@com_sickag_ssbl//:ssbl",
        "@com_nvidia_isaac_engine//engine/alice",
        "@com_nvidia_isaac_engine//engine/core",
        "@com_nvidia_isaac_sdk//messages",
    ],
    copts = [
		"-Iexternal/com_sickag_ssbl/Components",
		"-Iexternal/com_sickag_ssbl/include",
    ],
)



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

load("@com_nvidia_isaac//engine/build:isaac.bzl", "isaac_http_archive", "isaac_new_http_archive", "isaac_new_local_repository")

def clean_dep(dep):
    return str(Label(dep))

def sick_sensor_workspace():
    isaac_http_archive(
        name = "com_google_absl",
        sha256 = "c8ba586a9ab12bc4a67bb419fc0d2146200942b072bac95f50490f977b7fb04f",
        strip_prefix = "abseil-cpp-5441bbe1db5d0f2ca24b5b60166367b0966790af",
        urls = ["https://github.com/abseil/abseil-cpp/archive/5441bbe1db5d0f2ca24b5b60166367b0966790af.tar.gz"],
        licenses = ["@com_google_absl//:COPYRIGHT"],
    )

    isaac_http_archive(
        name = "com_sickag_ssbl",
        sha256 = "38d3982a130349b5983b93046bab9522d3bb7a551ee82116118d0d2c1605119f",
   	    strip_prefix = "sick_scan_base-0.0.2/src",
        urls = ["https://github.com/SickScan/sick_scan_base/archive/V0.0.2.tar.gz"],
	    build_file = "@//:ssbl.BUILD",
        licenses = ["@com_sickag_ssbl//:COPYRIGHT"],
    )




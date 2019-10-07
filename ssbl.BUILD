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

cc_library(
	name="ssblc",
	srcs = [
		"src/Components/Core/Common/private/Assert.c",
	],
	hdrs = [
		"src/Components/Core/Common/include/Assert.h",
	],
	copts = [
		"-Iexternal/com_sickag_ssbl/src/Components",
		"-Iexternal/com_sickag_ssbl/include",
	],
	linkopts = ["-pthread"],
)

cc_library(
	name="ssbl",
	srcs = [
		"src/Components/API/Skeleton/private/SickSkeletonFactory.cpp",
		"src/Components/API/Skeleton/private/TiM5xxSkeleton/TiM5xxSkeleton_Functions.cpp",
		"src/Components/API/Skeleton/private/TiM5xxSkeleton/TiM5xxSkeleton_Variables.cpp",
		"src/Components/API/Skeleton/private/TiM5xxSkeleton/TiM5xxSkeleton.cpp",
		"src/Components/API/Skeleton/private/TiM5xxSkeleton/TiM5xxSkeleton_CoLa_Extension.cpp",
		"src/Components/API/Families/SickLidar2D/private/TiM5xxSeries.cpp",
		"src/Components/API/Families/SickLidar2D/private/SickLidar2D.cpp",
		"src/Components/API/Families/SickLidar2D/private/SickLidar2D_Factory.cpp",
		"src/Components/AutoIp/private/AutoIpHandler.cpp",
		"src/Components/Core/Sensor/private/CoLa/DefaultCoLaFunctions.cpp",
		"src/Components/Core/Sensor/private/CoLa/CoLaSensorSkeleton.cpp",
		"src/Components/Core/Sensor/private/Common/SickSensorFunction.cpp",
		"src/Components/Core/Sensor/private/Common/SickSensorSkeleton.cpp",
		"src/Components/Core/Sensor/private/Common/SickSensorInterface.cpp",
		"src/Components/Core/OS/private/Linux/Mutex.cpp",
		"src/Components/Core/OS/private/Linux/Task.cpp",
		"src/Components/Core/OS/private/Linux/VariableEventQueue.cpp",
		"src/Components/Core/OS/private/Linux/Time.cpp",
		"src/Components/Core/OS/private/Linux/Timer.cpp",
		"src/Components/Core/OS/private/Linux/Event.cpp",
		"src/Components/Core/Driver/private/Linux/Socket.cpp",
		"src/Components/Logger/private/Logger.cpp",
		"src/Components/Protocol/private/CoLa/CoLaBSerializer.cpp",
		"src/Components/Protocol/private/CoLa/CoLaASerializer.cpp",
		"src/Components/Protocol/private/CoLa/CoLaBProtocol.cpp",
		"src/Components/Protocol/private/CoLa/CoLaBDeserializer.cpp",
		"src/Components/Protocol/private/CoLa/CoLaADeserializer.cpp",
		"src/Components/Protocol/private/CoLa/CoLaProtocol.cpp",
		"src/Components/Protocol/private/CoLa/CoLaAProtocol.cpp",
		"src/Components/Protocol/private/Common/Protocol.cpp",
		"src/Components/Protocol/private/Common/Checksum.cpp",
		"src/Components/Protocol/private/Common/TelegramBuffer.cpp",
		"src/Components/Types/private/emptyfile.cpp",
	],
	hdrs = [
		"include/SSBL.h",
		"src/Components/API/Skeleton/include/SickSkeletonFactory.h",
		"src/Components/API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton.h",
		"src/Components/API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_Types.h",
		"src/Components/API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_CoLa_Extension.h",
		"src/Components/API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_Functions.h",
		"src/Components/API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_Variables.h",
		"src/Components/API/Families/SickLidar2D/include/SickLidar2D_Factory.h",
		"src/Components/API/Families/SickLidar2D/include/TiM5xxSeries.h",
		"src/Components/API/Families/SickLidar2D/include/SickLidar2D.h",
		"src/Components/API/Families/SickLidar2D/include/SickLidar2D_Models.h",
		"src/Components/AutoIp/include/AutoIpHandler.h",
		"src/Components/Core/Sensor/private/CoLa/DefaultCoLaFunctions.h",
		"src/Components/Core/Sensor/include/CoLa/CoLaSensorSkeleton.h",
		"src/Components/Core/Sensor/include/Common/SickSensorComObjRepository.h",
		"src/Components/Core/Sensor/include/Common/SickSensorFunction.h",
		"src/Components/Core/Sensor/include/Common/SickSensorInterface.h",
		"src/Components/Core/Sensor/include/Common/SickSensorVariable.h",
		"src/Components/Core/Sensor/include/Common/SickSensorSkeleton.h",
		"src/Components/Core/OS/include/Event.h",
		"src/Components/Core/OS/include/Mutex.h",
		"src/Components/Core/OS/include/Task.h",
		"src/Components/Core/OS/include/Time.h",
		"src/Components/Core/OS/include/Timer.h",
		"src/Components/Core/OS/include/VariableEventQueue.h",
		"src/Components/Core/Driver/include/Socket.h",
		"src/Components/Core/Common/include/CallbackProvider.h",
		"src/Components/Core/Common/include/Endianess.h",
		"src/Components/Core/Common/include/Hash.h",
		"src/Components/Core/Common/include/Assert.h",
		"src/Components/Logger/include/Logger.h",
		"src/Components/Protocol/include/CoLa/CoLaProtocol.h",
		"src/Components/Protocol/include/CoLa/CoLaBDeserializer.h",
		"src/Components/Protocol/include/CoLa/CoLaBProtocol.h",
		"src/Components/Protocol/include/CoLa/CoLaASerializer.h",
		"src/Components/Protocol/include/CoLa/CoLaBSerializer.h",
		"src/Components/Protocol/include/CoLa/CoLaAProtocol.h",
		"src/Components/Protocol/include/CoLa/CoLaADeserializer.h",
		"src/Components/Protocol/include/Common/Checksum.h",
		"src/Components/Protocol/include/Common/Deserializer.h",
		"src/Components/Protocol/include/Common/Protocol.h",
		"src/Components/Protocol/include/Common/Serializer.h",
		"src/Components/Protocol/include/Common/TelegramBuffer.h",
		"src/Components/Protocol/include/Common/ComObject.h",
		"src/Components/Types/include/SickSensorReturnCodes.h",
		"src/Components/Types/include/BasicTypes.h",
	],
	copts = [
		"-Iexternal/com_sickag_ssbl/src/Components",
		"-Iexternal/com_sickag_ssbl/include",
		"-std=c++14"
	],
	linkopts = ["-pthread"],
	visibility = ["//visibility:public"],
	deps = [":ssblc"],
)

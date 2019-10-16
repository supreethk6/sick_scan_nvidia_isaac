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
		"Components/Core/Common/private/Assert.c",
	],
	hdrs = [
		"Components/Core/Common/include/Assert.h",
	],
	copts = [
		"-Iexternal/com_sickag_ssbl/Components",
		"-Iexternal/com_sickag_ssbl/include",
	],
	linkopts = ["-pthread"],
)

cc_library(
	name="ssbl",
	srcs = [
		"Components/API/Skeleton/private/SickSkeletonFactory.cpp",
		"Components/API/Skeleton/private/TiM5xxSkeleton/TiM5xxSkeleton_Functions.cpp",
		"Components/API/Skeleton/private/TiM5xxSkeleton/TiM5xxSkeleton_Variables.cpp",
		"Components/API/Skeleton/private/TiM5xxSkeleton/TiM5xxSkeleton.cpp",
		"Components/API/Skeleton/private/TiM5xxSkeleton/TiM5xxSkeleton_CoLa_Extension.cpp",
		"Components/API/Families/SickLidar2D/private/TiM5xxSeries.cpp",
		"Components/API/Families/SickLidar2D/private/SickLidar2D.cpp",
		"Components/API/Families/SickLidar2D/private/SickLidar2D_Factory.cpp",
		"Components/AutoIp/private/AutoIpHandler.cpp",
		"Components/Core/Sensor/private/CoLa/DefaultCoLaFunctions.cpp",
		"Components/Core/Sensor/private/CoLa/CoLaSensorSkeleton.cpp",
		"Components/Core/Sensor/private/Common/SickSensorFunction.cpp",
		"Components/Core/Sensor/private/Common/SickSensorSkeleton.cpp",
		"Components/Core/Sensor/private/Common/SickSensorInterface.cpp",
		"Components/Core/OS/private/Linux/Mutex.cpp",
		"Components/Core/OS/private/Linux/Task.cpp",
		"Components/Core/OS/private/Linux/VariableEventQueue.cpp",
		"Components/Core/OS/private/Linux/Time.cpp",
		"Components/Core/OS/private/Linux/Timer.cpp",
		"Components/Core/OS/private/Linux/Event.cpp",
		"Components/Core/Driver/private/Linux/Socket.cpp",
		"Components/Logger/private/Logger.cpp",
		"Components/Protocol/private/CoLa/CoLaBSerializer.cpp",
		"Components/Protocol/private/CoLa/CoLaASerializer.cpp",
		"Components/Protocol/private/CoLa/CoLaBProtocol.cpp",
		"Components/Protocol/private/CoLa/CoLaBDeserializer.cpp",
		"Components/Protocol/private/CoLa/CoLaADeserializer.cpp",
		"Components/Protocol/private/CoLa/CoLaProtocol.cpp",
		"Components/Protocol/private/CoLa/CoLaAProtocol.cpp",
		"Components/Protocol/private/Common/Protocol.cpp",
		"Components/Protocol/private/Common/Checksum.cpp",
		"Components/Protocol/private/Common/TelegramBuffer.cpp",
		"Components/Types/private/emptyfile.cpp",
	],
	hdrs = [
		"include/SSBL.h",
		"Components/API/Skeleton/include/SickSkeletonFactory.h",
		"Components/API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton.h",
		"Components/API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_Types.h",
		"Components/API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_CoLa_Extension.h",
		"Components/API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_Functions.h",
		"Components/API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_Variables.h",
		"Components/API/Families/SickLidar2D/include/SickLidar2D_Factory.h",
		"Components/API/Families/SickLidar2D/include/TiM5xxSeries.h",
		"Components/API/Families/SickLidar2D/include/SickLidar2D.h",
		"Components/API/Families/SickLidar2D/include/SickLidar2D_Models.h",
		"Components/AutoIp/include/AutoIpHandler.h",
		"Components/Core/Sensor/private/CoLa/DefaultCoLaFunctions.h",
		"Components/Core/Sensor/include/CoLa/CoLaSensorSkeleton.h",
		"Components/Core/Sensor/include/Common/SickSensorComObjRepository.h",
		"Components/Core/Sensor/include/Common/SickSensorFunction.h",
		"Components/Core/Sensor/include/Common/SickSensorInterface.h",
		"Components/Core/Sensor/include/Common/SickSensorVariable.h",
		"Components/Core/Sensor/include/Common/SickSensorSkeleton.h",
		"Components/Core/OS/include/Event.h",
		"Components/Core/OS/include/Mutex.h",
		"Components/Core/OS/include/Task.h",
		"Components/Core/OS/include/Time.h",
		"Components/Core/OS/include/Timer.h",
		"Components/Core/OS/include/VariableEventQueue.h",
		"Components/Core/Driver/include/Socket.h",
		"Components/Core/Common/include/CallbackProvider.h",
		"Components/Core/Common/include/MakeUnique.h",
		"Components/Core/Common/include/Endianess.h",
		"Components/Core/Common/include/Hash.h",
		"Components/Core/Common/include/Assert.h",
		"Components/Logger/include/Logger.h",
		"Components/Protocol/include/CoLa/CoLaProtocol.h",
		"Components/Protocol/include/CoLa/CoLaBDeserializer.h",
		"Components/Protocol/include/CoLa/CoLaBProtocol.h",
		"Components/Protocol/include/CoLa/CoLaASerializer.h",
		"Components/Protocol/include/CoLa/CoLaBSerializer.h",
		"Components/Protocol/include/CoLa/CoLaAProtocol.h",
		"Components/Protocol/include/CoLa/CoLaADeserializer.h",
		"Components/Protocol/include/Common/Checksum.h",
		"Components/Protocol/include/Common/Deserializer.h",
		"Components/Protocol/include/Common/Protocol.h",
		"Components/Protocol/include/Common/Serializer.h",
		"Components/Protocol/include/Common/TelegramBuffer.h",
		"Components/Protocol/include/Common/ComObject.h",
		"Components/Types/include/SickSensorReturnCodes.h",
		"Components/Types/include/BasicTypes.h",
	],
	copts = [
		"-Iexternal/com_sickag_ssbl/Components",
		"-Iexternal/com_sickag_ssbl/include",
		"-std=c++14"
	],
	linkopts = ["-pthread"],
	visibility = ["//visibility:public"],
	deps = [":ssblc"],
)

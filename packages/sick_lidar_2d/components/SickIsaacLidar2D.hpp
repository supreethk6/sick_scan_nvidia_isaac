// Copyright 2019, SICK AG, Waldkirch
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http ://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <memory>
#include <string>
#include <vector>

#include "engine/alice/alice_codelet.hpp"
#include "engine/core/byte.hpp"
#include "engine/core/optional.hpp"
#include "messages/range_scan.capnp.h"


//Forward declare
namespace ssbl {
  class Lidar2d;
}

namespace isaac {



namespace sick_lidar_2d {


// A driver for the SICK AG TiM5xx Family (excluding TiM510) 
class TiM5xxFamily : public alice::Codelet {
 public:
  void start() override;
  void tick() override;
  void stop() override;

  // A range scan slice published by the Lidar
  ISAAC_PROTO_TX(RangeScanProto, scan);

  // The IP address of the Lidar device
  ISAAC_PARAM(std::string, ip, "192.168.1.26");

  // The model name of the Lidar 
  ISAAC_PARAM(std::string, model, "TiM551");


  // Start Angle [1/10000°]
  ISAAC_PARAM(int32_t, start_angle, -450000);
  
  // Stop Angle [/10000°]
  ISAAC_PARAM(int32_t, stop_angle, 2250000);
  
 private:

  void scanProcessor(uint64_t * pScan);


  ssbl::Lidar2d * pLidar;
};

}  // namespace sick_lidar_2d
}  // namespace isaac

ISAAC_ALICE_REGISTER_CODELET(isaac::sick_lidar_2d::TiM5xxFamily);

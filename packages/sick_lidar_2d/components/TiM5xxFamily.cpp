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
 
#include "SickIsaacLidar2D.hpp"
#include <cerrno>
#include <cmath>
#include <cstring>
#include <vector>
#include <iostream>

#include "engine/core/assert.hpp"
#include "engine/core/constants.hpp"
#include "engine/core/logger.hpp"
#include "SSBL.h"





using namespace ssbl;

namespace isaac {
namespace sick_lidar_2d {


void TiM5xxFamily::start() {
 
  pLidar = CreateSickLidar2d(get_model(), get_ip());

  
  if(SSBL_SUCCESS == pLidar->Initialize(
    get_start_angle(), get_stop_angle(), std::bind(&TiM5xxFamily::scanProcessor, this, std::placeholders::_1))) {

    // Sry, had to find out that the sequence within ->Start() can be
    // fired too fast. Got to change this in the underlying lib and 
    // read out the sensor's state machine and assure its ready before sending the next request
    if(SSBL_SUCCESS !=  pLidar->Start())
    {
      reportFailure("Failed to start Lidar");
    }    
  } 
  else
  {
    reportFailure("Failed to initialize Lidar");
  }

  tickBlocking();
}

void TiM5xxFamily::tick() {
  if(nullptr != pLidar)
  {

    if(!pLidar->WaitForScanEvent(5000))
    {
      reportFailure("Timeout");
    }
  }
}

void TiM5xxFamily::stop() {
  if(nullptr != pLidar)
  {
    delete pLidar;
  }
}


void TiM5xxFamily::scanProcessor(uint64_t * pScan)
{
  auto range_scan_proto = tx_scan().initProto();

  auto *pVar = reinterpret_cast<ssbl::DevTiM5xxSkeleton::ScanData_TiM5xxSkeleton_Var *>(pScan);

  const float scaleFactor = (65535.0 * (float)pVar->Value_.aDataChannel16[0].DataChannelHdr.dScaleFactor) /1000.0;
  range_scan_proto.setRangeDenormalizer(scaleFactor); 
  range_scan_proto.setIntensityDenormalizer(100); //100%
  range_scan_proto.setInvalidRangeThreshold(0); //need to review if we should have this at 0.5
  range_scan_proto.setOutOfRangeThreshold(25); //25m
  range_scan_proto.setDeltaTime(1/((float) pVar->Value_.MeasurementParam1Block.udiScanFreq));

  //2D Scan - only 1 Phi
  range_scan_proto.initPhi(1);
  range_scan_proto.getPhi().set(0, 0);

  //number of beams may vary +/-1 from scan to scan
  uint32_t n_rays = pVar->Value_.aDataChannel16[0].uiLengthaData;

  auto thetas_proto = range_scan_proto.initTheta(n_rays);
  auto rays_proto = range_scan_proto.initRays(n_rays);

  for (uint32_t i = 0; i < n_rays; i++) {
    thetas_proto.set(i, DegToRad(
      static_cast<double>(pVar->Value_.aDataChannel16[0].DataChannelHdr.diStartAngle +
      i*pVar->Value_.aDataChannel16[0].DataChannelHdr.uiAngleRes)/10000
    ));
    rays_proto[i].setRange(pVar->Value_.aDataChannel16[0].aData[i]);
    rays_proto[i].setIntensity(pVar->Value_.aDataChannel8[0].aData[i]);
  }
  
  tx_scan().publish();

}


}  // namespace sick_lidar_2d
}  // namespace isaac

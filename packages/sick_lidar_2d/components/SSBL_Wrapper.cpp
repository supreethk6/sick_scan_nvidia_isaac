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

#include "engine/core/assert.hpp"
#include "engine/core/constants.hpp"
#include "engine/core/logger.hpp"
#include "SSBL.h"



// Overwrite some library functions to forward assert and log messages to Isaac Framework
namespace ssbl
{

  void lib_assertion_handler(const char* assert, const char* func,
                           const char* file, int line)
  {
    ASSERT(0, "SSBL ASSERT: (%s), function %s, file %s, line %d.\n", assert, func, file, line);
  }

  void printlog(LogLevel level, const char *szMessage)
  {
    switch(level)
    {
      case LVL_DEBUG:
    	  LOG_DEBUG(szMessage);
        break;
      case LVL_INFO:
    	  LOG_INFO(szMessage);
        break;
      case LVL_WARNING:
        LOG_WARNING(szMessage);
        break;
      case LVL_ERROR:
    	  LOG_ERROR(szMessage);
        break;
      default:
        LOG_ERROR(szMessage);
    }
  }
}


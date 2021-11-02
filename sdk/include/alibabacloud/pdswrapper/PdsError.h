/*
 * Copyright 2009-2021 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <alibabacloud/pdswrapper/common.h>
#include <alibabacloud/pdswrapper/ClientConfiguration.h>


// ========== C-interface for hPdsError
typedef void* hPdsError;

EXPORT_C hPdsError hPdsError_New();
EXPORT_C void hPdsError_Del(hPdsError self);

EXPORT_C void hPdsError_setCode(hPdsError self, char* code);
EXPORT_C char* hPdsError_Code(hPdsError self);

EXPORT_C void hPdsError_setMessage(hPdsError self, char* message);
EXPORT_C char* hPdsError_Message(hPdsError self);

EXPORT_C void hPdsError_setRequestId(hPdsError self, char* requestId);
EXPORT_C char* hPdsError_RequestId(hPdsError self);

EXPORT_C void hPdsError_setHost(hPdsError self, char* host);
EXPORT_C char* hPdsError_Host(hPdsError self);

EXPORT_C void hPdsError_print(hPdsError);

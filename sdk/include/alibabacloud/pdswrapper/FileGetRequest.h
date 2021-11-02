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


// ========== C-interface for hFileGetRequest
typedef void* hFileGetRequest;

EXPORT_C hFileGetRequest hFileGetRequest_New(char* driveID,
                                                char* shareID,
                                                char* fileID);
EXPORT_C void hFileGetRequest_Del(hFileGetRequest self);

EXPORT_C void hFileGetRequest_setUrlExpireSec(hFileGetRequest self, int64_t urlExpireSec);
EXPORT_C void hFileGetRequest_setShareToken(hFileGetRequest self, char* shareToken);

EXPORT_C void hFileGetRequest_print(hFileGetRequest self);

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
#include <alibabacloud/pdswrapper/PartInfoReq.h>
#include <alibabacloud/pdswrapper/MetaUserTag.h>


// ========== C-interface for hFileCreateRequest
typedef void* hFileCreateRequest;

EXPORT_C hFileCreateRequest hFileCreateRequest_New(char* driveID,
                                                char* parentFileID,
                                                char* name,
                                                char* fileID,
                                                char* checkNameMode,
                                                int64_t size);
EXPORT_C void hFileCreateRequest_Del(hFileCreateRequest self);

EXPORT_C void hFileCreateRequest_setPartInfoList(hFileCreateRequest self, hPartInfoReqList partInfoReqList);
EXPORT_C void hFileCreateRequest_setUserTags(hFileCreateRequest self, hUserTagList userTagList);
EXPORT_C void hFileCreateRequest_setPreHash(hFileCreateRequest self, char* preHash);
EXPORT_C void hFileCreateRequest_setContentHash(hFileCreateRequest self, char* contentHash);

EXPORT_C void hFileCreateRequest_print(hFileCreateRequest self);

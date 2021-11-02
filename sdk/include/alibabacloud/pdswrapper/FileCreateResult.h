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
#include <alibabacloud/pdswrapper/PartInfoResp.h>


// ========== C-interface for hFileCreateResult
typedef void* hFileCreateResult;

EXPORT_C char* hFileCreateResult_DriveID(hFileCreateResult self);
EXPORT_C char* hFileCreateResult_EncryptMode(hFileCreateResult self);
EXPORT_C char* hFileCreateResult_FileID(hFileCreateResult self);
EXPORT_C char* hFileCreateResult_FileName(hFileCreateResult self);
EXPORT_C char* hFileCreateResult_Location(hFileCreateResult self);
EXPORT_C char* hFileCreateResult_ParentFileID(hFileCreateResult self);
EXPORT_C bool hFileCreateResult_RapidUpload(hFileCreateResult self);
EXPORT_C char* hFileCreateResult_Type(hFileCreateResult self);
EXPORT_C char* hFileCreateResult_UploadID(hFileCreateResult self);
EXPORT_C bool hFileCreateResult_Exist(hFileCreateResult self);
EXPORT_C hPartInfoRespList hFileCreateResult_PartInfoRespList(hFileCreateResult self);

EXPORT_C void hFileCreateResult_print(hFileCreateResult self);

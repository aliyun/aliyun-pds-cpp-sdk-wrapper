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
#ifndef _PDS_CPP_SDK_WRAPPER_FILE_COMPLETE_RESULT_H_
#define _PDS_CPP_SDK_WRAPPER_FILE_COMPLETE_RESULT_H_

#include <alibabacloud/pdswrapper/common.h>


// ========== C-interface for hFileCompleteResult
typedef void* hFileCompleteResult;

EXPORT_C char* hFileCompleteResult_Category(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_ContentHash(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_ContentHashName(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_ContentType(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_Crc64Hash(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_CreatedAt(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_DriveID(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_EncryptMode(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_FileExtension(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_FileID(hFileCompleteResult self);
EXPORT_C bool hFileCompleteResult_Hidden(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_Location(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_Name(hFileCompleteResult self);
EXPORT_C bool hFileCompleteResult_RapidUpload(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_ParentFileID(hFileCompleteResult self);
EXPORT_C int64_t hFileCompleteResult_Size(hFileCompleteResult self);
EXPORT_C bool hFileCompleteResult_Starred(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_Status(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_Type(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_UpdatedAT(hFileCompleteResult self);
EXPORT_C char* hFileCompleteResult_UploadID(hFileCompleteResult self);

EXPORT_C void hFileCompleteResult_print(hFileCompleteResult self);

#endif

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
#ifndef _PDS_CPP_SDK_WRAPPER_FILE_GET_RESULT_H_
#define _PDS_CPP_SDK_WRAPPER_FILE_GET_RESULT_H_

#include <alibabacloud/pdswrapper/common.h>
#include <alibabacloud/pdswrapper/MetaUserTag.h>


// ========== C-interface for hFileGetResult
typedef void* hFileGetResult;

EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_Category(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_ContentHash(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_ContentHashName(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_ContentType(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_Crc64Hash(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_CreatedAt(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_Description(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_DownloadUrl(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_DriveID(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_EncryptMode(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_FileExtension(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_FileID(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT bool hFileGetResult_Hidden(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_Name(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_ParentFileID(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hFileGetResult_PunishFlag(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hFileGetResult_Size(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT bool hFileGetResult_Starred(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_Status(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_Thumbnail(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT bool hFileGetResult_Trashed(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_Type(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_UpdatedAT(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_Url(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetResult_UploadID(hFileGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hUserTagMap hFileGetResult_UserTags(hFileGetResult self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hFileGetResult_print(hFileGetResult self);

#endif

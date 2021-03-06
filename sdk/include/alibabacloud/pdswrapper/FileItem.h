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
#ifndef _PDS_CPP_SDK_WRAPPER_FILE_ITEM_H_
#define _PDS_CPP_SDK_WRAPPER_FILE_ITEM_H_

#include <alibabacloud/pdswrapper/common.h>
#include <alibabacloud/pdswrapper/MetaUserTag.h>


// ========== C-interface for hFileItem
typedef void* hFileItem;

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hFileItem_Del(hFileItem self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_Category(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_ContentHash(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_ContentHashName(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_ContentType(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_Crc64Hash(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_CreatedAt(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_Description(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_DownloadUrl(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_DriveID(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_EncryptMode(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_FileExtension(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_FileID(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT bool hFileItem_Hidden(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_Name(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_ParentFileID(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hFileItem_PunishFlag(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hFileItem_Size(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT bool hFileItem_Starred(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_Status(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_Thumbnail(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT bool hFileItem_Trashed(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_Type(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_UpdatedAT(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_Url(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileItem_UploadID(hFileItem self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hUserTagMap hFileItem_UserTags(hFileItem self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hFileItem_print(hFileItem self);

// ========== C-interface for hFileItemList
typedef void* hFileItemList;

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hFileItemList_Del(hFileItemList self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT size_t hFileItemList_size(hFileItemList self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hFileItem hFileItemList_at(hFileItemList self, size_t i);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hFileItemList_print(hFileItemList self);

#endif

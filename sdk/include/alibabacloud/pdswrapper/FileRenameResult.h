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
#ifndef _PDS_CPP_SDK_WRAPPER_FILE_RENAME_RESULT_H_
#define _PDS_CPP_SDK_WRAPPER_FILE_RENAME_RESULT_H_

#include <alibabacloud/pdswrapper/common.h>


// ========== C-interface for hFileRenameResult
typedef void* hFileRenameResult;

EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileRenameResult_DriveID(hFileRenameResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileRenameResult_FileID(hFileRenameResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileRenameResult_Name(hFileRenameResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileRenameResult_ParentFileID(hFileRenameResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileRenameResult_Type(hFileRenameResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileRenameResult_CreatedAt(hFileRenameResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileRenameResult_UpdatedAt(hFileRenameResult self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hFileRenameResult_print(hFileRenameResult self);

#endif

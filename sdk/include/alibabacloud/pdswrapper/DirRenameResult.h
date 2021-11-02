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
#ifndef _PDS_CPP_SDK_WRAPPER_DIR_RENAME_RESULT_H_
#define _PDS_CPP_SDK_WRAPPER_DIR_RENAME_RESULT_H_

#include <alibabacloud/pdswrapper/common.h>
#include <alibabacloud/pdswrapper/ClientConfiguration.h>


// ========== C-interface for hDirRenameResult
typedef void* hDirRenameResult;

EXPORT_C char* hDirRenameResult_DriveID(hDirRenameResult self);
EXPORT_C char* hDirRenameResult_FileID(hDirRenameResult self);
EXPORT_C char* hDirRenameResult_Name(hDirRenameResult self);
EXPORT_C char* hDirRenameResult_ParentFileID(hDirRenameResult self);
EXPORT_C char* hDirRenameResult_Type(hDirRenameResult self);
EXPORT_C char* hDirRenameResult_CreatedAt(hDirRenameResult self);
EXPORT_C char* hDirRenameResult_UpdatedAt(hDirRenameResult self);

EXPORT_C void hDirRenameResult_print(hDirRenameResult self);

#endif

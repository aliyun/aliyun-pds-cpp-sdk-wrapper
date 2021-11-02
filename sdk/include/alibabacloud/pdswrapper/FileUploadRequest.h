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
#include <alibabacloud/pdswrapper/MetaUserTag.h>
#include <alibabacloud/pdswrapper/TransferControl.h>


// ========== C-interface for hFileUploadRequest
typedef void* hFileUploadRequest;

EXPORT_C hFileUploadRequest hFileUploadRequest_New_1(char* driveID,
                                                char* parentFileID,
                                                char* name,
                                                char* fileID,
                                                char* checkNameMode,
                                                char* filePath,
                                                char* checkpointDir);
EXPORT_C hFileUploadRequest hFileUploadRequest_New_2(char* driveID,
                                                char* parentFileID,
                                                char* name,
                                                char* fileID,
                                                char* checkNameMode,
                                                char* filePath);
EXPORT_C hFileUploadRequest hFileUploadRequest_New_3(char* driveID,
                                                char* parentFileID,
                                                char* name,
                                                char* fileID,
                                                char* checkNameMode,
                                                char* filePath,
                                                char* checkpointDir,
                                                uint64_t partSize,
                                                uint32_t threadNum);
EXPORT_C void hFileUploadRequest_Del(hFileUploadRequest self);

EXPORT_C char* hFileUploadRequest_FilePath(hFileUploadRequest self);
EXPORT_C char* hFileUploadRequest_DriveID(hFileUploadRequest self);
EXPORT_C char* hFileUploadRequest_ParentFileID(hFileUploadRequest self);
EXPORT_C char* hFileUploadRequest_Name(hFileUploadRequest self);
EXPORT_C char* hFileUploadRequest_FileID(hFileUploadRequest self);
EXPORT_C char* hFileUploadRequest_CheckNameMode(hFileUploadRequest self);
EXPORT_C hUserTagList hFileUploadRequest_UserTags(hFileUploadRequest self);

EXPORT_C void hFileUploadRequest_setUserTags(hFileUploadRequest self, hUserTagList userTags);
EXPORT_C void hFileUploadRequest_setTransferProgress(hFileUploadRequest self, hTransferProgress progress);
EXPORT_C void hFileUploadRequest_setProgressControl(hFileUploadRequest self, hProgressControl control);

EXPORT_C void hFileUploadRequest_print(hFileUploadRequest self);

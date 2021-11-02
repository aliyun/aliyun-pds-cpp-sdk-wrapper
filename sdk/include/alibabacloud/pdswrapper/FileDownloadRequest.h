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


// ========== C-interface for hFileDownloadRequest
typedef void* hFileDownloadRequest;

EXPORT_C hFileDownloadRequest hFileDownloadRequest_New_1(char* driveID,
                                                char* shareID,
                                                char* fileID,
                                                char* filePath);
EXPORT_C hFileDownloadRequest hFileDownloadRequest_New_2(char* driveID,
                                                char* shareID,
                                                char* fileID,
                                                char* filePath,
                                                char* checkpointDir);
EXPORT_C hFileDownloadRequest hFileDownloadRequest_New_3(char* driveID,
                                                char* shareID,
                                                char* fileID,
                                                char* filePath,
                                                char* checkpointDir,
                                                uint64_t partSize,
                                                uint32_t threadNum);
EXPORT_C void hFileDownloadRequest_Del(hFileDownloadRequest self);

EXPORT_C char* hFileDownloadRequest_FilePath(hFileDownloadRequest self);
EXPORT_C char* hFileDownloadRequest_TempFilePath(hFileDownloadRequest self);
EXPORT_C char* hFileDownloadRequest_DriveID(hFileDownloadRequest self);
EXPORT_C char* hFileDownloadRequest_ShareID(hFileDownloadRequest self);
EXPORT_C char* hFileDownloadRequest_FileID(hFileDownloadRequest self);
EXPORT_C char* hFileDownloadRequest_ShareToken(hFileDownloadRequest self);


EXPORT_C void hFileDownloadRequest_setShareToken(hFileDownloadRequest self, char* shareToken);
EXPORT_C void hFileDownloadRequest_setTransferProgress(hFileDownloadRequest self, hTransferProgress progress);
EXPORT_C void hFileDownloadRequest_setProgressControl(hFileDownloadRequest self, hProgressControl control);

EXPORT_C void hFileDownloadRequest_print(hFileDownloadRequest self);

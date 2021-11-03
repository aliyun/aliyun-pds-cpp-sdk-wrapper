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
#ifndef _PDS_CPP_SDK_WRAPPER_PDS_CLIENT_H_
#define _PDS_CPP_SDK_WRAPPER_PDS_CLIENT_H_

#include <alibabacloud/pdswrapper/common.h>
#include <alibabacloud/pdswrapper/ClientConfiguration.h>
#include <alibabacloud/pdswrapper/DirCreateRequest.h>
#include <alibabacloud/pdswrapper/DirCreateOutcome.h>
#include <alibabacloud/pdswrapper/DirRenameRequest.h>
#include <alibabacloud/pdswrapper/DirRenameOutcome.h>
#include <alibabacloud/pdswrapper/DirListRequest.h>
#include <alibabacloud/pdswrapper/DirListOutcome.h>
#include <alibabacloud/pdswrapper/DirTrashRequest.h>
#include <alibabacloud/pdswrapper/DirTrashOutcome.h>
#include <alibabacloud/pdswrapper/DirDeleteRequest.h>
#include <alibabacloud/pdswrapper/DirDeleteOutcome.h>
#include <alibabacloud/pdswrapper/AsyncTaskGetRequest.h>
#include <alibabacloud/pdswrapper/AsyncTaskGetOutcome.h>
#include <alibabacloud/pdswrapper/FileCompleteRequest.h>
#include <alibabacloud/pdswrapper/FileCompleteOutcome.h>
#include <alibabacloud/pdswrapper/FileCreateRequest.h>
#include <alibabacloud/pdswrapper/FileCreateOutcome.h>
#include <alibabacloud/pdswrapper/FileDeleteRequest.h>
#include <alibabacloud/pdswrapper/FileDeleteOutcome.h>
#include <alibabacloud/pdswrapper/FileGetDownloadUrlRequest.h>
#include <alibabacloud/pdswrapper/FileGetDownloadUrlOutcome.h>
#include <alibabacloud/pdswrapper/FileGetRequest.h>
#include <alibabacloud/pdswrapper/FileGetOutcome.h>
#include <alibabacloud/pdswrapper/FileGetUploadUrlRequest.h>
#include <alibabacloud/pdswrapper/FileGetUploadUrlOutcome.h>
#include <alibabacloud/pdswrapper/FileListUploadedPartsRequest.h>
#include <alibabacloud/pdswrapper/FileListUploadedPartsOutcome.h>
#include <alibabacloud/pdswrapper/FileRenameRequest.h>
#include <alibabacloud/pdswrapper/FileRenameOutcome.h>
#include <alibabacloud/pdswrapper/FileTrashRequest.h>
#include <alibabacloud/pdswrapper/FileTrashOutcome.h>
#include <alibabacloud/pdswrapper/DataPutOutcome.h>
#include <alibabacloud/pdswrapper/MetaUserTagsPutRequest.h>
#include <alibabacloud/pdswrapper/MetaUserTagsPutOutcome.h>
#include <alibabacloud/pdswrapper/MetaUserTagsDeleteRequest.h>
#include <alibabacloud/pdswrapper/PdsOutcome.h>
#include <alibabacloud/pdswrapper/FileUploadRequest.h>
#include <alibabacloud/pdswrapper/DataGetOutcome.h>
#include <alibabacloud/pdswrapper/FileDownloadRequest.h>
#include <alibabacloud/pdswrapper/Credentials.h>


// ========== C-interface for initialize
EXPORT_C ALIBABACLOUD_PDS_EXPORT void Pds_InitializeSdk();
EXPORT_C ALIBABACLOUD_PDS_EXPORT bool Pds_IsSdkInitialized();
EXPORT_C ALIBABACLOUD_PDS_EXPORT void Pds_ShutdownSdk();

// ========== C-interface for log
EXPORT_C enum ALIBABACLOUD_PDS_EXPORT LogLevel
{
    LogOff = 0,
    LogFatal,
    LogError,
    LogWarn,
    LogInfo,
    LogDebug,
    LogTrace,
    LogAll,
};

EXPORT_C ALIBABACLOUD_PDS_EXPORT void Pds_SetLogLevel(enum LogLevel level);

// ========== C-interface for PdsClient
typedef void* hPdsClient;

EXPORT_C ALIBABACLOUD_PDS_EXPORT hPdsClient hPdsClient_New_1(char* endpoint, hClientConfiguration conf);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hPdsClient hPdsClient_New_2(char* endpoint, char* accessToken, hClientConfiguration conf);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hPdsClient hPdsClient_New_3(char* endpoint, hCredentials credentials, hClientConfiguration conf);
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hPdsClient_Del(hPdsClient self);

// ========== request control
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hPdsClient_DisableRequest(hPdsClient self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hPdsClient_EnableRequest(hPdsClient self);

// ========== async task
EXPORT_C ALIBABACLOUD_PDS_EXPORT hAsyncTaskGetOutcome hPdsClient_AsyncTaskGet(hPdsClient self, hAsyncTaskGetRequest request);

// ========== dir
EXPORT_C ALIBABACLOUD_PDS_EXPORT hDirCreateOutcome hPdsClient_DirCreate(hPdsClient self, hDirCreateRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hDirListOutcome hPdsClient_DirList(hPdsClient self, hDirListRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hDirRenameOutcome hPdsClient_DirRename(hPdsClient self, hDirRenameRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hDirTrashOutcome hPdsClient_DirTrash(hPdsClient self, hDirTrashRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hDirDeleteOutcome hPdsClient_DirDelete(hPdsClient self, hDirDeleteRequest request);

// ========== file
EXPORT_C ALIBABACLOUD_PDS_EXPORT hFileCreateOutcome hPdsClient_FileCreate(hPdsClient self, hFileCreateRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hFileGetUploadUrlOutcome hPdsClient_FileGetUploadUrl(hPdsClient self, hFileGetUploadUrlRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hFileListUploadedPartsOutcome hPdsClient_FileListUploadedParts(hPdsClient self, hFileListUploadedPartsRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hFileCompleteOutcome hPdsClient_FileComplete(hPdsClient self, hFileCompleteRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hFileGetDownloadUrlOutcome hPdsClient_FileGetDownloadUrl(hPdsClient self, hFileGetDownloadUrlRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hFileGetOutcome hPdsClient_FileGet(hPdsClient self, hFileGetRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hFileRenameOutcome hPdsClient_FileRename(hPdsClient self, hFileRenameRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hFileTrashOutcome hPdsClient_FileTrash(hPdsClient self, hFileTrashRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hFileDeleteOutcome hPdsClient_FileDelete(hPdsClient self, hFileDeleteRequest request);

// ========== data
EXPORT_C ALIBABACLOUD_PDS_EXPORT hDataPutOutcome hPdsClient_DataPutByUrl(hPdsClient self, char* url, char* data);

// ========== meta
EXPORT_C ALIBABACLOUD_PDS_EXPORT hMetaUserTagsPutOutcome hPdsClient_MetaUserTagsPut(hPdsClient self, hMetaUserTagsPutRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hPdsOutcome hPdsClient_MetaUserTagsDelete(hPdsClient self, hMetaUserTagsDeleteRequest request);

// ========== Resumable Operation
EXPORT_C ALIBABACLOUD_PDS_EXPORT hFileCompleteOutcome hPdsClient_ResumableFileUpload(hPdsClient self, hFileUploadRequest request);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hDataGetOutcome hPdsClient_ResumableFileDownload(hPdsClient self, hFileDownloadRequest request);

#endif

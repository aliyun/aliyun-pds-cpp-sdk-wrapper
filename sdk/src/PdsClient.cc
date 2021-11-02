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


#include <alibabacloud/pdswrapper/DirCreateRequest.h>
#include <alibabacloud/pdswrapper/PdsClient.h>
#include <alibabacloud/pds/PdsClient.h>
#include <cstring>


// ========== C-interface for initialize
void Pds_InitializeSdk()
{
    AlibabaCloud::PDS::InitializeSdk();
}

bool Pds_IsSdkInitialized()
{
    return AlibabaCloud::PDS::IsSdkInitialized();
}

void Pds_ShutdownSdk()
{
    return AlibabaCloud::PDS::ShutdownSdk();
}


// ========== C-interface for log
void Pds_SetLogLevel(LogLevel level)
{
    AlibabaCloud::PDS::LogLevel l = AlibabaCloud::PDS::LogLevel(level);
    AlibabaCloud::PDS::SetLogLevel(l);
}

// ========== C-interface for PdsClient
hPdsClient hPdsClient_New(char* endpoint, char* accessToken, hClientConfiguration conf)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(conf);
    return new (std::nothrow) AlibabaCloud::PDS::PdsClient(endpoint, accessToken, *p);
}

void hPdsClient_Del(hPdsClient self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
}

// ========== C-interface for request control
void hPdsClient_DisableRequest(hPdsClient self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    p->DisableRequest();
}

void hPdsClient_EnableRequest(hPdsClient self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    p->EnableRequest();
}

// ========== async task
hAsyncTaskGetOutcome hPdsClient_AsyncTaskGet(hPdsClient self, hAsyncTaskGetRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::AsyncTaskGetRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::AsyncTaskGetOutcome(std::move(p->AsyncTaskGet(*req)));
}

// ========== dir
hDirCreateOutcome hPdsClient_DirCreate(hPdsClient self, hDirCreateRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::DirCreateRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::DirCreateOutcome(std::move(p->DirCreate(*req)));
}

hDirListOutcome hPdsClient_DirList(hPdsClient self, hDirListRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::DirListRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::DirListOutcome(std::move(p->DirList(*req)));
}

hDirRenameOutcome hPdsClient_DirRename(hPdsClient self, hDirRenameRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::DirRenameRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::DirRenameOutcome(std::move(p->DirRename(*req)));
}

hDirTrashOutcome hPdsClient_DirTrash(hPdsClient self, hDirTrashRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::DirTrashRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::DirTrashOutcome(std::move(p->DirTrash(*req)));
}

hDirDeleteOutcome hPdsClient_DirDelete(hPdsClient self, hDirDeleteRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::DirDeleteRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::DirDeleteOutcome(std::move(p->DirDelete(*req)));
}

// ========== file
hFileCreateOutcome hPdsClient_FileCreate(hPdsClient self, hFileCreateRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::FileCreateRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::FileCreateOutcome(std::move(p->FileCreate(*req)));
}

hFileGetUploadUrlOutcome hPdsClient_FileGetUploadUrl(hPdsClient self, hFileGetUploadUrlRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::FileGetUploadUrlRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::FileGetUploadUrlOutcome(std::move(p->FileGetUploadUrl(*req)));
}

hFileListUploadedPartsOutcome hPdsClient_FileListUploadedParts(hPdsClient self, hFileListUploadedPartsRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::FileListUploadedPartsRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::FileListUploadedPartsOutcome(std::move(p->FileListUploadedParts(*req)));
}

hFileCompleteOutcome hPdsClient_FileComplete(hPdsClient self, hFileCompleteRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::FileCompleteRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::FileCompleteOutcome(std::move(p->FileComplete(*req)));
}

hFileGetDownloadUrlOutcome hPdsClient_FileGetDownloadUrl(hPdsClient self, hFileGetDownloadUrlRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::FileGetDownloadUrlRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::FileGetDownloadUrlOutcome(std::move(p->FileGetDownloadUrl(*req)));
}

hFileGetOutcome hPdsClient_FileGet(hPdsClient self, hFileGetRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::FileGetRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::FileGetOutcome(std::move(p->FileGet(*req)));
}

hFileRenameOutcome hPdsClient_FileRename(hPdsClient self, hFileRenameRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::FileRenameRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::FileRenameOutcome(std::move(p->FileRename(*req)));
}

hFileTrashOutcome hPdsClient_FileTrash(hPdsClient self, hFileTrashRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::FileTrashRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::FileTrashOutcome(std::move(p->FileTrash(*req)));
}

hFileDeleteOutcome hPdsClient_FileDelete(hPdsClient self, hFileDeleteRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::FileDeleteRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::FileDeleteOutcome(std::move(p->FileDelete(*req)));
}

// ========== data
hDataPutOutcome hPdsClient_DataPutByUrl(hPdsClient self, char* url, char* data)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    std::shared_ptr<std::stringstream> s = std::make_shared<std::stringstream>();
    s->write(data, strlen(data));

    return new (std::nothrow) AlibabaCloud::PDS::DataPutOutcome(std::move(p->DataPutByUrl(url, s)));
}

// ========== meta
hMetaUserTagsPutOutcome hPdsClient_MetaUserTagsPut(hPdsClient self, hMetaUserTagsPutRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::MetaUserTagsPutRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::MetaUserTagsPutOutcome(std::move(p->MetaUserTagsPut(*req)));
}

hPdsOutcome hPdsClient_MetaUserTagsDelete(hPdsClient self, hMetaUserTagsDeleteRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::MetaUserTagsDeleteRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::PdsOutcome(std::move(p->MetaUserTagsDelete(*req)));
}

// ========== Resumable Operation
hFileCompleteOutcome hPdsClient_ResumableFileUpload(hPdsClient self, hFileUploadRequest request)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsClient*>(self);
    auto req = reinterpret_cast<AlibabaCloud::PDS::FileUploadRequest*>(request);
    return new (std::nothrow) AlibabaCloud::PDS::FileCompleteOutcome(std::move(p->ResumableFileUpload(*req)));
}

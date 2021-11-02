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

#include <alibabacloud/pdswrapper/FileUploadRequest.h>
#include <alibabacloud/pds/model/FileUploadRequest.h>


using TransferProgressFuncType = void(size_t, int64_t, int64_t, void*);
using ProgressControlType = int32_t(void*);


// ========== C-interface for hTransferProgress
hTransferProgress hTransferProgress_New(TransferProgressHandler handler, void* userData)
{
    auto p = new (std::nothrow) AlibabaCloud::PDS::TransferProgress();
    p->Handler = reinterpret_cast<TransferProgressFuncType*>(handler);
    p->UserData = userData;
    return p;
}

void hTransferProgress_Del(hTransferProgress self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::TransferProgress*>(self);
}

// ========== C-interface for hProgressControl
hProgressControl hProgressControl_New(ProgressControlHandler handler, void* userData)
{
    auto p = new (std::nothrow) AlibabaCloud::PDS::ProgressControl();
    p->Handler = reinterpret_cast<ProgressControlType*>(handler);
    p->UserData = userData;
    return p;
}

void hProgressControl_Del(hProgressControl self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::ProgressControl*>(self);
}


// ========== C-interface for hFileUploadRequest
hFileUploadRequest hFileUploadRequest_New_1(char* driveID,
                                                char* parentFileID,
                                                char* name,
                                                char* fileID,
                                                char* checkNameMode,
                                                char* filePath,
                                                char* checkpointDir)
{
    return new (std::nothrow) AlibabaCloud::PDS::FileUploadRequest(driveID, parentFileID, name,
        fileID, checkNameMode, filePath, checkpointDir);
}

hFileUploadRequest hFileUploadRequest_New_2(char* driveID,
                                                char* parentFileID,
                                                char* name,
                                                char* fileID,
                                                char* checkNameMode,
                                                char* filePath)
{
    return new (std::nothrow) AlibabaCloud::PDS::FileUploadRequest(driveID, parentFileID, name,
        fileID, checkNameMode, filePath);
}

hFileUploadRequest hFileUploadRequest_New_3(char* driveID,
                                                char* parentFileID,
                                                char* name,
                                                char* fileID,
                                                char* checkNameMode,
                                                char* filePath,
                                                char* checkpointDir,
                                                uint64_t partSize,
                                                uint32_t threadNum)
{
    return new (std::nothrow) AlibabaCloud::PDS::FileUploadRequest(driveID, parentFileID, name,
        fileID, checkNameMode, filePath, checkpointDir, partSize, threadNum);
}

void hFileUploadRequest_Del(hFileUploadRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileUploadRequest*>(self);
}

char* hFileUploadRequest_FilePath(hFileUploadRequest self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileUploadRequest*>(self);
    return const_cast<char*>(p->FilePath().c_str());
}

char* hFileUploadRequest_DriveID(hFileUploadRequest self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileUploadRequest*>(self);
    return const_cast<char*>(p->DriveID().c_str());
}

char* hFileUploadRequest_ParentFileID(hFileUploadRequest self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileUploadRequest*>(self);
    return const_cast<char*>(p->ParentFileID().c_str());
}

char* hFileUploadRequest_Name(hFileUploadRequest self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileUploadRequest*>(self);
    return const_cast<char*>(p->Name().c_str());
}

char* hFileUploadRequest_FileID(hFileUploadRequest self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileUploadRequest*>(self);
    return const_cast<char*>(p->FileID().c_str());
}

char* hFileUploadRequest_CheckNameMode(hFileUploadRequest self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileUploadRequest*>(self);
    return const_cast<char*>(p->CheckNameMode().c_str());
}

hUserTagMap hFileUploadRequest_UserTags(hFileUploadRequest self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileUploadRequest*>(self);
    AlibabaCloud::PDS::UserTagList& itemList = const_cast<AlibabaCloud::PDS::UserTagList&>(p->UserTags());
    return &itemList;
}

void hFileUploadRequest_setUserTags(hFileUploadRequest self, hUserTagList userTags)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileUploadRequest*>(self);
    auto t1 = reinterpret_cast<AlibabaCloud::PDS::UserTagList*>(userTags);
    AlibabaCloud::PDS::UserTagList t2 = *t1;
    p->setUserTags(t2);
}

void hFileUploadRequest_setTransferProgress(hFileUploadRequest self, hTransferProgress progress)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileUploadRequest*>(self);
    auto t1 = reinterpret_cast<AlibabaCloud::PDS::TransferProgress*>(progress);
    p->setTransferProgress(*t1);
}

void hFileUploadRequest_setProgressControl(hFileUploadRequest self, hProgressControl progress)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileUploadRequest*>(self);
    auto t1 = reinterpret_cast<AlibabaCloud::PDS::ProgressControl*>(progress);
    p->setProgressControl(*t1);
}

void hFileUploadRequest_print(hFileUploadRequest self)
{
    std::cout << "hFileUploadRequest(" << ")" << std::endl;
}

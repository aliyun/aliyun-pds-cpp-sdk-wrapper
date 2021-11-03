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

#include <alibabacloud/pdswrapper/FileDownloadRequest.h>
#include <alibabacloud/pds/model/FileDownloadRequest.h>


// ========== C-interface for hFileDownloadRequest
hFileDownloadRequest hFileDownloadRequest_New_1(char* driveID,
                                                char* shareID,
                                                char* fileID,
                                                char* filePath)
{
    return new (std::nothrow) AlibabaCloud::PDS::FileDownloadRequest(driveID, shareID, fileID, filePath);
}

hFileDownloadRequest hFileDownloadRequest_New_2(char* driveID,
                                                char* shareID,
                                                char* fileID,
                                                char* filePath,
                                                char* checkpointDir)
{
    return new (std::nothrow) AlibabaCloud::PDS::FileDownloadRequest(driveID, shareID, fileID, filePath, checkpointDir);
}

hFileDownloadRequest hFileDownloadRequest_New_3(char* driveID,
                                                char* shareID,
                                                char* fileID,
                                                char* filePath,
                                                char* checkpointDir,
                                                uint64_t partSize,
                                                uint32_t threadNum)
{
    return new (std::nothrow) AlibabaCloud::PDS::FileDownloadRequest(driveID, shareID, fileID,
        filePath, checkpointDir, partSize, threadNum);
}

void hFileDownloadRequest_Del(hFileDownloadRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileDownloadRequest*>(self);
}

char* hFileDownloadRequest_FilePath(hFileDownloadRequest self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileDownloadRequest*>(self);
    return const_cast<char*>(p->FilePath().c_str());
}

char* hFileDownloadRequest_TempFilePath(hFileDownloadRequest self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileDownloadRequest*>(self);
    return const_cast<char*>(p->TempFilePath().c_str());
}

char* hFileDownloadRequest_DriveID(hFileDownloadRequest self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileDownloadRequest*>(self);
    return const_cast<char*>(p->DriveID().c_str());
}

char* hFileDownloadRequest_ShareID(hFileDownloadRequest self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileDownloadRequest*>(self);
    return const_cast<char*>(p->ShareID().c_str());
}

char* hFileDownloadRequest_FileID(hFileDownloadRequest self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileDownloadRequest*>(self);
    return const_cast<char*>(p->FileID().c_str());
}

char* hFileDownloadRequest_ShareToken(hFileDownloadRequest self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileDownloadRequest*>(self);
    return const_cast<char*>(p->ShareToken().c_str());
}

void hFileDownloadRequest_setShareToken(hFileDownloadRequest self, char* shareToken)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileDownloadRequest*>(self);
    p->setShareToken(shareToken);
}

void hFileDownloadRequest_setTransferProgress(hFileDownloadRequest self, hTransferProgress progress)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileDownloadRequest*>(self);
    auto t1 = reinterpret_cast<AlibabaCloud::PDS::TransferProgress*>(progress);
    p->setTransferProgress(*t1);
}

void hFileDownloadRequest_setProgressControl(hFileDownloadRequest self, hProgressControl progress)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileDownloadRequest*>(self);
    auto t1 = reinterpret_cast<AlibabaCloud::PDS::ProgressControl*>(progress);
    p->setProgressControl(*t1);
}

void hFileDownloadRequest_print(hFileDownloadRequest self)
{
    std::cout << "hFileDownloadRequest("
        << "self=" << self;
    std::cout <<")" << std::endl;
}

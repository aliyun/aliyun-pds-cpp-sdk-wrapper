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

#include <alibabacloud/pdswrapper/FileGetUploadUrlResult.h>
#include <alibabacloud/pds/model/FileGetUploadUrlResult.h>
#include <iostream>


char* hFileGetUploadUrlResult_DriveID(hFileGetUploadUrlResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetUploadUrlResult*>(self);
    return const_cast<char*>(p->DriveID().c_str());
}

char* hFileGetUploadUrlResult_FileID(hFileGetUploadUrlResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetUploadUrlResult*>(self);
    return const_cast<char*>(p->FileID().c_str());
}

char* hFileGetUploadUrlResult_UploadID(hFileGetUploadUrlResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetUploadUrlResult*>(self);
    return const_cast<char*>(p->UploadID().c_str());
}

hPartInfoRespList hFileGetUploadUrlResult_PartInfoRespList(hFileGetUploadUrlResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetUploadUrlResult*>(self);
    AlibabaCloud::PDS::PartInfoRespList& itemList = const_cast<AlibabaCloud::PDS::PartInfoRespList&>(p->PartInfoRespList());
    return &itemList;
}

void hFileGetUploadUrlResult_print(hFileGetUploadUrlResult self)
{
    std::cout << "hFileGetUploadUrlResult(" \
        << "DriveID=" << hFileGetUploadUrlResult_DriveID(self) << "," \
        << "FileID=" << hFileGetUploadUrlResult_FileID(self) << "," \
        << "UploadID=" << hFileGetUploadUrlResult_UploadID(self) << ",";
    std::cout << "PartInfoRespList=";
    hPartInfoRespList_print(hFileGetUploadUrlResult_PartInfoRespList(self));
    std::cout << ")" << std::endl;
}

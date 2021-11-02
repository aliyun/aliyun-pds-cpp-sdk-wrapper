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

#include <alibabacloud/pdswrapper/FileListUploadedPartsResult.h>
#include <alibabacloud/pds/model/FileListUploadedPartsResult.h>
#include <iostream>


char* hFileListUploadedPartsResult_FileID(hFileListUploadedPartsResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileListUploadedPartsResult*>(self);
    return const_cast<char*>(p->FileID().c_str());
}

char* hFileListUploadedPartsResult_UploadID(hFileListUploadedPartsResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileListUploadedPartsResult*>(self);
    return const_cast<char*>(p->UploadID().c_str());
}

char* hFileListUploadedPartsResult_NextMarker(hFileListUploadedPartsResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileListUploadedPartsResult*>(self);
    return const_cast<char*>(p->NextMarker().c_str());
}

hPartList hFileListUploadedPartsResult_PartList(hFileListUploadedPartsResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileListUploadedPartsResult*>(self);
    AlibabaCloud::PDS::PartList& itemList = const_cast<AlibabaCloud::PDS::PartList&>(p->PartList());
    return &itemList;
}

void hFileListUploadedPartsResult_print(hFileListUploadedPartsResult self)
{
    std::cout << "hFileListUploadedPartsResult(" \
        << "FileID=" << hFileListUploadedPartsResult_FileID(self) << "," \
        << "UploadID=" << hFileListUploadedPartsResult_UploadID(self) << "," \
        << "NextMarker=" << hFileListUploadedPartsResult_NextMarker(self) << ",";
    std::cout << "PartList=";
    hPartList_print(hFileListUploadedPartsResult_PartList(self));
    std::cout << ")" << std::endl;
}

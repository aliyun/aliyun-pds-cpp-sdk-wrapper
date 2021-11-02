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

#include <alibabacloud/pdswrapper/FileCreateResult.h>
#include <alibabacloud/pds/model/FileCreateResult.h>
#include <iostream>


char* hFileCreateResult_DriveID(hFileCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateResult*>(self);
    return const_cast<char*>(p->DriveID().c_str());
}

char* hFileCreateResult_EncryptMode(hFileCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateResult*>(self);
    return const_cast<char*>(p->EncryptMode().c_str());
}

char* hFileCreateResult_FileID(hFileCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateResult*>(self);
    return const_cast<char*>(p->FileID().c_str());
}

char* hFileCreateResult_FileName(hFileCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateResult*>(self);
    return const_cast<char*>(p->FileName().c_str());
}

char* hFileCreateResult_Location(hFileCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateResult*>(self);
    return const_cast<char*>(p->Location().c_str());
}

char* hFileCreateResult_ParentFileID(hFileCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateResult*>(self);
    return const_cast<char*>(p->ParentFileID().c_str());
}

bool hFileCreateResult_RapidUpload(hFileCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateResult*>(self);
    return p->RapidUpload();
}

char* hFileCreateResult_Type(hFileCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateResult*>(self);
    return const_cast<char*>(p->Type().c_str());
}

char* hFileCreateResult_UploadID(hFileCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateResult*>(self);
    return const_cast<char*>(p->UploadID().c_str());
}

bool hFileCreateResult_Exist(hFileCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateResult*>(self);
    return p->Exist();
}

hPartInfoRespList hFileCreateResult_PartInfoRespList(hFileCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateResult*>(self);
    AlibabaCloud::PDS::PartInfoRespList& itemList = const_cast<AlibabaCloud::PDS::PartInfoRespList&>(p->PartInfoRespList());
    return &itemList;
}

void hFileCreateResult_print(hFileCreateResult self)
{
    std::cout << "hFileCreateResult(" \
        << "DriveID=" << hFileCreateResult_DriveID(self) << "," \
        << "EncryptMode=" << hFileCreateResult_EncryptMode(self) << "," \
        << "FileID=" << hFileCreateResult_FileID(self) << "," \
        << "FileName=" << hFileCreateResult_FileName(self) << "," \
        << "Location=" << hFileCreateResult_Location(self) << "," \
        << "ParentFileID=" << hFileCreateResult_ParentFileID(self) << "," \
        << "RapidUpload=" << hFileCreateResult_RapidUpload(self) << "," \
        << "Type=" << hFileCreateResult_Type(self) << "," \
        << "UploadID=" << hFileCreateResult_UploadID(self) << "," \
        << "Exist=" << hFileCreateResult_Exist(self) << ",";

    std::cout << "PartInfoRespList=";
    hPartInfoRespList_print(hFileCreateResult_PartInfoRespList(self));
    std::cout << ")" << std::endl;
}

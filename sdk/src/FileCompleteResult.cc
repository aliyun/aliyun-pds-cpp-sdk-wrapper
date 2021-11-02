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

#include <alibabacloud/pdswrapper/FileCompleteResult.h>
#include <alibabacloud/pds/model/FileCompleteResult.h>
#include <iostream>


char* hFileCompleteResult_Category(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->Category().c_str());
}

char* hFileCompleteResult_ContentHash(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->ContentHash().c_str());
}

char* hFileCompleteResult_ContentHashName(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->ContentHashName().c_str());
}

char* hFileCompleteResult_ContentType(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->ContentType().c_str());
}

char* hFileCompleteResult_Crc64Hash(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->Crc64Hash().c_str());
}

char* hFileCompleteResult_CreatedAt(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->CreatedAt().c_str());
}

char* hFileCompleteResult_DriveID(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->DriveID().c_str());
}

char* hFileCompleteResult_EncryptMode(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->EncryptMode().c_str());
}

char* hFileCompleteResult_FileExtension(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->FileExtension().c_str());
}

char* hFileCompleteResult_FileID(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->FileID().c_str());
}

bool hFileCompleteResult_Hidden(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return p->Hidden();
}

char* hFileCompleteResult_Location(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->Location().c_str());
}

char* hFileCompleteResult_Name(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->Name().c_str());
}

bool hFileCompleteResult_RapidUpload(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return p->RapidUpload();
}

char* hFileCompleteResult_ParentFileID(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->ParentFileID().c_str());
}

int64_t hFileCompleteResult_Size(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return p->Size();
}

bool hFileCompleteResult_Starred(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return p->Starred();
}

char* hFileCompleteResult_Status(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->Status().c_str());
}

char* hFileCompleteResult_Type(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->Type().c_str());
}

char* hFileCompleteResult_UpdatedAT(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->UpdatedAT().c_str());
}

char* hFileCompleteResult_UploadID(hFileCompleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteResult*>(self);
    return const_cast<char*>(p->UploadID().c_str());
}

void hFileCompleteResult_print(hFileCompleteResult self)
{
    std::cout << "hFileCompleteResult(" \
        << "Category=" << hFileCompleteResult_Category(self) << "," \
        << "ContentHash=" << hFileCompleteResult_ContentHash(self) << "," \
        << "ContentHashName=" << hFileCompleteResult_ContentHashName(self) << "," \
        << "ContentType=" << hFileCompleteResult_ContentType(self) << "," \
        << "Crc64Hash=" << hFileCompleteResult_Crc64Hash(self) << "," \
        << "CreatedAt=" << hFileCompleteResult_CreatedAt(self) << "," \
        << "DriveID=" << hFileCompleteResult_DriveID(self) << "," \
        << "EncryptMode=" << hFileCompleteResult_EncryptMode(self) << "," \
        << "FileExtension=" << hFileCompleteResult_FileExtension(self) << "," \
        << "FileID=" << hFileCompleteResult_FileID(self) << "," \
        << "Hidden=" << hFileCompleteResult_Hidden(self) << "," \
        << "Location=" << hFileCompleteResult_Location(self) << "," \
        << "Name=" << hFileCompleteResult_Name(self) << "," \
        << "RapidUpload=" << hFileCompleteResult_RapidUpload(self) << "," \
        << "ParentFileID=" << hFileCompleteResult_ParentFileID(self) << "," \
        << "Size=" << hFileCompleteResult_Size(self) << "," \
        << "Starred=" << hFileCompleteResult_Starred(self) << "," \
        << "Status=" << hFileCompleteResult_Status(self) << "," \
        << "Type=" << hFileCompleteResult_Type(self) << "," \
        << "UpdatedAT=" << hFileCompleteResult_UpdatedAT(self) << "," \
        << "UploadID=" << hFileCompleteResult_UploadID(self)
        << ")" << std::endl;
}

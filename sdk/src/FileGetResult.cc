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

#include <alibabacloud/pdswrapper/FileGetResult.h>
#include <alibabacloud/pds/model/FileGetResult.h>
#include <iostream>


char* hFileGetResult_Category(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->Category().c_str());
}

char* hFileGetResult_ContentHash(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->ContentHash().c_str());
}

char* hFileGetResult_ContentHashName(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->ContentHashName().c_str());
}

char* hFileGetResult_ContentType(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->ContentType().c_str());
}

char* hFileGetResult_Crc64Hash(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->Crc64Hash().c_str());
}

char* hFileGetResult_CreatedAt(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->CreatedAt().c_str());
}

char* hFileGetResult_Description(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->Description().c_str());
}

char* hFileGetResult_DownloadUrl(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->DownloadUrl().c_str());
}

char* hFileGetResult_DriveID(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->DriveID().c_str());
}

char* hFileGetResult_EncryptMode(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->EncryptMode().c_str());
}

char* hFileGetResult_FileExtension(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->FileExtension().c_str());
}

char* hFileGetResult_FileID(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->FileID().c_str());
}

bool hFileGetResult_Hidden(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return p->Hidden();
}

char* hFileGetResult_Name(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->Name().c_str());
}

char* hFileGetResult_ParentFileID(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->ParentFileID().c_str());
}

int64_t hFileGetResult_PunishFlag(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return p->PunishFlag();
}

int64_t hFileGetResult_Size(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return p->Size();
}

bool hFileGetResult_Starred(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return p->Starred();
}

char* hFileGetResult_Status(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->Status().c_str());
}

char* hFileGetResult_Thumbnail(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->Thumbnail().c_str());
}

bool hFileGetResult_Trashed(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return p->Trashed();
}

char* hFileGetResult_Type(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->Type().c_str());
}

char* hFileGetResult_UpdatedAT(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->UpdatedAT().c_str());
}

char* hFileGetResult_Url(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->Url().c_str());
}

char* hFileGetResult_UploadID(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    return const_cast<char*>(p->UploadID().c_str());
}

hUserTagMap hFileGetResult_UserTags(hFileGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetResult*>(self);
    std::map<std::string, std::string>& itemList = const_cast<std::map<std::string, std::string>&>(p->UserTags());
    return &itemList;
}

void hFileGetResult_print(hFileGetResult self)
{
    std::cout << "hFileGetResult(" \
        << "Category=" << hFileGetResult_Category(self) << "," \
        << "ContentHash=" << hFileGetResult_ContentHash(self) << "," \
        << "ContentHashName=" << hFileGetResult_ContentHashName(self) << "," \
        << "ContentType=" << hFileGetResult_ContentType(self) << "," \
        << "Crc64Hash=" << hFileGetResult_Crc64Hash(self) << "," \
        << "CreatedAt=" << hFileGetResult_CreatedAt(self) << "," \
        << "Description=" << hFileGetResult_Description(self) << "," \
        << "DriveID=" << hFileGetResult_DriveID(self) << "," \
        << "EncryptMode=" << hFileGetResult_EncryptMode(self) << "," \
        << "FileExtension=" << hFileGetResult_FileExtension(self) << "," \
        << "FileID=" << hFileGetResult_FileID(self) << "," \
        << "Hidden=" << hFileGetResult_Hidden(self) << "," \
        << "Name=" << hFileGetResult_Name(self) << "," \
        << "ParentFileID=" << hFileGetResult_ParentFileID(self) << "," \
        << "PunishFlag=" << hFileGetResult_PunishFlag(self) << "," \
        << "Size=" << hFileGetResult_Size(self) << "," \
        << "Starred=" << hFileGetResult_Starred(self) << "," \
        << "Status=" << hFileGetResult_Status(self) << "," \
        << "Thumbnail=" << hFileGetResult_Thumbnail(self) << "," \
        << "Trashed=" << hFileGetResult_Trashed(self) << "," \
        << "Type=" << hFileGetResult_Type(self) << "," \
        << "UpdatedAT=" << hFileGetResult_UpdatedAT(self) << "," \
        << "Url=" << hFileGetResult_Url(self) << "," \
        << "UploadID=" << hFileGetResult_UploadID(self) << ",";

    std::cout << "UserTags=";
    hUserTagMap_print(hFileGetResult_UserTags(self));
    std::cout << ")" << std::endl;
}

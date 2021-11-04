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

#include <alibabacloud/pdswrapper/FileItem.h>
#include <alibabacloud/pds/model/FileItem.h>
#include <iostream>


using UserTagMap = std::map<std::string, std::string>;
using FileItemList = std::vector<AlibabaCloud::PDS::FileItem>;


// ========== C-interface for hFileItem
void hFileItem_Del(hFileItem self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
}

char* hFileItem_Category(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->Category().c_str());
}

char* hFileItem_ContentHash(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->ContentHash().c_str());
}

char* hFileItem_ContentHashName(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->ContentHashName().c_str());
}

char* hFileItem_ContentType(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->ContentType().c_str());
}

char* hFileItem_Crc64Hash(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->Crc64Hash().c_str());
}

char* hFileItem_CreatedAt(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->CreatedAt().c_str());
}

char* hFileItem_Description(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->Description().c_str());
}

char* hFileItem_DownloadUrl(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->DownloadUrl().c_str());
}

char* hFileItem_DriveID(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->DriveID().c_str());
}

char* hFileItem_EncryptMode(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->EncryptMode().c_str());
}

char* hFileItem_FileExtension(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->FileExtension().c_str());
}

char* hFileItem_FileID(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->FileID().c_str());
}

bool hFileItem_Hidden(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return p->Hidden();
}

char* hFileItem_Name(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->Name().c_str());
}

char* hFileItem_ParentFileID(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->ParentFileID().c_str());
}

int64_t hFileItem_PunishFlag(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return p->PunishFlag();
}

int64_t hFileItem_Size(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return p->Size();
}

bool hFileItem_Starred(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return p->Starred();
}

char* hFileItem_Status(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->Status().c_str());
}

char* hFileItem_Thumbnail(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->Thumbnail().c_str());
}

bool hFileItem_Trashed(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return p->Trashed();
}

char* hFileItem_Type(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->Type().c_str());
}

char* hFileItem_UpdatedAT(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->UpdatedAT().c_str());
}

char* hFileItem_Url(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->Url().c_str());
}

char* hFileItem_UploadID(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    return const_cast<char*>(p->UploadID().c_str());
}

hUserTagMap hFileItem_UserTags(hFileItem self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileItem*>(self);
    UserTagMap& tags = const_cast<UserTagMap&>(p->UserTags());
    return &tags;
}

void hFileItem_print(hFileItem self)
{
    std::cout << "hFileItem(" \
        << "Category=" << hFileItem_Category(self) << "," \
        << "ContentHash=" << hFileItem_ContentHash(self) << "," \
        << "ContentType=" << hFileItem_ContentType(self) << "," \
        << "Crc64Hash=" << hFileItem_Crc64Hash(self) << "," \
        << "CreatedAt=" << hFileItem_CreatedAt(self) << "," \
        << "Description=" << hFileItem_Description(self) << "," \
        << "DownloadUrl=" << hFileItem_DownloadUrl(self) << "," \
        << "DriveID=" << hFileItem_DriveID(self) << "," \
        << "EncryptMode=" << hFileItem_EncryptMode(self) << "," \
        << "FileExtension=" << hFileItem_FileExtension(self) << "," \
        << "FileID=" << hFileItem_FileID(self) << "," \
        << "Hidden=" << hFileItem_Hidden(self) << "," \
        << "Name=" << hFileItem_Name(self) << "," \
        << "ParentFileID=" << hFileItem_ParentFileID(self) << "," \
        << "PunishFlag=" << hFileItem_PunishFlag(self) << "," \
        << "Size=" << hFileItem_Size(self) << "," \
        << "Starred=" << hFileItem_Starred(self) << "," \
        << "Status=" << hFileItem_Status(self) << "," \
        << "Thumbnail=" << hFileItem_Thumbnail(self) << "," \
        << "Trashed=" << hFileItem_Trashed(self) << "," \
        << "Type=" << hFileItem_Type(self) << "," \
        << "UpdatedAT=" << hFileItem_UpdatedAT(self) << "," \
        << "Url=" << hFileItem_Url(self) << "," \
        << "UploadID=" << hFileItem_UploadID(self) << "," \
        << "UserTags=";
    hUserTagMap_print(hFileItem_UserTags(self));
    std::cout << ")" << std::endl;
}

// ========== C-interface for hFileItemList
size_t hFileItemList_size(hFileItemList self)
{
    auto p = reinterpret_cast<FileItemList*>(self);
    return p->size();
}

hFileItem hFileItemList_at(hFileItemList self, int i)
{
    auto p = reinterpret_cast<FileItemList*>(self);
    AlibabaCloud::PDS::FileItem& item = p->at(i);
    return &item;
}

void hFileItemList_print(hFileItemList self)
{
    std::cout << "[";
    for(size_t i = 0; i < hFileItemList_size(self); ++i) {
        hFileItem_print(hFileItemList_at(self, i));
    }
    std::cout << "]" << std::endl;
}

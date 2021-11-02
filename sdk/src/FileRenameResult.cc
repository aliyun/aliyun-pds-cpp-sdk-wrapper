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

#include <alibabacloud/pdswrapper/FileRenameResult.h>
#include <alibabacloud/pds/model/FileRenameResult.h>
#include <iostream>


char* hFileRenameResult_DriveID(hFileRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileRenameResult*>(self);
    return const_cast<char*>(p->DriveID().c_str());
}

char* hFileRenameResult_FileID(hFileRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileRenameResult*>(self);
    return const_cast<char*>(p->FileID().c_str());
}

char* hFileRenameResult_Name(hFileRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileRenameResult*>(self);
    return const_cast<char*>(p->Name().c_str());
}

char* hFileRenameResult_ParentFileID(hFileRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileRenameResult*>(self);
    return const_cast<char*>(p->ParentFileID().c_str());
}

char* hFileRenameResult_Type(hFileRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileRenameResult*>(self);
    return const_cast<char*>(p->Type().c_str());
}

char* hFileRenameResult_CreatedAt(hFileRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileRenameResult*>(self);
    return const_cast<char*>(p->CreatedAt().c_str());
}

char* hFileRenameResult_UpdatedAt(hFileRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileRenameResult*>(self);
    return const_cast<char*>(p->UpdatedAt().c_str());
}

void hFileRenameResult_print(hFileRenameResult self)
{
    std::cout << "hFileRenameResult(" \
        << "DriveID=" << hFileRenameResult_DriveID(self) << "," \
        << "FileID=" << hFileRenameResult_FileID(self) << "," \
        << "Name=" << hFileRenameResult_Name(self) << "," \
        << "ParentFileID=" << hFileRenameResult_ParentFileID(self) << "," \
        << "Type=" << hFileRenameResult_Type(self) << "," \
        << "CreatedAt=" << hFileRenameResult_CreatedAt(self) << "," \
        << "UpdatedAt=" << hFileRenameResult_UpdatedAt(self);
    std::cout << ")" << std::endl;
}

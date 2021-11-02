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

#include <alibabacloud/pdswrapper/DirRenameResult.h>
#include <alibabacloud/pds/model/DirRenameResult.h>
#include <iostream>


char* hDirRenameResult_DriveID(hDirRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirRenameResult*>(self);
    return const_cast<char*>(p->DriveID().c_str());
}

char* hDirRenameResult_FileID(hDirRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirRenameResult*>(self);
    return const_cast<char*>(p->FileID().c_str());
}

char* hDirRenameResult_Name(hDirRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirRenameResult*>(self);
    return const_cast<char*>(p->Name().c_str());
}

char* hDirRenameResult_ParentFileID(hDirRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirRenameResult*>(self);
    return const_cast<char*>(p->ParentFileID().c_str());
}

char* hDirRenameResult_Type(hDirRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirRenameResult*>(self);
    return const_cast<char*>(p->Type().c_str());
}

char* hDirRenameResult_CreatedAt(hDirRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirRenameResult*>(self);
    return const_cast<char*>(p->Type().c_str());
}

char* hDirRenameResult_UpdatedAt(hDirRenameResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirRenameResult*>(self);
    return const_cast<char*>(p->Type().c_str());
}

void hDirRenameResult_print(hDirRenameResult self)
{
    std::cout << "hDirRenameResult(" \
        << "DriveID=" << hDirRenameResult_DriveID(self) << "," \
        << "FileID=" << hDirRenameResult_FileID(self) << "," \
        << "Name=" << hDirRenameResult_Name(self) << "," \
        << "ParentFileID=" << hDirRenameResult_ParentFileID(self) << "," \
        << "Type=" << hDirRenameResult_Type(self) << "," \
        << "CreatedAt=" << hDirRenameResult_CreatedAt(self) << "," \
        << "UpdatedAt=" << hDirRenameResult_UpdatedAt(self)
        << ")" << std::endl;
}

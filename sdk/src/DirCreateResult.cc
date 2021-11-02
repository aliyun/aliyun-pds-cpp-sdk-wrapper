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

#include <alibabacloud/pdswrapper/DirCreateResult.h>
#include <alibabacloud/pds/model/DirCreateResult.h>
#include <iostream>


char* hDirCreateResult_DriveID(hDirCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirCreateResult*>(self);
    return const_cast<char*>(p->DriveID().c_str());
}

char* hDirCreateResult_FileID(hDirCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirCreateResult*>(self);
    return const_cast<char*>(p->FileID().c_str());
}

char* hDirCreateResult_FileName(hDirCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirCreateResult*>(self);
    return const_cast<char*>(p->FileName().c_str());
}

char* hDirCreateResult_ParentFileID(hDirCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirCreateResult*>(self);
    return const_cast<char*>(p->ParentFileID().c_str());
}

char* hDirCreateResult_Type(hDirCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirCreateResult*>(self);
    return const_cast<char*>(p->Type().c_str());
}

bool hDirCreateResult_Exist(hDirCreateResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirCreateResult*>(self);
    return p->Exist();
}

void hDirCreateResult_print(hDirCreateResult self)
{
    std::cout << "hDirCreateResult(" \
        << "DriveID=" << hDirCreateResult_DriveID(self) << "," \
        << "FileID=" << hDirCreateResult_FileID(self) << "," \
        << "FileName=" << hDirCreateResult_FileName(self) << "," \
        << "ParentFileID=" << hDirCreateResult_ParentFileID(self) << "," \
        << "Type=" << hDirCreateResult_Type(self) << "," \
        << "Exist=" << hDirCreateResult_Exist(self) \
        << ")" << std::endl;
}

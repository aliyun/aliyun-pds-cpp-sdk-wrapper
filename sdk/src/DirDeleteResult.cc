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

#include <alibabacloud/pdswrapper/DirDeleteResult.h>
#include <alibabacloud/pds/model/DirDeleteResult.h>
#include <iostream>


char* hDirDeleteResult_DriveID(hDirDeleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirDeleteResult*>(self);
    return const_cast<char*>(p->DriveID().c_str());
}

char* hDirDeleteResult_FileID(hDirDeleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirDeleteResult*>(self);
    return const_cast<char*>(p->FileID().c_str());
}

char* hDirDeleteResult_AsyncTaskID(hDirDeleteResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirDeleteResult*>(self);
    return const_cast<char*>(p->AsyncTaskID().c_str());
}

void hDirDeleteResult_print(hDirDeleteResult self)
{
    std::cout << "hDirDeleteResult(" \
        << "DriveID=" << hDirDeleteResult_DriveID(self) << "," \
        << "FileID=" << hDirDeleteResult_FileID(self) << "," \
        << "AsyncTaskID=" << hDirDeleteResult_AsyncTaskID(self) \
        << ")" << std::endl;
}

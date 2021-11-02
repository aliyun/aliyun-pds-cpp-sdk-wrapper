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

#include <alibabacloud/pdswrapper/DirListRequest.h>
#include <alibabacloud/pds/model/DirListRequest.h>


hDirListRequest hDirListRequest_New(char* driveID,
                                            char* parentFileID,
                                            char* orderBy,
                                            char* orderDirection,
                                            char* fields,
                                            char* marker,
                                            int limit)
{
    return new (std::nothrow) AlibabaCloud::PDS::DirListRequest(driveID, parentFileID, orderBy,
        orderDirection, fields, marker, limit);
}

void hDirListRequest_Del(hDirListRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::DirListRequest*>(self);
}

void hDirListRequest_setType(hDirListRequest self, char* type)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirListRequest*>(self);
    p->setType(type);
}

void hDirListRequest_setCategory(hDirListRequest self, char* category)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirListRequest*>(self);
    p->setCategory(category);
}

void hDirListRequest_setUrlExpireSec(hDirListRequest self, int urlExpireSec)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirListRequest*>(self);
    p->setUrlExpireSec(urlExpireSec);
}

void hDirListRequest_setStarred(hDirListRequest self, bool starred)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirListRequest*>(self);
    p->setStarred(&starred);
}

void hDirListRequest_setAll(hDirListRequest self, bool all)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirListRequest*>(self);
    p->setAll(&all);
}

void hDirListRequest_print(hDirListRequest self)
{
    std::cout << "hDirListRequest(" << ")" << std::endl;
}

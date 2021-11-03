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

#include <alibabacloud/pdswrapper/DirCreateRequest.h>
#include <alibabacloud/pds/model/DirCreateRequest.h>


hDirCreateRequest hDirCreateRequest_New(char* driveID,
                                        char* parentFileID,
                                        char* name,
                                        char* checkNameMode)
{
    return new (std::nothrow) AlibabaCloud::PDS::DirCreateRequest(driveID, parentFileID, name, checkNameMode);
}

void hDirCreateRequest_Del(hDirCreateRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::DirCreateRequest*>(self);
}

void hDirCreateRequest_setUserTags(hDirCreateRequest self, hUserTagList userTags)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirCreateRequest*>(self);
    auto t1 = reinterpret_cast<AlibabaCloud::PDS::UserTagList*>(userTags);
    AlibabaCloud::PDS::UserTagList t2 = *t1;
    p->setUserTags(t2);
}

void hDirCreateRequest_print(hDirCreateRequest self)
{
    std::cout << "hDirCreateRequest("
        << "self=" << self;
    std::cout <<")" << std::endl;
}
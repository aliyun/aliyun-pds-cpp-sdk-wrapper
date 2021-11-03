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

#include <alibabacloud/pdswrapper/MetaUserTagsDeleteRequest.h>
#include <alibabacloud/pds/model/MetaUserTagsDeleteRequest.h>
#include <alibabacloud/pds/model/MetaUserTagsDeleteRequest.h>


using UserTagKeyList = std::vector<std::string>;

hMetaUserTagsDeleteRequest hMetaUserTagsDeleteRequest_New(char* driveID,
                                                char* fileID,
                                                hUserTagKeyList keyList)
{
    auto t1 = reinterpret_cast<UserTagKeyList*>(keyList);
    return new (std::nothrow) AlibabaCloud::PDS::MetaUserTagsDeleteRequest(driveID, fileID, *t1);
}

void hMetaUserTagsDeleteRequest_Del(hMetaUserTagsDeleteRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::MetaUserTagsDeleteRequest*>(self);
}

void hMetaUserTagsDeleteRequest_print(hMetaUserTagsDeleteRequest self)
{
    std::cout << "hMetaUserTagsDeleteRequest("
        << "self=" << self;
    std::cout <<")" << std::endl;
}

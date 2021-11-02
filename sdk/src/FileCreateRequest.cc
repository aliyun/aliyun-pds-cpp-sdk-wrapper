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

#include <alibabacloud/pdswrapper/FileCreateRequest.h>
#include <alibabacloud/pds/model/FileCreateRequest.h>


hFileCreateRequest hFileCreateRequest_New(char* driveID,
                                                char* parentFileID,
                                                char* name,
                                                char* fileID,
                                                char* checkNameMode,
                                                int64_t size)
{
    return new (std::nothrow) AlibabaCloud::PDS::FileCreateRequest(driveID, parentFileID, name,
        fileID, checkNameMode, size);
}

void hFileCreateRequest_Del(hFileCreateRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileCreateRequest*>(self);
}

void hFileCreateRequest_setPartInfoList(hFileCreateRequest self, hPartInfoReqList partInfoReqList)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateRequest*>(self);
    auto t1 = reinterpret_cast<AlibabaCloud::PDS::PartInfoReqList*>(partInfoReqList);
    AlibabaCloud::PDS::PartInfoReqList t2 = *t1;
    p->setPartInfoList(t2);
}

void hFileCreateRequest_setUserTags(hFileCreateRequest self, hUserTagList userTags)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateRequest*>(self);
    auto t1 = reinterpret_cast<AlibabaCloud::PDS::UserTagList*>(userTags);
    AlibabaCloud::PDS::UserTagList t2 = *t1;
    p->setUserTags(t2);
}

void hFileCreateRequest_setPreHash(hFileCreateRequest self, char* preHash)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateRequest*>(self);
    p->setPreHash(preHash);
}

void hFileCreateRequest_setContentHash(hFileCreateRequest self, char* contentHash)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateRequest*>(self);
    p->setContentHash(contentHash);
}

void hFileCreateRequest_print(hFileCreateRequest self)
{
    std::cout << "hFileCreateRequest(" << ")" << std::endl;
}

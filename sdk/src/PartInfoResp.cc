/*
 * Copyright 2009-2021 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless Respuired by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/pdswrapper/PartInfoResp.h>
#include <alibabacloud/pds/model/PartInfoResp.h>
#include <iostream>


using PartInfoResp = AlibabaCloud::PDS::PartInfoResp;
using PartInfoRespList = std::vector<PartInfoResp>;


// ========== C-interface for hPartInfoResp
hPartInfoResp hPartInfoResp_New(int64_t partNumber, int64_t partSize, char* uploadUrl)
{
    return new (std::nothrow) PartInfoResp(partNumber, partSize, uploadUrl);
}

void hPartInfoResp_Del(hPartInfoResp self)
{
    delete reinterpret_cast<PartInfoResp*>(self);
}

int64_t hPartInfoResp_PartNumber(hPartInfoResp self)
{
    auto p = reinterpret_cast<PartInfoResp*>(self);
    return p->PartNumber();
}

int64_t hPartInfoResp_PartSize(hPartInfoResp self)
{
    auto p = reinterpret_cast<PartInfoResp*>(self);
    return p->PartSize();
}

char* hPartInfoResp_UploadUrl(hPartInfoResp self)
{
    auto p = reinterpret_cast<PartInfoResp*>(self);
    return const_cast<char*>(p->UploadUrl().c_str());
}

// ========== C-interface for hPartInfoRespList
hPartInfoRespList hPartInfoRespList_New()
{
    return new (std::nothrow) PartInfoRespList();
}

void hPartInfoRespList_Del(hPartInfoRespList self)
{
    delete reinterpret_cast<PartInfoRespList*>(self);
}

void hPartInfoRespList_add(hPartInfoRespList self, hPartInfoResp partInfo)
{
    auto p = reinterpret_cast<PartInfoRespList*>(self);
    auto p1 = reinterpret_cast<PartInfoResp*>(partInfo);
    p->push_back(*p1);
}

size_t hPartInfoRespList_size(hPartInfoRespList self)
{
    auto p = reinterpret_cast<PartInfoRespList*>(self);
    return p->size();
}

hPartInfoResp hPartInfoRespList_at(hPartInfoRespList self, int i)
{
    auto p = reinterpret_cast<PartInfoRespList*>(self);
    PartInfoResp& p2 = p->at(i);;
    return &p2;
}

void hPartInfoRespList_print(hPartInfoRespList self)
{
    auto p = reinterpret_cast<PartInfoRespList*>(self);
    for(auto iter = p->begin(); iter != p->end(); iter++) {
        std::cout << "PartNumber:" << iter->PartNumber() << " PartSize:" << iter->PartSize()    \
            << " UploadUrl:" << iter->UploadUrl() << std::endl;
    }
}

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

#include <alibabacloud/pdswrapper/PartInfoReq.h>
#include <alibabacloud/pds/model/PartInfoReq.h>
#include <iostream>


using PartInfoReq = AlibabaCloud::PDS::PartInfoReq;
using PartInfoReqList = std::vector<PartInfoReq>;


// ========== C-interface for hPartInfoReq
hPartInfoReq hPartInfoReq_New(int64_t partNumber, int64_t partSize, int64_t from, int64_t to)
{
    return new (std::nothrow) PartInfoReq(partNumber, partSize, from, to);
}

void hPartInfoReq_Del(hPartInfoReq self)
{
    delete reinterpret_cast<PartInfoReq*>(self);
}

int64_t hPartInfoReq_PartNumber(hPartInfoReq self)
{
    auto p = reinterpret_cast<PartInfoReq*>(self);
    return p->PartNumber();
}

int64_t hPartInfoReq_PartSize(hPartInfoReq self)
{
    auto p = reinterpret_cast<PartInfoReq*>(self);
    return p->PartSize();
}

int64_t hPartInfoReq_From(hPartInfoReq self)
{
    auto p = reinterpret_cast<PartInfoReq*>(self);
    return p->From();
}

int64_t hPartInfoReq_To(hPartInfoReq self)
{
    auto p = reinterpret_cast<PartInfoReq*>(self);
    return p->To();
}

// ========== C-interface for hPartInfoReqList
hPartInfoReqList hPartInfoReqList_New()
{
    return new (std::nothrow) PartInfoReqList();
}

void hPartInfoReqList_Del(hPartInfoReqList self)
{
    delete reinterpret_cast<PartInfoReqList*>(self);
}

void hPartInfoReqList_add(hPartInfoReqList self, hPartInfoReq partInfo)
{
    auto p = reinterpret_cast<PartInfoReqList*>(self);
    auto p1 = reinterpret_cast<PartInfoReq*>(partInfo);
    p->push_back(*p1);
}

size_t hPartInfoReqList_size(hPartInfoReqList self)
{
    auto p = reinterpret_cast<PartInfoReqList*>(self);
    return p->size();
}

hPartInfoReq hPartInfoReqList_at(hPartInfoReqList self, size_t i)
{
    auto p = reinterpret_cast<PartInfoReqList*>(self);
    PartInfoReq& p2 = p->at(i);;
    return &p2;
}

void hPartInfoReqList_print(hPartInfoReqList self)
{
    auto p = reinterpret_cast<PartInfoReqList*>(self);
    for(auto iter = p->begin(); iter != p->end(); iter++) {
        std::cout << "PartNumber:" << iter->PartNumber() << " PartSize:" << iter->PartSize()    \
            << " From:" << iter->From() << " To:" << iter->To() << std::endl;
    }
}

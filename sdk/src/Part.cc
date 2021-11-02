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

#include <alibabacloud/pdswrapper/Part.h>
#include <alibabacloud/pds/model/Part.h>
#include <iostream>


using Part = AlibabaCloud::PDS::Part;
using PartList = std::vector<Part>;


// ========== C-interface for hPart
hPart hPart_New(int64_t partNumber, int64_t partSize, char* etag)
{
    return new (std::nothrow) Part(partNumber, partSize, etag);
}

void hPart_Del(hPart self)
{
    delete reinterpret_cast<Part*>(self);
}

int64_t hPart_PartNumber(hPart self)
{
    auto p = reinterpret_cast<Part*>(self);
    return p->PartNumber();
}

int64_t hPart_PartSize(hPart self)
{
    auto p = reinterpret_cast<Part*>(self);
    return p->PartSize();
}

int64_t hPart_CRC64(hPart self)
{
    auto p = reinterpret_cast<Part*>(self);
    return p->CRC64();
}

char* hPart_ETag(hPart self)
{
    auto p = reinterpret_cast<Part*>(self);
    return const_cast<char*>(p->ETag().c_str());
}

// ========== C-interface for hPartList
hPartList hPartList_New()
{
    return new (std::nothrow) PartList();
}

void hPartList_Del(hPartList self)
{
    delete reinterpret_cast<PartList*>(self);
}

void hPartList_add(hPartList self, hPart partInfo)
{
    auto p = reinterpret_cast<PartList*>(self);
    auto p1 = reinterpret_cast<Part*>(partInfo);
    p->push_back(*p1);
}

int hPartList_size(hPartList self)
{
    auto p = reinterpret_cast<PartList*>(self);
    return p->size();
}

hPart hPartList_at(hPartList self, int i)
{
    auto p = reinterpret_cast<PartList*>(self);
    Part& p2 = p->at(i);;
    return &p2;
}

void hPartList_print(hPartList self)
{
    auto p = reinterpret_cast<PartList*>(self);
    for(auto iter = p->begin(); iter != p->end(); iter++) {
        std::cout << "PartNumber:" << iter->PartNumber() << " PartSize:" << iter->PartSize()    \
            << " CRC64:" << iter->CRC64() << " ETag:" << iter->ETag() << std::endl;
    }
}

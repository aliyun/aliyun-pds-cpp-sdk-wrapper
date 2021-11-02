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

#include <alibabacloud/pdswrapper/RequestMetaData.h>
#include <alibabacloud/pds/model/RequestMetaData.h>
#include <iostream>


// ========== C-interface for hRequestMetaData
hRequestMetaData hRequestMetaData_New()
{
    return new (std::nothrow) AlibabaCloud::PDS::RequestMetaData();
}

void hRequestMetaData_Del(hRequestMetaData self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::RequestMetaData*>(self);
}

int64_t hRequestMetaData_ContentLength(hRequestMetaData self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::RequestMetaData*>(self);
    return p->ContentLength();
}

char* hRequestMetaData_ContentType(hRequestMetaData self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::RequestMetaData*>(self);
    return const_cast<char*>(p->ContentType().c_str());
}

char* hRequestMetaData_ContentMd5(hRequestMetaData self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::RequestMetaData*>(self);
    return const_cast<char*>(p->ContentMd5().c_str());
}

uint64_t hRequestMetaData_CRC64(hRequestMetaData self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::RequestMetaData*>(self);
    return p->CRC64();
}

char* hRequestMetaData_ETag(hRequestMetaData self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::RequestMetaData*>(self);
    return const_cast<char*>(p->ETag().c_str());
}

char* hRequestMetaData_VersionId(hRequestMetaData self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::RequestMetaData*>(self);
    return const_cast<char*>(p->VersionId().c_str());
}

void hRequestMetaData_print(hRequestMetaData self)
{
    std::cout << "hRequestMetaData(" \
        << "ContentLength=" << hRequestMetaData_ContentLength(self) << "," \
        << "ContentType=" << hRequestMetaData_ContentType(self) << "," \
        << "ContentMd5=" << hRequestMetaData_ContentMd5(self) << "," \
        << "CRC64=" << hRequestMetaData_CRC64(self) << "," \
        << "ETag=" << hRequestMetaData_ETag(self) << "," \
        << "VersionId=" << hRequestMetaData_VersionId(self);
    std::cout << ")" << std::endl;
}


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

#include <alibabacloud/pdswrapper/FileGetDownloadUrlResult.h>
#include <alibabacloud/pds/model/FileGetDownloadUrlResult.h>
#include <iostream>


char* hFileGetDownloadUrlResult_ContentHash(hFileGetDownloadUrlResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetDownloadUrlResult*>(self);
    return const_cast<char*>(p->ContentHash().c_str());
}

char* hFileGetDownloadUrlResult_ContentHashName(hFileGetDownloadUrlResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetDownloadUrlResult*>(self);
    return const_cast<char*>(p->ContentHashName().c_str());
}

char* hFileGetDownloadUrlResult_Crc64Hash(hFileGetDownloadUrlResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetDownloadUrlResult*>(self);
    return const_cast<char*>(p->Crc64Hash().c_str());
}

char* hFileGetDownloadUrlResult_CdnUrl(hFileGetDownloadUrlResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetDownloadUrlResult*>(self);
    return const_cast<char*>(p->CdnUrl().c_str());
}

char* hFileGetDownloadUrlResult_Expiration(hFileGetDownloadUrlResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetDownloadUrlResult*>(self);
    return const_cast<char*>(p->Expiration().c_str());
}

char* hFileGetDownloadUrlResult_InternalUrl(hFileGetDownloadUrlResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetDownloadUrlResult*>(self);
    return const_cast<char*>(p->InternalUrl().c_str());
}

char* hFileGetDownloadUrlResult_Method(hFileGetDownloadUrlResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetDownloadUrlResult*>(self);
    return const_cast<char*>(p->Method().c_str());
}

int64_t hFileGetDownloadUrlResult_Size(hFileGetDownloadUrlResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetDownloadUrlResult*>(self);
    return p->Size();
}

char* hFileGetDownloadUrlResult_Url(hFileGetDownloadUrlResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetDownloadUrlResult*>(self);
    return const_cast<char*>(p->Url().c_str());
}

void hFileGetDownloadUrlResult_print(hFileGetDownloadUrlResult self)
{
    std::cout << "hFileGetDownloadUrlResult(" \
        << "ContentHash=" << hFileGetDownloadUrlResult_ContentHash(self) << "," \
        << "ContentHashName=" << hFileGetDownloadUrlResult_ContentHashName(self) << "," \
        << "Crc64Hash=" << hFileGetDownloadUrlResult_Crc64Hash(self) << "," \
        << "CdnUrl=" << hFileGetDownloadUrlResult_CdnUrl(self) << "," \
        << "Expiration=" << hFileGetDownloadUrlResult_Expiration(self) << "," \
        << "InternalUrl=" << hFileGetDownloadUrlResult_InternalUrl(self) << "," \
        << "Method=" << hFileGetDownloadUrlResult_Method(self) << "," \
        << "Size=" << hFileGetDownloadUrlResult_Size(self) << "," \
        << "Url=" << hFileGetDownloadUrlResult_Url(self);
    std::cout << ")" << std::endl;
}

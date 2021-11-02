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

#include <alibabacloud/pdswrapper/DataPutResult.h>
#include <alibabacloud/pds/model/DataPutResult.h>
#include <iostream>


char* hDataPutResult_ETag(hDataPutResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DataPutResult*>(self);
    return const_cast<char*>(p->ETag().c_str());
}

uint64_t hDataPutResult_CRC64(hDataPutResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DataPutResult*>(self);
    return p->CRC64();
}

void hDataPutResult_print(hDataPutResult self)
{
    std::cout << "hDataPutResult(" \
        << "ETag=" << hDataPutResult_ETag(self) << "," \
        << "CRC64=" << hDataPutResult_CRC64(self)
        << ")" << std::endl;
}

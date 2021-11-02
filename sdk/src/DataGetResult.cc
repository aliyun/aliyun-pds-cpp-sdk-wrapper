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

#include <alibabacloud/pdswrapper/DataGetResult.h>
#include <alibabacloud/pds/model/DataGetResult.h>
#include <iostream>


hRequestMetaData hDataGetResult_Metadata(hDataGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DataGetResult*>(self);
    AlibabaCloud::PDS::RequestMetaData& meta = const_cast<AlibabaCloud::PDS::RequestMetaData&>(p->Metadata());
    return &meta;
}

void hDataGetResult_print(hDataGetResult self)
{
    std::cout << "hDataGetResult(" \
        << "Metadata=";
    hRequestMetaData_print(hDataGetResult_Metadata(self));
    std::cout << ")" << std::endl;
}

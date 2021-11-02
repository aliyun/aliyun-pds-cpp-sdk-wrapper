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

#include <alibabacloud/pdswrapper/ServiceResult.h>
#include <alibabacloud/pds/Types.h>
#include <alibabacloud/pds/ServiceResult.h>
#include <iostream>


char* hServiceResult_RequestId(hServiceResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ServiceResult*>(self);
    return const_cast<char*>(p->RequestId().c_str());
}

void hServiceResult_print(hServiceResult self)
{
    std::cout << "hServiceResult(" \
        << "RequestId=" << hServiceResult_RequestId(self);
    std::cout << ")" << std::endl;
}

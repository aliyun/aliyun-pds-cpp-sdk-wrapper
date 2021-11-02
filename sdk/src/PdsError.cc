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

#include <alibabacloud/pdswrapper/PdsError.h>
#include <alibabacloud/pds/PdsError.h>
#include <iostream>


hPdsError hPdsError_New()
{
    return new (std::nothrow) AlibabaCloud::PDS::PdsError();
}

void hPdsError_Del(hPdsError self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::PdsError*>(self);
}

void hPdsError_setCode(hPdsError self, char* code)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsError*>(self);
    p->setCode(code);
}

char* hPdsError_Code(hPdsError self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsError*>(self);
    return const_cast<char*>(p->Code().c_str());
}

void hPdsError_setMessage(hPdsError self, char* message)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsError*>(self);
    p->setMessage(message);
}

char* hPdsError_Message(hPdsError self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsError*>(self);
    return const_cast<char*>(p->Message().c_str());
}

void hPdsError_setRequestId(hPdsError self, char* requestId)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsError*>(self);
    p->setMessage(requestId);
}

char* hPdsError_RequestId(hPdsError self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsError*>(self);
    return const_cast<char*>(p->RequestId().c_str());
}

void hPdsError_setHost(hPdsError self, char* host)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsError*>(self);
    p->setHost(host);
}

char* hPdsError_Host(hPdsError self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::PdsError*>(self);
    return const_cast<char*>(p->Host().c_str());
}

void hPdsError_print(hPdsError self)
{
    std::cout << "hPdsError(" \
        << "RequestId=" << hPdsError_RequestId(self) << "," \
        << "Code=" << hPdsError_Code(self) << "," \
        << "Message=" << hPdsError_Message(self) << "," \
        << "Host=" << hPdsError_Host(self) \
        << ")" << std::endl;
}

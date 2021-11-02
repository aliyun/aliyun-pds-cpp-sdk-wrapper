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

#include <alibabacloud/pdswrapper/AsyncTaskGetResult.h>
#include <alibabacloud/pds/model/AsyncTaskGetResult.h>
#include <iostream>


char* hAsyncTaskGetResult_AsyncTaskID(hAsyncTaskGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::AsyncTaskGetResult*>(self);
    return const_cast<char*>(p->AsyncTaskID().c_str());
}

char* hAsyncTaskGetResult_State(hAsyncTaskGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::AsyncTaskGetResult*>(self);
    return const_cast<char*>(p->State().c_str());
}

char* hAsyncTaskGetResult_Message(hAsyncTaskGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::AsyncTaskGetResult*>(self);
    return const_cast<char*>(p->Message().c_str());
}

int64_t hAsyncTaskGetResult_ConsumedProcess(hAsyncTaskGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::AsyncTaskGetResult*>(self);
    return p->ConsumedProcess();
}

int64_t hAsyncTaskGetResult_TotalProcess(hAsyncTaskGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::AsyncTaskGetResult*>(self);
    return p->TotalProcess();
}

int64_t hAsyncTaskGetResult_ErrCode(hAsyncTaskGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::AsyncTaskGetResult*>(self);
    return p->ErrCode();
}

char* hAsyncTaskGetResult_Url(hAsyncTaskGetResult self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::AsyncTaskGetResult*>(self);
    return const_cast<char*>(p->Url().c_str());
}

void hAsyncTaskGetResult_print(hAsyncTaskGetResult self)
{
    std::cout << "hAsyncTaskGetResult(" \
        << "AsyncTaskID=" << hAsyncTaskGetResult_AsyncTaskID(self) << "," \
        << "State=" << hAsyncTaskGetResult_State(self) << "," \
        << "Message=" << hAsyncTaskGetResult_Message(self) << "," \
        << "ConsumedProcess=" << hAsyncTaskGetResult_ConsumedProcess(self) << "," \
        << "TotalProcess=" << hAsyncTaskGetResult_TotalProcess(self) << "," \
        << "ErrCode=" << hAsyncTaskGetResult_ErrCode(self) << "," \
        << "Url=" << hAsyncTaskGetResult_Url(self) \
        << ")" << std::endl;
}

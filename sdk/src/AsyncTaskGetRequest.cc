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

#include <alibabacloud/pdswrapper/AsyncTaskGetRequest.h>
#include <alibabacloud/pds/model/AsyncTaskGetRequest.h>
#include <iostream>


hAsyncTaskGetRequest hAsyncTaskGetRequest_New(char* asyncTaskId)
{
    return new (std::nothrow) AlibabaCloud::PDS::AsyncTaskGetRequest(asyncTaskId);
}

void hAsyncTaskGetRequest_Del(hAsyncTaskGetRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::AsyncTaskGetRequest*>(self);
}

void hAsyncTaskGetRequest_print(hAsyncTaskGetRequest self)
{
    std::cout << "hAsyncTaskGetRequest("
        << "self=" << self;
    std::cout <<")" << std::endl;
}
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

#include <alibabacloud/pdswrapper/FileCreateOutcome.h>
#include <alibabacloud/pds/PdsFwd.h>


hFileCreateOutcome hFileCreateOutcome_New()
{
    return new (std::nothrow) AlibabaCloud::PDS::FileCreateOutcome();
}

void hFileCreateOutcome_Del(hFileCreateOutcome self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileCreateOutcome*>(self);
}

bool hFileCreateOutcome_isSuccess(hFileCreateOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateOutcome*>(self);
    return p->isSuccess();
}

hPdsError hFileCreateOutcome_error(hFileCreateOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateOutcome*>(self);
    return &(p->error());
}

hFileCreateResult hFileCreateOutcome_result(hFileCreateOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCreateOutcome*>(self);
    return &(p->result());
}
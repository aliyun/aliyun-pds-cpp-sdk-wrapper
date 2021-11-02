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

#include <alibabacloud/pdswrapper/FileDeleteOutcome.h>
#include <alibabacloud/pds/PdsFwd.h>


hFileDeleteOutcome hFileDeleteOutcome_New()
{
    return new (std::nothrow) AlibabaCloud::PDS::FileDeleteOutcome();
}

void hFileDeleteOutcome_Del(hFileDeleteOutcome self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileDeleteOutcome*>(self);
}

bool hFileDeleteOutcome_isSuccess(hFileDeleteOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileDeleteOutcome*>(self);
    return p->isSuccess();
}

hPdsError hFileDeleteOutcome_error(hFileDeleteOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileDeleteOutcome*>(self);
    return &(p->error());
}

hFileDeleteResult hFileDeleteOutcome_result(hFileDeleteOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileDeleteOutcome*>(self);
    return &(p->result());
}
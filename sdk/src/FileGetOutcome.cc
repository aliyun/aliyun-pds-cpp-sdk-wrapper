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

#include <alibabacloud/pdswrapper/FileGetOutcome.h>
#include <alibabacloud/pds/PdsFwd.h>


hFileGetOutcome hFileGetOutcome_New()
{
    return new (std::nothrow) AlibabaCloud::PDS::FileGetOutcome();
}

void hFileGetOutcome_Del(hFileGetOutcome self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileGetOutcome*>(self);
}

bool hFileGetOutcome_isSuccess(hFileGetOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetOutcome*>(self);
    return p->isSuccess();
}

hPdsError hFileGetOutcome_error(hFileGetOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetOutcome*>(self);
    return &(p->error());
}

hFileGetResult hFileGetOutcome_result(hFileGetOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetOutcome*>(self);
    return &(p->result());
}
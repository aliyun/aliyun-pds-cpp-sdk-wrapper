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

#include <alibabacloud/pdswrapper/DirListOutcome.h>
#include <alibabacloud/pds/PdsFwd.h>


hDirListOutcome hDirListOutcome_New()
{
    return new (std::nothrow) AlibabaCloud::PDS::DirListOutcome();
}

void hDirListOutcome_Del(hDirListOutcome self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::DirListOutcome*>(self);
}

bool hDirListOutcome_isSuccess(hDirListOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirListOutcome*>(self);
    return p->isSuccess();
}

hPdsError hDirListOutcome_error(hDirListOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirListOutcome*>(self);
    return &(p->error());
}

hDirListResult hDirListOutcome_result(hDirListOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::DirListOutcome*>(self);
    return &(p->result());
}

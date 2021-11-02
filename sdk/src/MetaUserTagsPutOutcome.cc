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

#include <alibabacloud/pdswrapper/MetaUserTagsPutOutcome.h>
#include <alibabacloud/pds/PdsFwd.h>


hMetaUserTagsPutOutcome hMetaUserTagsPutOutcome_New()
{
    return new (std::nothrow) AlibabaCloud::PDS::MetaUserTagsPutOutcome();
}

void hMetaUserTagsPutOutcome_Del(hMetaUserTagsPutOutcome self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::MetaUserTagsPutOutcome*>(self);
}

bool hMetaUserTagsPutOutcome_isSuccess(hMetaUserTagsPutOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::MetaUserTagsPutOutcome*>(self);
    return p->isSuccess();
}

hPdsError hMetaUserTagsPutOutcome_error(hMetaUserTagsPutOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::MetaUserTagsPutOutcome*>(self);
    return &(p->error());
}

hMetaUserTagsPutResult hMetaUserTagsPutOutcome_result(hMetaUserTagsPutOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::MetaUserTagsPutOutcome*>(self);
    return &(p->result());
}
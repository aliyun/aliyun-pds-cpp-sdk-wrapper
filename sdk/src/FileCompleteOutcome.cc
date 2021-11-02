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

#include <alibabacloud/pdswrapper/FileCompleteOutcome.h>
#include <alibabacloud/pds/PdsFwd.h>


hFileCompleteOutcome hFileCompleteOutcome_New()
{
    return new (std::nothrow) AlibabaCloud::PDS::FileCompleteOutcome();
}

void hFileCompleteOutcome_Del(hFileCompleteOutcome self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileCompleteOutcome*>(self);
}

bool hFileCompleteOutcome_isSuccess(hFileCompleteOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteOutcome*>(self);
    return p->isSuccess();
}

hPdsError hFileCompleteOutcome_error(hFileCompleteOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteOutcome*>(self);
    return &(p->error());
}

hFileCompleteResult hFileCompleteOutcome_result(hFileCompleteOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileCompleteOutcome*>(self);
    return &(p->result());
}
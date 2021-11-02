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

#include <alibabacloud/pdswrapper/FileRenameOutcome.h>
#include <alibabacloud/pds/PdsFwd.h>


hFileRenameOutcome hFileRenameOutcome_New()
{
    return new (std::nothrow) AlibabaCloud::PDS::FileRenameOutcome();
}

void hFileRenameOutcome_Del(hFileRenameOutcome self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileRenameOutcome*>(self);
}

bool hFileRenameOutcome_isSuccess(hFileRenameOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileRenameOutcome*>(self);
    return p->isSuccess();
}

hPdsError hFileRenameOutcome_error(hFileRenameOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileRenameOutcome*>(self);
    return &(p->error());
}

hFileRenameResult hFileRenameOutcome_result(hFileRenameOutcome self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileRenameOutcome*>(self);
    return &(p->result());
}
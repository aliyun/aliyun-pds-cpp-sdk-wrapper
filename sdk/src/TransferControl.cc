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

#include <alibabacloud/pdswrapper/TransferControl.h>
#include <alibabacloud/pds/Types.h>


using TransferProgressFuncType = void(size_t, int64_t, int64_t, void*);
using ProgressControlType = int32_t(void*);


// ========== C-interface for hTransferProgress
hTransferProgress hTransferProgress_New(TransferProgressHandler handler, void* userData)
{
    auto p = new (std::nothrow) AlibabaCloud::PDS::TransferProgress();
    p->Handler = reinterpret_cast<TransferProgressFuncType*>(handler);
    p->UserData = userData;
    return p;
}

void hTransferProgress_Del(hTransferProgress self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::TransferProgress*>(self);
}

// ========== C-interface for hProgressControl
hProgressControl hProgressControl_New(ProgressControlHandler handler, void* userData)
{
    auto p = new (std::nothrow) AlibabaCloud::PDS::ProgressControl();
    p->Handler = reinterpret_cast<ProgressControlType*>(handler);
    p->UserData = userData;
    return p;
}

void hProgressControl_Del(hProgressControl self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::ProgressControl*>(self);
}

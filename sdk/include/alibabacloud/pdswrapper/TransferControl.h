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
#ifndef _PDS_CPP_SDK_WRAPPER_TRANSFER_CONTROL_H_
#define _PDS_CPP_SDK_WRAPPER_TRANSFER_CONTROL_H_

#include <alibabacloud/pdswrapper/common.h>
#include <stdio.h>


// ========== C-interface for hTransferProgress
typedef void(*TransferProgressHandler)(size_t, int64_t, int64_t, void*);
typedef void* hTransferProgress;

EXPORT_C ALIBABACLOUD_PDS_EXPORT hTransferProgress hTransferProgress_New(TransferProgressHandler handler, void* userData);
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hTransferProgress_Del(hTransferProgress self);


// ========== C-interface for hProgressControl
typedef int32_t(*ProgressControlHandler)(void*);
typedef void* hProgressControl;

EXPORT_C ALIBABACLOUD_PDS_EXPORT hProgressControl hProgressControl_New(ProgressControlHandler handler, void* userData);
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hProgressControl_Del(hProgressControl self);

#endif

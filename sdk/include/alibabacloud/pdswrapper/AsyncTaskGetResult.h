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
#ifndef _PDS_CPP_SDK_WRAPPER_ASYNC_TASK_GET_RESULT_H_
#define _PDS_CPP_SDK_WRAPPER_ASYNC_TASK_GET_RESULT_H_

#include <alibabacloud/pdswrapper/common.h>


// ========== C-interface for hAsyncTaskGetResult
typedef void* hAsyncTaskGetResult;

EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hAsyncTaskGetResult_AsyncTaskID(hAsyncTaskGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hAsyncTaskGetResult_State(hAsyncTaskGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hAsyncTaskGetResult_Message(hAsyncTaskGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hAsyncTaskGetResult_ConsumedProcess(hAsyncTaskGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hAsyncTaskGetResult_TotalProcess(hAsyncTaskGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hAsyncTaskGetResult_ErrCode(hAsyncTaskGetResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hAsyncTaskGetResult_Url(hAsyncTaskGetResult self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hAsyncTaskGetResult_print(hAsyncTaskGetResult self);

#endif

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
#ifndef _PDS_CPP_SDK_WRAPPER_FILE_GET_OUTCOME_H_
#define _PDS_CPP_SDK_WRAPPER_FILE_GET_OUTCOME_H_

#include <alibabacloud/pdswrapper/common.h>
#include <alibabacloud/pdswrapper/PdsError.h>
#include <alibabacloud/pdswrapper/FileGetResult.h>


// ========== C-interface for hFileGetOutcome
typedef void* hFileGetOutcome;

EXPORT_C hFileGetOutcome hFileGetOutcome_New();
EXPORT_C void hFileGetOutcome_Del(hFileGetOutcome self);

EXPORT_C bool hFileGetOutcome_isSuccess(hFileGetOutcome self);
EXPORT_C hPdsError hFileGetOutcome_error(hFileGetOutcome self);
EXPORT_C hFileGetResult hFileGetOutcome_result(hFileGetOutcome self);

#endif

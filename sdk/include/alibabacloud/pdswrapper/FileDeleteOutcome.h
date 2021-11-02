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

#pragma once

#include <alibabacloud/pdswrapper/common.h>
#include <alibabacloud/pdswrapper/PdsError.h>
#include <alibabacloud/pdswrapper/FileDeleteResult.h>


// ========== C-interface for hFileDeleteOutcome
typedef void* hFileDeleteOutcome;

EXPORT_C hFileDeleteOutcome hFileDeleteOutcome_New();
EXPORT_C void hFileDeleteOutcome_Del(hFileDeleteOutcome self);

EXPORT_C bool hFileDeleteOutcome_isSuccess(hFileDeleteOutcome self);
EXPORT_C hPdsError hFileDeleteOutcome_error(hFileDeleteOutcome self);
EXPORT_C hFileDeleteResult hFileDeleteOutcome_result(hFileDeleteOutcome self);

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
#include <alibabacloud/pdswrapper/DirListResult.h>
#include <stdbool.h>


// ========== C-interface for hDirListOutcome
typedef void* hDirListOutcome;

EXPORT_C hDirListOutcome hDirListOutcome_New();
EXPORT_C void hDirListOutcome_Del(hDirListOutcome self);

EXPORT_C bool hDirListOutcome_isSuccess(hDirListOutcome self);
EXPORT_C hPdsError hDirListOutcome_error(hDirListOutcome self);
EXPORT_C hDirListResult hDirListOutcome_result(hDirListOutcome self);

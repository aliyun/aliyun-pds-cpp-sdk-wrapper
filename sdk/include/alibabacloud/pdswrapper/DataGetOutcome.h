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
#include <alibabacloud/pdswrapper/DataGetResult.h>


// ========== C-interface for hDataGetOutcome
typedef void* hDataGetOutcome;

EXPORT_C hDataGetOutcome hDataGetOutcome_New();
EXPORT_C void hDataGetOutcome_Del(hDataGetOutcome self);

EXPORT_C bool hDataGetOutcome_isSuccess(hDataGetOutcome self);
EXPORT_C hPdsError hDataGetOutcome_error(hDataGetOutcome self);
EXPORT_C hDataGetResult hDataGetOutcome_result(hDataGetOutcome self);
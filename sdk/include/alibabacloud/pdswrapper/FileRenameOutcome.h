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
#ifndef _PDS_CPP_SDK_WRAPPER_FILE_RENAME_OUTCOME_H_
#define _PDS_CPP_SDK_WRAPPER_FILE_RENAME_OUTCOME_H_

#include <alibabacloud/pdswrapper/common.h>
#include <alibabacloud/pdswrapper/PdsError.h>
#include <alibabacloud/pdswrapper/FileRenameResult.h>


// ========== C-interface for hFileRenameOutcome
typedef void* hFileRenameOutcome;

EXPORT_C ALIBABACLOUD_PDS_EXPORT hFileRenameOutcome hFileRenameOutcome_New();
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hFileRenameOutcome_Del(hFileRenameOutcome self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT bool hFileRenameOutcome_isSuccess(hFileRenameOutcome self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hPdsError hFileRenameOutcome_error(hFileRenameOutcome self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hFileRenameResult hFileRenameOutcome_result(hFileRenameOutcome self);

#endif

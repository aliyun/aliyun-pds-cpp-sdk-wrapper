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
#ifndef _PDS_CPP_SDK_WRAPPER_FILE_GET_UPLOAD_URL_OUTCOME_H_
#define _PDS_CPP_SDK_WRAPPER_FILE_GET_UPLOAD_URL_OUTCOME_H_

#include <alibabacloud/pdswrapper/common.h>
#include <alibabacloud/pdswrapper/PdsError.h>
#include <alibabacloud/pdswrapper/FileGetUploadUrlResult.h>


// ========== C-interface for hFileGetUploadUrlOutcome
typedef void* hFileGetUploadUrlOutcome;

EXPORT_C hFileGetUploadUrlOutcome hFileGetUploadUrlOutcome_New();
EXPORT_C void hFileGetUploadUrlOutcome_Del(hFileGetUploadUrlOutcome self);

EXPORT_C bool hFileGetUploadUrlOutcome_isSuccess(hFileGetUploadUrlOutcome self);
EXPORT_C hPdsError hFileGetUploadUrlOutcome_error(hFileGetUploadUrlOutcome self);
EXPORT_C hFileGetUploadUrlResult hFileGetUploadUrlOutcome_result(hFileGetUploadUrlOutcome self);

#endif

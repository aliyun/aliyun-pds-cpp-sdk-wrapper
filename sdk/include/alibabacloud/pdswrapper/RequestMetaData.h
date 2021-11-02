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
#ifndef _PDS_CPP_SDK_WRAPPER_REQUEST_META_DATA_H_
#define _PDS_CPP_SDK_WRAPPER_REQUEST_META_DATA_H_

#include <alibabacloud/pdswrapper/common.h>


// ========== C-interface for hRequestMetaData
typedef void* hRequestMetaData;

EXPORT_C hRequestMetaData hRequestMetaData_New();
EXPORT_C void hRequestMetaData_Del(hRequestMetaData self);

EXPORT_C int64_t hRequestMetaData_ContentLength(hRequestMetaData self);
EXPORT_C char* hRequestMetaData_ContentType(hRequestMetaData self);
EXPORT_C char* hRequestMetaData_ContentMd5(hRequestMetaData self);
EXPORT_C uint64_t hRequestMetaData_CRC64(hRequestMetaData self);
EXPORT_C char* hRequestMetaData_ETag(hRequestMetaData self);
EXPORT_C char* hRequestMetaData_VersionId(hRequestMetaData self);

EXPORT_C void hRequestMetaData_print(hRequestMetaData self);

#endif

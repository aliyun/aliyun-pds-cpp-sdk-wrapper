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
#ifndef _PDS_CPP_SDK_WRAPPER_PART_H_
#define _PDS_CPP_SDK_WRAPPER_PART_H_

#include <alibabacloud/pdswrapper/common.h>


// ========== C-interface for hPart
typedef void* hPart;

EXPORT_C hPart hPart_New(int64_t partNumber, int64_t partSize, char* etag);
EXPORT_C void hPart_Del(hPart self);

EXPORT_C int64_t hPart_PartNumber(hPart self);
EXPORT_C int64_t hPart_PartSize(hPart self);
EXPORT_C int64_t hPart_CRC64(hPart self);
EXPORT_C char* hPart_ETag(hPart self);

EXPORT_C void hPart_print(hPart self);

// ========== C-interface for hPartList
typedef void* hPartList;

EXPORT_C hPartList hPartList_New();
EXPORT_C void hPartList_Del(hPartList self);

EXPORT_C void hPartList_add(hPartList self, hPart partInfo);
EXPORT_C int hPartList_size(hPartList self);
EXPORT_C hPart hPartList_at(hPartList self, int i);
EXPORT_C void hPartList_print(hPartList self);

#endif

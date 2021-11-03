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
#ifndef _PDS_CPP_SDK_WRAPPER_PART_INFO_REQ_H_
#define _PDS_CPP_SDK_WRAPPER_PART_INFO_REQ_H_

#include <alibabacloud/pdswrapper/common.h>


// ========== C-interface for hPartInfoReq
typedef void* hPartInfoReq;

EXPORT_C ALIBABACLOUD_PDS_EXPORT hPartInfoReq hPartInfoReq_New(int64_t partNumber, int64_t partSize, int64_t from, int64_t to);
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hPartInfoReq_Del(hPartInfoReq self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hPartInfoReq_PartNumber(hPartInfoReq self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hPartInfoReq_PartSize(hPartInfoReq self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hPartInfoReq_From(hPartInfoReq self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hPartInfoReq_To(hPartInfoReq self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hPartInfoReq_print(hPartInfoReq self);

// ========== C-interface for hPartInfoReqList
typedef void* hPartInfoReqList;

EXPORT_C ALIBABACLOUD_PDS_EXPORT hPartInfoReqList hPartInfoReqList_New();
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hPartInfoReqList_Del(hPartInfoReqList self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hPartInfoReqList_add(hPartInfoReqList self, hPartInfoReq partInfo);
EXPORT_C ALIBABACLOUD_PDS_EXPORT int hPartInfoReqList_size(hPartInfoReqList self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hPartInfoReq hPartInfoReqList_at(hPartInfoReqList self, int i);
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hPartInfoReqList_print(hPartInfoReqList self);

#endif

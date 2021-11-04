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
#ifndef _PDS_CPP_SDK_WRAPPER_PART_INFO_RESP_H_
#define _PDS_CPP_SDK_WRAPPER_PART_INFO_RESP_H_

#include <alibabacloud/pdswrapper/common.h>
#include <alibabacloud/pdswrapper/MetaUserTag.h>


// ========== C-interface for hPartInfoResp
typedef void* hPartInfoResp;

EXPORT_C ALIBABACLOUD_PDS_EXPORT hPartInfoResp hPartInfoResp_New(int64_t partNumber, int64_t partSize, char* uploadUrl);
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hPartInfoResp_Del(hPartInfoResp self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hPartInfoResp_PartNumber(hPartInfoResp self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hPartInfoResp_PartSize(hPartInfoResp self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hPartInfoResp_UploadUrl(hPartInfoResp self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hPartInfoResp_print(hPartInfoResp self);

// ========== C-interface for hPartInfoRespList
typedef void* hPartInfoRespList;

EXPORT_C ALIBABACLOUD_PDS_EXPORT hPartInfoRespList hPartInfoRespList_New();
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hPartInfoRespList_Del(hPartInfoRespList self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hPartInfoRespList_add(hPartInfoRespList self, char* key, char* val);
EXPORT_C ALIBABACLOUD_PDS_EXPORT size_t hPartInfoRespList_size(hPartInfoRespList self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hPartInfoResp hPartInfoRespList_at(hPartInfoRespList self, int i);
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hPartInfoRespList_print(hPartInfoRespList self);

#endif

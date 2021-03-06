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
#ifndef _PDS_CPP_SDK_WRAPPER_FILE_GET_DOWNLOAD_URL_RESULT_H_
#define _PDS_CPP_SDK_WRAPPER_FILE_GET_DOWNLOAD_URL_RESULT_H_

#include <alibabacloud/pdswrapper/common.h>


// ========== C-interface for hFileGetDownloadUrlResult
typedef void* hFileGetDownloadUrlResult;

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hFileGetDownloadUrlResult_print(hFileGetDownloadUrlResult self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetDownloadUrlResult_ContentHash(hFileGetDownloadUrlResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetDownloadUrlResult_ContentHashName(hFileGetDownloadUrlResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetDownloadUrlResult_Crc64Hash(hFileGetDownloadUrlResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetDownloadUrlResult_CdnUrl(hFileGetDownloadUrlResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetDownloadUrlResult_Expiration(hFileGetDownloadUrlResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetDownloadUrlResult_InternalUrl(hFileGetDownloadUrlResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetDownloadUrlResult_Method(hFileGetDownloadUrlResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT int64_t hFileGetDownloadUrlResult_Size(hFileGetDownloadUrlResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileGetDownloadUrlResult_Url(hFileGetDownloadUrlResult self);

#endif

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
#ifndef _PDS_CPP_SDK_WRAPPER_FILE_LIST_UPLOADED_PARTS_RESULT_H_
#define _PDS_CPP_SDK_WRAPPER_FILE_LIST_UPLOADED_PARTS_RESULT_H_

#include <alibabacloud/pdswrapper/common.h>
#include <alibabacloud/pdswrapper/Part.h>


// ========== C-interface for hFileListUploadedPartsResult
typedef void* hFileListUploadedPartsResult;

EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileListUploadedPartsResult_FileID(hFileListUploadedPartsResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileListUploadedPartsResult_UploadID(hFileListUploadedPartsResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hFileListUploadedPartsResult_NextMarker(hFileListUploadedPartsResult self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT hPartList hFileListUploadedPartsResult_PartList(hFileListUploadedPartsResult self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hFileListUploadedPartsResult_print(hFileListUploadedPartsResult self);

#endif

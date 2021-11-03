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
#ifndef _PDS_CPP_SDK_WRAPPER_META_USER_TAGS_DELETE_REQUEST_H_
#define _PDS_CPP_SDK_WRAPPER_META_USER_TAGS_DELETE_REQUEST_H_

#include <alibabacloud/pdswrapper/common.h>
#include <alibabacloud/pdswrapper/MetaUserTag.h>


// ========== C-interface for hMetaUserTagsDeleteRequest
typedef void* hMetaUserTagsDeleteRequest;

EXPORT_C ALIBABACLOUD_PDS_EXPORT hMetaUserTagsDeleteRequest hMetaUserTagsDeleteRequest_New(char* driveID,
                                                char* fileID,
                                                hUserTagList keyList);
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hMetaUserTagsDeleteRequest_Del(hMetaUserTagsDeleteRequest self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hMetaUserTagsDeleteRequest_print(hMetaUserTagsDeleteRequest self);

#endif

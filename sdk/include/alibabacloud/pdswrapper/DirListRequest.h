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
#ifndef _PDS_CPP_SDK_WRAPPER_DIR_LIST_REQUEST_H_
#define _PDS_CPP_SDK_WRAPPER_DIR_LIST_REQUEST_H_

#include <alibabacloud/pdswrapper/common.h>
#include <alibabacloud/pdswrapper/MetaUserTag.h>


// ========== C-interface for hDirListRequest
typedef void* hDirListRequest;

EXPORT_C hDirListRequest hDirListRequest_New(char* driveID,
                                            char* parentFileID,
                                            char* orderBy,
                                            char* orderDirection,
                                            char* fields,
                                            char* marker,
                                            int limit);
EXPORT_C void hDirListRequest_Del(hDirListRequest self);

EXPORT_C void hDirListRequest_setType(hDirListRequest self, char* type);
EXPORT_C void hDirListRequest_setCategory(hDirListRequest self, char* category);
EXPORT_C void hDirListRequest_setUrlExpireSec(hDirListRequest self, int urlExpireSec);
EXPORT_C void hDirListRequest_setStarred(hDirListRequest self, bool starred);
EXPORT_C void hDirListRequest_setAll(hDirListRequest self, bool all);

EXPORT_C void hDirListRequest_print(hDirListRequest self);

#endif

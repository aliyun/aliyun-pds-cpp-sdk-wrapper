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
#ifndef _PDS_CPP_SDK_WRAPPER_META_USER_TAG_H_
#define _PDS_CPP_SDK_WRAPPER_META_USER_TAG_H_

#include <alibabacloud/pdswrapper/common.h>


// ========== C-interface for hUserTag
EXPORT_C struct ALIBABACLOUD_PDS_EXPORT hUserTag
{
    char* key;
    char* val;
};

// ========== C-interface for hUserTagList
typedef void* hUserTagList;

EXPORT_C ALIBABACLOUD_PDS_EXPORT hUserTagList hUserTagList_New();
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hUserTagList_Del(hUserTagList self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hUserTagList_add(hUserTagList self, char* key, char* val);
EXPORT_C ALIBABACLOUD_PDS_EXPORT size_t hUserTagList_size(hUserTagList self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT struct hUserTag hUserTagList_at(hUserTagList self, int i);
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hUserTagList_print(hUserTagList self);

// ========== C-interface for hUserTagMap
typedef void* hUserTagMap;

EXPORT_C ALIBABACLOUD_PDS_EXPORT hUserTagMap hUserTagMap_New();
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hUserTagMap_Del(hUserTagMap self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hUserTagMap_add(hUserTagMap self, char* key, char* val);
EXPORT_C ALIBABACLOUD_PDS_EXPORT size_t hUserTagMap_size(hUserTagMap self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT struct hUserTag hUserTagMap_at(hUserTagList self, int i);
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hUserTagMap_print(hUserTagMap self);

// ========== C-interface for hUserTagKeyList
typedef void* hUserTagKeyList;

EXPORT_C ALIBABACLOUD_PDS_EXPORT hUserTagKeyList hUserTagKeyList_New();
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hUserTagKeyList_Del(hUserTagKeyList self);

EXPORT_C ALIBABACLOUD_PDS_EXPORT void hUserTagKeyList_add(hUserTagKeyList self, char* key);
EXPORT_C ALIBABACLOUD_PDS_EXPORT size_t hUserTagKeyList_size(hUserTagKeyList self);
EXPORT_C ALIBABACLOUD_PDS_EXPORT char* hUserTagKeyList_at(hUserTagKeyList self, int i);
EXPORT_C ALIBABACLOUD_PDS_EXPORT void hUserTagKeyList_print(hUserTagKeyList self);

#endif

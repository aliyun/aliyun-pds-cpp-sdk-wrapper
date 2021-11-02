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
EXPORT_C struct hUserTag
{
    char* key;
    char* val;
};

// ========== C-interface for hUserTagList
typedef void* hUserTagList;

EXPORT_C hUserTagList hUserTagList_New();
EXPORT_C void hUserTagList_Del(hUserTagList self);

EXPORT_C void hUserTagList_add(hUserTagList self, char* key, char* val);
EXPORT_C int hUserTagList_size(hUserTagList self);
EXPORT_C struct hUserTag hUserTagList_at(hUserTagList self, int i);
EXPORT_C void hUserTagList_print(hUserTagList self);

// ========== C-interface for hUserTagMap
typedef void* hUserTagMap;

EXPORT_C hUserTagMap hUserTagMap_New();
EXPORT_C void hUserTagMap_Del(hUserTagMap self);

EXPORT_C void hUserTagMap_add(hUserTagMap self, char* key, char* val);
EXPORT_C int hUserTagMap_size(hUserTagMap self);
EXPORT_C struct hUserTag hUserTagMap_at(hUserTagList self, int i);
EXPORT_C void hUserTagMap_print(hUserTagMap self);

// ========== C-interface for hUserTagKeyList
typedef void* hUserTagKeyList;

EXPORT_C hUserTagKeyList hUserTagKeyList_New();
EXPORT_C void hUserTagKeyList_Del(hUserTagKeyList self);

EXPORT_C void hUserTagKeyList_add(hUserTagKeyList self, char* key);
EXPORT_C int hUserTagKeyList_size(hUserTagKeyList self);
EXPORT_C char* hUserTagKeyList_at(hUserTagKeyList self, int i);
EXPORT_C void hUserTagKeyList_print(hUserTagKeyList self);

#endif

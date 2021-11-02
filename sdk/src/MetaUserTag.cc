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

#include <alibabacloud/pdswrapper/MetaUserTag.h>
#include <alibabacloud/pds/model/MetaUserTag.h>
#include <alibabacloud/pds/model/DirCreateRequest.h>
#include <iostream>


using UserTagMap = std::map<std::string, std::string>;
using UserTagList = AlibabaCloud::PDS::UserTagList;
using UserTagKeyList = std::vector<std::string>;


// ========== C-interface for hUserTagList
EXPORT_C hUserTagList hUserTagList_New()
{
    return new (std::nothrow) (UserTagList);
}

EXPORT_C void hUserTagList_Del(hUserTagList self)
{
    delete reinterpret_cast<UserTagList*>(self);
}

void hUserTagList_add(hUserTagList self, char* key, char* val)
{
    auto p = reinterpret_cast<UserTagList*>(self);
    AlibabaCloud::PDS::UserTag tag(key, val);
    p->push_back(tag);
}

int hUserTagList_size(hUserTagList self)
{
    auto p = reinterpret_cast<UserTagList*>(self);
    return p->size();
}

hUserTag hUserTagList_at(hUserTagList self, int i)
{
    auto p = reinterpret_cast<UserTagList*>(self);
    AlibabaCloud::PDS::UserTag& tag = p->at(i);

    hUserTag hTag;
    hTag.key = const_cast<char*>(tag.Key().c_str());
    hTag.val = const_cast<char*>(tag.Value().c_str());
    return hTag;
}

void hUserTagList_print(hUserTagList self)
{
    auto p = reinterpret_cast<UserTagList*>(self);
    for(auto iter = p->begin(); iter != p->end(); iter++) {
        std::cout << iter->key_ << "->" << iter->value_ << std::endl;
    }
}

// ========== C-interface for hUserTagMap
EXPORT_C hUserTagMap hUserTagMap_New()
{
    return new (std::nothrow) UserTagMap();
}

EXPORT_C void hUserTagMap_Del(hUserTagMap self)
{
    delete reinterpret_cast<UserTagMap*>(self);
}

void hUserTagMap_add(hUserTagMap self, char* key, char* val)
{
    auto p = reinterpret_cast<UserTagMap*>(self);
    p->insert(std::pair<std::string, std::string>(key, val));
}

int hUserTagMap_size(hUserTagMap self)
{
    auto p = reinterpret_cast<UserTagMap*>(self);
    return p->size();
}

hUserTag hUserTagMap_at(hUserTagMap self, int i)
{
    auto p = reinterpret_cast<UserTagMap*>(self);
    auto element = std::next(p->begin(), i);

    hUserTag hTag;
    hTag.key = const_cast<char*>(element->first.c_str());
    hTag.val = const_cast<char*>(element->second.c_str());
    return hTag;
}

void hUserTagMap_print(hUserTagMap self)
{
    std::cout << "[";
    for(int i = 0; i < hUserTagMap_size(self); ++i) {
        hUserTag tag = hUserTagMap_at(self, i);
        std::cout << "(" << tag.key << "->" << tag.val << ")" << std::endl;
    }
    std::cout << "]";
}


// ========== C-interface for hUserTagKeyList
EXPORT_C hUserTagKeyList hUserTagKeyList_New()
{
    return new (std::nothrow) (UserTagKeyList);
}

EXPORT_C void hUserTagKeyList_Del(hUserTagKeyList self)
{
    delete reinterpret_cast<UserTagKeyList*>(self);
}

void hUserTagKeyList_add(hUserTagKeyList self, char* key)
{
    auto p = reinterpret_cast<UserTagKeyList*>(self);
    p->push_back(key);
}

int hUserTagKeyList_size(hUserTagKeyList self)
{
    auto p = reinterpret_cast<UserTagKeyList*>(self);
    return p->size();
}

char* hUserTagKeyList_at(hUserTagKeyList self, int i)
{
    auto p = reinterpret_cast<UserTagKeyList*>(self);
    std::string& key = p->at(i);
    return const_cast<char*>(key.c_str());
}

void hUserTagKeyList_print(hUserTagKeyList self)
{
    std::cout << "[";
    auto p = reinterpret_cast<UserTagKeyList*>(self);
    for(auto iter = p->begin(); iter != p->end(); iter++) {
        std::cout << *iter;

        if (*iter == p->back()) {
            break;
        }
        std::cout << ",";
    }
    std::cout << "]";
}
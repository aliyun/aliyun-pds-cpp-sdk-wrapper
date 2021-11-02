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

#include <alibabacloud/pdswrapper/DirTrashRequest.h>
#include <alibabacloud/pds/model/DirTrashRequest.h>


hDirTrashRequest hDirTrashRequest_New(char* driveID, char* fileID)
{
    return new (std::nothrow) AlibabaCloud::PDS::DirTrashRequest(driveID, fileID);
}

void hDirTrashRequest_Del(hDirTrashRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::DirTrashRequest*>(self);
}

void hDirTrashRequest_print(hDirTrashRequest self)
{
    std::cout << "hDirTrashRequest(" << ")" << std::endl;
}

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

#include <alibabacloud/pdswrapper/DirDeleteRequest.h>
#include <alibabacloud/pds/model/DirDeleteRequest.h>


hDirDeleteRequest hDirDeleteRequest_New(char* driveID, char* fileID)
{
    return new (std::nothrow) AlibabaCloud::PDS::DirDeleteRequest(driveID, fileID);
}

void hDirDeleteRequest_Del(hDirDeleteRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::DirDeleteRequest*>(self);
}

void hDirDeleteRequest_print(hDirDeleteRequest self)
{
    std::cout << "hDirDeleteRequest(" << ")" << std::endl;
}

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

#include <alibabacloud/pdswrapper/FileRenameRequest.h>
#include <alibabacloud/pds/model/FileRenameRequest.h>


hFileRenameRequest hFileRenameRequest_New(char* driveID,
                                                char* fileID,
                                                char* name,
                                                char* checkNameMode)
{
    return new (std::nothrow) AlibabaCloud::PDS::FileRenameRequest(driveID, fileID, name, checkNameMode);
}

void hFileRenameRequest_Del(hFileRenameRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileRenameRequest*>(self);
}

void hFileRenameRequest_print(hFileRenameRequest self)
{
    std::cout << "hFileRenameRequest("
        << "self=" << self;
    std::cout <<")" << std::endl;
}

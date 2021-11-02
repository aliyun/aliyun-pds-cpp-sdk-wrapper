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

#include <alibabacloud/pdswrapper/FileTrashRequest.h>
#include <alibabacloud/pds/model/FileTrashRequest.h>


hFileTrashRequest hFileTrashRequest_New(char* driveID,
                                        char* fileID)
{
    return new (std::nothrow) AlibabaCloud::PDS::FileTrashRequest(driveID, fileID);
}

void hFileTrashRequest_Del(hFileTrashRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileTrashRequest*>(self);
}

void hFileTrashRequest_print(hFileTrashRequest self)
{
    std::cout << "hFileTrashRequest(" << ")" << std::endl;
}

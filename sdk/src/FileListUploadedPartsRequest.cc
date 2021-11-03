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

#include <alibabacloud/pdswrapper/FileListUploadedPartsRequest.h>
#include <alibabacloud/pds/model/FileListUploadedPartsRequest.h>


hFileListUploadedPartsRequest hFileListUploadedPartsRequest_New(char* driveID,
                                                char* fileID,
                                                char* uploadID,
                                                int64_t marker,
                                                int64_t limit)
{
    return new (std::nothrow) AlibabaCloud::PDS::FileListUploadedPartsRequest(driveID, fileID, uploadID, marker, limit);
}

void hFileListUploadedPartsRequest_Del(hFileListUploadedPartsRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileListUploadedPartsRequest*>(self);
}

void hFileListUploadedPartsRequest_setMarker(hFileListUploadedPartsRequest self, int64_t marker)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileListUploadedPartsRequest*>(self);
    p->setMarker(marker);
}

void hFileListUploadedPartsRequest_print(hFileListUploadedPartsRequest self)
{
    std::cout << "hFileListUploadedPartsRequest("
        << "self=" << self;
    std::cout <<")" << std::endl;
}

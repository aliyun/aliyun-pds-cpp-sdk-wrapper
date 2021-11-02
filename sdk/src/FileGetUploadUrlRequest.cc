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

#include <alibabacloud/pdswrapper/FileGetUploadUrlRequest.h>
#include <alibabacloud/pds/model/FileGetUploadUrlRequest.h>


hFileGetUploadUrlRequest hFileGetUploadUrlRequest_New(char* driveID,
                                                char* fileID,
                                                char* uploadID,
                                                hPartInfoReqList partInfoReqList)
{
    auto partInfoReq = reinterpret_cast<AlibabaCloud::PDS::PartInfoReqList*>(partInfoReqList);
    return new (std::nothrow) AlibabaCloud::PDS::FileGetUploadUrlRequest(driveID, fileID, uploadID, *partInfoReq);
}

void hFileGetUploadUrlRequest_Del(hFileGetUploadUrlRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileGetUploadUrlRequest*>(self);
}

void hFileGetUploadUrlRequest_setTrafficLimit(hFileGetUploadUrlRequest self, int64_t value)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetUploadUrlRequest*>(self);
    p->setTrafficLimit(value);
}

void hFileGetUploadUrlRequest_setUserAgent(hFileGetUploadUrlRequest self, char* ua)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetUploadUrlRequest*>(self);
    p->setUserAgent(ua);
}

void hFileGetUploadUrlRequest_print(hFileGetUploadUrlRequest self)
{
    std::cout << "hFileGetUploadUrlRequest(" << ")" << std::endl;
}

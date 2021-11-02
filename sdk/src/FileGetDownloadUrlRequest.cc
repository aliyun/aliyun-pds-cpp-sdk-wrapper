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

#include <alibabacloud/pdswrapper/FileGetDownloadUrlRequest.h>
#include <alibabacloud/pds/model/FileGetDownloadUrlRequest.h>


hFileGetDownloadUrlRequest hFileGetDownloadUrlRequest_New(char* driveID,
                                                char* shareID,
                                                char* fileID)
{
    return new (std::nothrow) AlibabaCloud::PDS::FileGetDownloadUrlRequest(driveID, shareID, fileID);
}

void hFileGetDownloadUrlRequest_Del(hFileGetDownloadUrlRequest self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::FileGetDownloadUrlRequest*>(self);
}

void hFileGetDownloadUrlRequest_setUrlExpireSec(hFileGetDownloadUrlRequest self, int64_t urlExpireSec)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetDownloadUrlRequest*>(self);
    p->setUrlExpireSec(urlExpireSec);
}

void hFileGetDownloadUrlRequest_setShareToken(hFileGetDownloadUrlRequest self, char* shareToken)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::FileGetDownloadUrlRequest*>(self);
    p->setShareToken(shareToken);
}

void hFileGetDownloadUrlRequest_print(hFileGetDownloadUrlRequest self)
{
    std::cout << "hFileGetDownloadUrlRequest(" << ")" << std::endl;
}

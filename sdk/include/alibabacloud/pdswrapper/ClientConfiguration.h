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
#ifndef _PDS_CPP_SDK_WRAPPER_CLIENT_CONFIGURATION_H_
#define _PDS_CPP_SDK_WRAPPER_CLIENT_CONFIGURATION_H_

#include <alibabacloud/pdswrapper/common.h>

EXPORT_C enum HTTPScheme
{
    HTTP,
    HTTPS
};


// ========== C-interface for ClientConfiguration
typedef void* hClientConfiguration;
EXPORT_C hClientConfiguration hClientConfiguration_New();
EXPORT_C void hClientConfiguration_Del(hClientConfiguration self);

EXPORT_C void hClientConfiguration_SetUserAgent(hClientConfiguration self, char* userAgent);
EXPORT_C char* hClientConfiguration_GetUserAgent(hClientConfiguration self);

EXPORT_C void hClientConfiguration_SetScheme(hClientConfiguration self, enum HTTPScheme scheme);
EXPORT_C enum HTTPScheme hClientConfiguration_GetScheme(hClientConfiguration self);

EXPORT_C void hClientConfiguration_SetMaxConnections(hClientConfiguration self, unsigned val);
EXPORT_C unsigned hClientConfiguration_GetMaxConnections(hClientConfiguration self);

EXPORT_C void hClientConfiguration_SetRequestTimeoutMs(hClientConfiguration self, long requestTimeoutMs);
EXPORT_C long hClientConfiguration_GetRequestTimeoutMs(hClientConfiguration self);

EXPORT_C void hClientConfiguration_SetConnectTimeoutMs(hClientConfiguration self, long connectTimeoutMs);
EXPORT_C long hClientConfiguration_GetConnectTimeoutMs(hClientConfiguration self);

EXPORT_C void hClientConfiguration_SetEnableCrc64(hClientConfiguration self, bool enableCrc64);
EXPORT_C bool hClientConfiguration_GetEnableCrc64(hClientConfiguration self);

EXPORT_C void hClientConfiguration_SetEnableRapidUpload(hClientConfiguration self, bool enableRapidUpload);
EXPORT_C bool hClientConfiguration_GetEnableRapidUpload(hClientConfiguration self);

#endif

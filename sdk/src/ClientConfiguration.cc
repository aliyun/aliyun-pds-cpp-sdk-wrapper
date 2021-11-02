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

#include <alibabacloud/pdswrapper/ClientConfiguration.h>
#include <alibabacloud/pds/PdsClient.h>


hClientConfiguration hClientConfiguration_New()
{
    return new (std::nothrow) AlibabaCloud::PDS::ClientConfiguration();
}

void hClientConfiguration_Del(hClientConfiguration self)
{
    delete reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
}

void hClientConfiguration_SetUserAgent(hClientConfiguration self, char* userAgent)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    p->userAgent = userAgent;
}

char* hClientConfiguration_GetUserAgent(hClientConfiguration self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    return const_cast<char*>(p->userAgent.c_str());
}

void hClientConfiguration_SetScheme(hClientConfiguration self, HTTPScheme scheme)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    p->scheme = AlibabaCloud::PDS::Http::Scheme(scheme);
}

HTTPScheme hClientConfiguration_GetScheme(hClientConfiguration self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    return HTTPScheme(p->scheme);
}

void hClientConfiguration_SetMaxConnections(hClientConfiguration self, unsigned val)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    p->maxConnections = val;
}

unsigned hClientConfiguration_GetMaxConnections(hClientConfiguration self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    return p->maxConnections;
}

void hClientConfiguration_SetRequestTimeoutMs(hClientConfiguration self, long requestTimeoutMs)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    p->requestTimeoutMs = requestTimeoutMs;
}

long hClientConfiguration_GetRequestTimeoutMs(hClientConfiguration self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    return p->requestTimeoutMs;
}

void hClientConfiguration_SetConnectTimeoutMs(hClientConfiguration self, long connectTimeoutMs)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    p->connectTimeoutMs = connectTimeoutMs;
}

long hClientConfiguration_GetConnectTimeoutMs(hClientConfiguration self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    return p->connectTimeoutMs;
}

void hClientConfiguration_SetEnableCrc64(hClientConfiguration self, bool enableCrc64)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    p->enableCrc64 = enableCrc64;
}

bool hClientConfiguration_GetEnableCrc64(hClientConfiguration self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    return p->enableCrc64;
}

void hClientConfiguration_SetEnableRapidUpload(hClientConfiguration self, bool enableRapidUpload)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    p->enableRapidUpload = enableRapidUpload;
}

bool hClientConfiguration_GetEnableRapidUpload(hClientConfiguration self)
{
    auto p = reinterpret_cast<AlibabaCloud::PDS::ClientConfiguration*>(self);
    return p->enableRapidUpload;
}

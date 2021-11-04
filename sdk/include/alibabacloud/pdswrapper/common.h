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
#ifndef _PDS_CPP_SDK_WRAPPER_COMMON_H_
#define _PDS_CPP_SDK_WRAPPER_COMMON_H_

#ifdef __cplusplus
  #define EXPORT_C extern "C"
#else
  #define EXPORT_C
#endif

#pragma once

#if defined(_WIN32)
#   ifdef _MSC_VER
#       pragma warning(disable : 4251)
#   endif // _MSC_VER
#   define ALIBABACLOUD_DECL_EXPORT __declspec(dllexport)
#   define ALIBABACLOUD_DECL_IMPORT __declspec(dllimport)
#elif __GNUC__ >= 4
#   define ALIBABACLOUD_DECL_EXPORT __attribute__((visibility("default")))
#   define ALIBABACLOUD_DECL_IMPORT __attribute__((visibility("default")))
#endif

#if !defined(ALIBABACLOUD_DECL_EXPORT)
#   define ALIBABACLOUD_DECL_EXPORT
#endif

#if !defined(ALIBABACLOUD_DECL_IMPORT)
#   define ALIBABACLOUD_DECL_IMPORT
#endif

#if defined(ALIBABACLOUD_SHARED)
#   if defined(ALIBABACLOUD_PDS_LIBRARY)
#       define ALIBABACLOUD_PDS_EXPORT ALIBABACLOUD_DECL_EXPORT
#   else
#       define ALIBABACLOUD_PDS_EXPORT ALIBABACLOUD_DECL_IMPORT
#   endif
#else
#   define ALIBABACLOUD_PDS_EXPORT
#endif


#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#endif

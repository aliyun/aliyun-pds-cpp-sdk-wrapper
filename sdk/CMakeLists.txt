#
# Copyright 2009-2021 Alibaba Cloud All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
project(cpp-sdk-wrapper VERSION ${version})


# common header
file(GLOB sdk_wrapper_header "include/alibabacloud/pdswrapper/*.h")

# all header
file(GLOB sdk_header
    ${sdk_wrapper_header}
)

# common source
file(GLOB sdk_wrapper_src "src/*.cc")

# all source
file(GLOB sdk_src
    ${sdk_wrapper_src}
)

# extra define pass to source code
if (BUILD_TESTS)
    set(EXTRA_DEFINE "-DENABLE_PDS_TEST")
else()
    set(EXTRA_DEFINE "")
endif()

list(APPEND SDK_COMPILER_FLAGS "-std=c++11")

# static lib
add_library(${PROJECT_NAME}${STATIC_LIB_SUFFIX} STATIC
    ${sdk_header}
    ${sdk_src})

set_target_properties(${PROJECT_NAME}${STATIC_LIB_SUFFIX}
    PROPERTIES
    LINKER_LANGUAGE CXX
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}${PROJECT_NAME}${STATIC_LIB_SUFFIX}
    )

target_include_directories(${PROJECT_NAME}${STATIC_LIB_SUFFIX}
    PRIVATE include
    PRIVATE ${PDS_SOURCE_DIR}/sdk/include)

target_include_directories(${PROJECT_NAME}${STATIC_LIB_SUFFIX}
    PRIVATE ${CRYPTO_INCLUDE_DIRS}
    PRIVATE ${CLIENT_INCLUDE_DIRS})

target_compile_options(${PROJECT_NAME}${STATIC_LIB_SUFFIX}
    PRIVATE "${SDK_COMPILER_FLAGS}" "${EXTRA_DEFINE}")

# shared lib
if (BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} SHARED
        ${sdk_header}
        ${sdk_src})

    set_target_properties(${PROJECT_NAME}
        PROPERTIES
        LINKER_LANGUAGE CXX
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}${PROJECT_NAME}
        )

    target_include_directories(${PROJECT_NAME}
        PRIVATE include
        PRIVATE ${PDS_SOURCE_DIR}/sdk/include)

    target_include_directories(${PROJECT_NAME}
        PRIVATE ${CRYPTO_INCLUDE_DIRS}
        PRIVATE ${CLIENT_INCLUDE_DIRS})

    target_compile_options(${PROJECT_NAME}
        PRIVATE "${SDK_COMPILER_FLAGS}" -DALIBABACLOUD_SHARED -DALIBABACLOUD_PDS_LIBRARY)

    if(NOT CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    target_compile_options(${PROJECT_NAME}
        PRIVATE "-fvisibility=hidden")
    endif()

    target_link_libraries(${PROJECT_NAME} ${PDS_LIBS})
    target_link_libraries(${PROJECT_NAME} ${CRYPTO_LIBS})
    target_link_libraries(${PROJECT_NAME} ${CLIENT_LIBS})
endif()

# install
install(FILES ${sdk_wrapper_header}
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/pdswrapper/)

install(TARGETS ${PROJECT_NAME}${STATIC_LIB_SUFFIX}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    )

if (BUILD_SHARED_LIBS)
install(TARGETS  ${PROJECT_NAME}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    )
endif()

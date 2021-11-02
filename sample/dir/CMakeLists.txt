cmake_minimum_required(VERSION 3.9)
project( CallCppFromC)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_VERBOSE_MAKEFILE ON)

file(GLOB sample_dir_src "*.c")

include_directories(${PDS_WRAPPER_INCLUDE})
link_directories(${PDS_WRAPPER_INCLUDE}/../build/lib)
link_directories("/usr/local/lib")
link_directories("/usr/local/opt/openssl/lib/")

add_executable(DirSample
	${sample_dir_src})

target_link_libraries(DirSample alibabacloud-pds-cpp-sdk-wrapper alibabacloud-pds-cpp-sdk stdc++ crypto ssl curl)

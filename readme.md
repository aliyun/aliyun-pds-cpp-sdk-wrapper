# 阿里云PDS C++工具 wrapper 套件

windows

``` txt
mkdir build
cd build
cmake -DPDS_SOURCE_DIR="C:\Users\Administrator\Desktop\aliyun-pds-cpp-sdk" -DPDS_LIBS_DIR="C:\Users\Administrator\Desktop\aliyun-pds-cpp-sdk\build\lib\Debug" -DBUILD_SHARED_LIBS=OFF ..

使用 VS studio 打开 build 目录下的 sln 文件，进行编译
```

linux

``` txt
export PROJECT_ROOT=/xxx
mkdir build
cd build
cmake -DPDS_SOURCE_DIR=${PROJECT_ROOT}/aliyun-pds-cpp-sdk \
      -DPDS_LIBS_DIR=${PROJECT_ROOT}/aliyun-pds-cpp-sdk/build/lib ..
make
```

mac

``` txt
export PROJECT_ROOT=/xxx
mkdir build
cd build
cmake -DOPENSSL_ROOT_DIR=/usr/local/Cellar/openssl@1.1/1.1.1l_1/  \
      -DOPENSSL_LIBRARIES=/usr/local/Cellar/openssl@1.1/1.1.1l_1/lib  \
      -DOPENSSL_INCLUDE_DIRS=/usr/local/Cellar/openssl@1.1/1.1.1l_1/include \
      -DPDS_SOURCE_DIR=${PROJECT_ROOT}/aliyun-pds-cpp-sdk \
      -DPDS_LIBS_DIR=${PROJECT_ROOT}/aliyun-pds-cpp-sdk/build/lib/ \
      -DBUILD_SHARED_LIBS=ON ..
make
```

内存管理

1. hClientConfiguration, hCredentials, hPdsClient, hUserTagList 等通过 hXXX_New 创建的，需要自行调用 hXXX_Del 进行释放
2. request，通过 hXXXRequest_New 后，需要自行调用 hXXXRequest_Del 进行释放
3. outcome，通过 client->XXX(xxxRequest) 后返回的，需要自行调用 hXXXOutcome_Del 进行释放
4. error，通过 hXXXOutcome_error 后返回的，不需要自行释放
5. result，通过 hXXXOutcome_result 后返回的，不需要自行释放
6. xxxList，xxxMap，通过 hXXXResult_Items 返回的 list，map，不需要自行释放
7. 其它情况不需要自行释放

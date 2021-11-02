# 阿里云PDS C++工具 wrapper 套件

编译 pds sdk

``` txt
cmake -DOPENSSL_ROOT_DIR=/usr/local/Cellar/openssl@1.1/1.1.1l_1/  \
      -DOPENSSL_LIBRARIES=/usr/local/Cellar/openssl@1.1/1.1.1l_1/lib  \
      -DOPENSSL_INCLUDE_DIRS=/usr/local/Cellar/openssl@1.1/1.1.1l_1/include/ \
      -DCMAKE_BUILD_TYPE=Debug ..
```

编译 pds sdk wrapper

``` txt
export WRAPPER_HOME=$PWD
cd ${WRAPPER_HOME}/sdk && mkdir build
cd build
cmake ../
```

编译 sample

``` txt
export WRAPPER_HOME=$PWD
cd ${WRAPPER_HOME}/sample/dir && mkdir build
cd build
cmake -DPDS_WRAPPER_INCLUDE=${WRAPPER_HOME}/sdk/include ../
```

内存管理

1. hClientConfiguration, hCredentials, hPdsClient, hUserTagList 等通过 hXXX_New 创建的，需要自行调用 hXXX_Del 进行释放
2. request，通过 hXXXRequest_New 后，需要自行调用 hXXXRequest_Del 进行释放
3. outcome，通过 client->XXX(xxxRequest) 后返回的，需要自行调用 hXXXOutcome_Del 进行释放
4. error，通过 hXXXOutcome_error 后返回的，不需要自行释放
5. result，通过 hXXXOutcome_result 后返回的，不需要自行释放
6. xxxList，xxxMap，通过 hXXXResult_Items 返回的 list，map，不需要自行释放
7. 其它情况不需要自行释放

# 阿里云PDS C++工具 wrapper 套件

编译 pds sdk

``` txt
cmake -DOPENSSL_ROOT_DIR=/usr/local/Cellar/openssl@1.1/1.1.1l_1/  \
      -DOPENSSL_LIBRARIES=/usr/local/Cellar/openssl@1.1/1.1.1l_1/lib  \
      -DOPENSSL_INCLUDE_DIRS=/usr/local/Cellar/openssl@1.1/1.1.1l_1/include/ ..
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

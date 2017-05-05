# CMake 最低版本号要求
CMAKE_MINIMUM_REQUIRED (VERSION 2.8)

SET(CMAKE_CXX_FLAGS "-g -Wall -o2")

# 查找当前目录下的所有源文件
AUX_SOURCE_DIRECTORY(. SRCS)

# 指定生成库
ADD_LIBRARY(math ${SRCS})

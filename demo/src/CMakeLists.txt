# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

SET(CMAKE_CXX_FLAGS "-g -Wall -o2")

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/../common)
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/../common/lib)

# 查找当前目录下的所有源文件
AUX_SOURCE_DIRECTORY(. SRCS)

ADD_EXECUTABLE(demo ${SRCS})

TARGET_LINK_LIBRARIES(demo math)

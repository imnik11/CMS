cmake_minimum_required(VERSION 3.15)
project(CMS)

set(CMAKE_CXX_STANDARD 14)

add_executable(CMS main.cpp Blockchain.h Block.h SHA256_H.h SHA256.cpp Block.cpp Blockchain.cpp)
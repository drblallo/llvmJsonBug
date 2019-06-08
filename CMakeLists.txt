cmake_minimum_required(VERSION 3.9)

project(example)


find_package(LLVM REQUIRED CONFIG)

ADD_EXECUTABLE(testJSON testJSON.cpp)
TARGET_COMPILE_FEATURES(testJSON PUBLIC cxx_std_17)
TARGET_LINK_LIBRARIES(testJSON PRIVATE LLVMSupport)


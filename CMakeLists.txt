cmake_minimum_required(VERSION 3.10)
project(OpenCVSnippets)

#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
find_package(OpenCV REQUIRED)
set(SOURCE_FILES main.cpp)

add_executable(OpenCVSnippets main.cpp openimagev2.cpp openimagev2.h)
#add_executable(OpenCVSnippets ${SOURCE_FILES})
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(OpenCVSnippets ${OpenCV_LIBS})
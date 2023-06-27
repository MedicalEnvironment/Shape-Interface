cmake_minimum_required(VERSION 3.23)
project("Shape-Interface" VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(Shape-Interface main.cpp ${MY_INCLUDE_DIR}/Circle.h Circle.cpp ${MY_INCLUDE_DIR}/Rectangle.h Rectangle.cpp ${MY_INCLUDE_DIR}/Shape.h ${MY_INCLUDE_DIR}/Triangle.h Triangle.cpp)
target_include_directories(Shape-Interface PUBLIC ${MY_INCLUDE_DIR})
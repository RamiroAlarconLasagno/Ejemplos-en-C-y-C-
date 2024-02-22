cmake_minimum_required(VERSION 3.5)

project(SobrecargaConstructores LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(SobrecargaConstructores main.cpp)

install(TARGETS SobrecargaConstructores
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

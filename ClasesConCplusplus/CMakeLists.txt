cmake_minimum_required(VERSION 3.5)

project(ClasesConCplusplus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ClasesConCplusplus main.cpp)

install(TARGETS ClasesConCplusplus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

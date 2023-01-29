cmake_minimum_required(VERSION 3.22)
project(Proiect_POO)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)

include_directories(include)

file(GLOB HEADERS include/*.h)

add_executable(Proiect_POO main.cpp ${HEADERS})
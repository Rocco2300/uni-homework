cmake_minimum_required(VERSION 3.22)
project(Proiect_POO)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)

include_directories(include)

add_executable(Proiect_POO main.cpp)

if(MSVC)
    target_compile_options(Proiect_POO PUBLIC /W4 /WX)
else()
    target_compile_options(Proiect_POO PUBLIC -Wall -Wextra -Wpedantic -Werror)
endif()
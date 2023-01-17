cmake_minimum_required(VERSION 3.23)
project(Aplicatie_2)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
link_directories(lib)

add_executable(Aplicatie_2 main.cpp)
target_link_libraries(Aplicatie_2 -lopengl32 -lfreeglut -lglu32)
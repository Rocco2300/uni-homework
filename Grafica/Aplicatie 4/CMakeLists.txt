cmake_minimum_required(VERSION 3.23)
project(Aplicatie_4)

set(CMAKE_CXX_STANDARD 17)

add_executable(Aplicatie_4 main.cpp)
target_link_libraries(Aplicatie_4 freeglut glu32 opengl32 glew32)
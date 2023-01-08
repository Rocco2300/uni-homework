cmake_minimum_required(VERSION 3.23)
project(Aplicatie_3)

set(CMAKE_CXX_STANDARD 17)

add_executable(Aplicatie_3 main.cpp)
target_link_libraries(Aplicatie_3 freeglut glu32 opengl32 glew32)

add_definitions(-DGL_GLEXT_PROTOTYPES)

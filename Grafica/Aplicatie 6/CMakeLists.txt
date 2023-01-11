cmake_minimum_required(VERSION 3.23)
project(Aplicatie_6)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(Aplicatie_6 main.cpp)
target_link_libraries(Aplicatie_6 freeglut glu32 opengl32 glew32)
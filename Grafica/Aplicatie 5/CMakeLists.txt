cmake_minimum_required(VERSION 3.23)
project(Aplicatie_5)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(Aplicatie_5 main.cpp)
target_link_libraries(Aplicatie_5 freeglut glu32 opengl32 glew32)
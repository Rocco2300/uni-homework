cmake_minimum_required(VERSION 3.23)
project(Aplicatie_7)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
link_directories(lib)

add_executable(Aplicatie_7 main.cpp)
target_link_libraries(Aplicatie_7 freeglut glu32 opengl32 glew32)
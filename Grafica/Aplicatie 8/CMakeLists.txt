cmake_minimum_required(VERSION 3.23)
project(Aplicatie_8)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
link_directories(lib)

add_executable(Aplicatie_8 main.cpp)
target_link_libraries(Aplicatie_8 glu32 opengl32 glew32 freeglut)
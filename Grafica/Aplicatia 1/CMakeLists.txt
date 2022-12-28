cmake_minimum_required(VERSION 3.23)
project(freegluttest)

set(CMAKE_CXX_STANDARD 17)

add_executable(freegluttest main.cpp)
target_link_libraries(freegluttest -lopengl32 -lfreeglut -lglu32)

cmake_minimum_required(VERSION 3.23)

set(CMAKE_C_COMPILER "clang")
set(CMAKE_C_STANDARD 17)

set(CMAKE_C_FLAGS "-Wall -pedantic -msse2")

# set the project name
project(stb_tutorial VERSION 1.0)

# add the executable
add_executable(t0 t0.c)
add_executable(t0b t0b.c)
add_executable(t1 t1.c)
add_executable(t2 t2.c Image.c)

target_include_directories(t0 PUBLIC ~/cxx)
target_include_directories(t0b PUBLIC ~/cxx)
target_include_directories(t1 PUBLIC ~/cxx)
target_include_directories(t2 PUBLIC ~/cxx)

file(COPY ${CMAKE_SOURCE_DIR}/sky.jpg ${CMAKE_SOURCE_DIR}/Shapes.png DESTINATION ${PROJECT_BINARY_DIR})

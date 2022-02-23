cmake_minimum_required(VERSION 3.20)
project(Labyrinth)

set(CMAKE_CXX_STANDARD 14)

add_executable(Labyrinth main.cpp Labyrinth.cpp MazeGenerator.cpp Validate.cpp)

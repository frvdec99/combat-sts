cmake_minimum_required(VERSION 3.26)
project(combat_sts)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(combat_sts main.cpp
        include/Monster.h
        src/Monster.cpp
        include/Random.h
        include/State.h
        src/State.cpp)

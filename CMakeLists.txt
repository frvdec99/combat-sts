cmake_minimum_required(VERSION 3.24)
project(combat_sts)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(combat_sts main.cpp
        include/base/Monster.h
        src/base/Monster.cpp
        include/base/Random.h
        include/GameState.h
        src/State.cpp
        include/base/Card.h
        include/base/Relic.h)

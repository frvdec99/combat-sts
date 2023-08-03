cmake_minimum_required(VERSION 3.24)
project(combat_sts)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(combat_sts main.cpp
        src/game/CardContainer.cpp
        src/game/GameState.cpp
        src/game/RelicContainer.cpp
        src/combat/CombatState.cpp)

#include <iostream>
#include "game/GameState.h"

using namespace StS;

int main() {
    uint64_t seed = 0;
    GameState gs(Character::SILENT, seed, 20);
    std::cout << gs;
    return 0;
}

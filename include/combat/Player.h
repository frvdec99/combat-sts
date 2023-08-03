//
// Created by andian on 2023/8/3.
//

#ifndef COMBAT_STS_PLAYER_H
#define COMBAT_STS_PLAYER_H

#include "const/Character.h"

namespace StS {
    class Player {
    public:
        Character character = Character::INVALID;
        int gold = 99;
        int curHp = 80;
        int maxHp = 80;
        int energy = 0;
        int energyPerTurn = 3;
        int cardDrawPerTurn = 5;
    };
}

#endif //COMBAT_STS_PLAYER_H

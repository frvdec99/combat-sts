//
// Created by andian on 2023/8/2.
//

#ifndef COMBAT_STS_MONSTER_H
#define COMBAT_STS_MONSTER_H

#include "const/Monsters.h"

namespace StS {
    class Monster {
    public:
        MonsterId id;
        int curHp = 0;
        int maxHp = 0;
        int block = 0;

        Monster() = default;
        Monster(const Monster& rhs) = default;
    };
}

#endif //COMBAT_STS_MONSTER_H

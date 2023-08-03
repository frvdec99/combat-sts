//
// Created by andian on 2023/8/2.
//

#ifndef COMBAT_STS_MONSTER_H
#define COMBAT_STS_MONSTER_H

#include <cassert>
#include "const/Monsters.h"
#include "combat/CombatState.h"

namespace StS {
    class CombatState;

    class Monster {
    public:
        MonsterId id = MonsterId::INVALID;

        int curHp = 0;
        int maxHp = 0;
        int block = 0;

        Monster() = default;
        Monster(const Monster& rhs) = default;


        void setRandomHp(Random& rng, bool ascension);
        void initHp(Random& rng, int ascension);
        void init(CombatState& cs, const MonsterId& monster);
    };
}

#endif //COMBAT_STS_MONSTER_H

//
// Created by andian on 2023/8/2.
//

#ifndef COMBAT_STS_MONSTERGROUP_H
#define COMBAT_STS_MONSTERGROUP_H

#include <array>
#include "base/Monster.h"
#include "combat/CombatState.h"

namespace StS {
    class MonsterGroup {
        int monsterCount = 0;
        std::array<Monster, 5> arr;

        void init(CombatState& cs, const MonsterEncounter& encounter);
        void createMonster(CombatState& cs, const MonsterId& id);
        void createMonsters(CombatState& cs, const MonsterEncounter& encounter);
    };
}

#endif //COMBAT_STS_MONSTERGROUP_H

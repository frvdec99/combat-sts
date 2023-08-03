//
// Created by andian on 2023/8/2.
//

#ifndef COMBAT_STS_MONSTERGROUP_H
#define COMBAT_STS_MONSTERGROUP_H

#include <array>
#include "base/Monster.h"
#include "base/Random.h"
#include "base/MonsterEncounter.h"

namespace StS {
    class MonsterGroup {
    public:
        int monsterCount = 0;
        std::array<Monster, 5> arr;

        static MonsterId getLouse(Random &miscRng);

        void init(Random& monsterHpRng, Random& miscRng, Random& aiRng,
                  int ascension, const MonsterEncounter& encounter);
        void createMonster(Random& monsterHpRng, int ascension, const MonsterId& id);
        void createMonsters(Random& monsterHpRng, Random& miscRng, int ascension, const MonsterEncounter& encounter);
    };
}

#endif //COMBAT_STS_MONSTERGROUP_H

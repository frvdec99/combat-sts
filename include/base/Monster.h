//
// Created by andian on 2023/8/2.
//

#ifndef COMBAT_STS_MONSTER_H
#define COMBAT_STS_MONSTER_H

#include <cassert>
#include "const/Monsters.h"
#include "const/MonsterMoves.h"
#include "base/Random.h"

namespace StS {

    class Monster {
    public:
        MonsterId id = MonsterId::INVALID;

        int curHp = 0;
        int maxHp = 0;
        int block = 0;

        int miscInfo = 0;

        MMID moveHistory[2] = {MMID::INVALID, MMID::INVALID };

        Monster() = default;
        Monster(const Monster& rhs) = default;

        void setRandomHp(Random& rng, bool ascension);
        void initHp(Random& rng, int ascension);
        void init(Random& monsterHpRng, int ascension, const MonsterId& monster);

        void rollMove(Random& aiRng, int ascension);
        MMID getMoveForRoll(Random& aiRng, int ascension);
        void setMove(MMID moveId);

//        void preCombatAction();

        inline bool firstTurn();
        inline bool lastMove(MMID moveId);
        inline bool lastTwoMoves(MMID moveId);
    };
}

#endif //COMBAT_STS_MONSTER_H

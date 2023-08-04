//
// Created by andian on 2023/7/31.
//

#ifndef COMBAT_STS_COMBATCONTEXT_H
#define COMBAT_STS_COMBATCONTEXT_H

#include <deque>
#include "base/MonsterEncounter.h"
#include "game/GameState.h"
#include "combat/MonsterGroup.h"
#include "combat/Player.h"

namespace StS {
    class CombatState {
    public:
        std::uint64_t seed{};
        int ascension = 0;
        int floorNumber = 0;

        Random aiRng; // Monster AI
        Random monsterHpRng;
        Random cardRng;
        Random shuffleRng;
        Random miscRng;

        int potionCount = 0;
        int potionCapacity = 0;
        std::array<Potion, 5> potions{};

        MonsterGroup monsters;
        Player player;

        CombatState() = default;
        CombatState(const CombatState &rhs) = default;

//        void init(const GameState& gs);
        void init(const GameState& gs, const MonsterEncounter& monsterInit);
        void initRelics(const GameState& gs);
    };
}


#endif //COMBAT_STS_COMBATCONTEXT_H

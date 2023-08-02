//
// Created by frvdec on 2023/7/30.
//

#ifndef COMBAT_STS_GAMESTATE_H
#define COMBAT_STS_GAMESTATE_H

#include <vector>
#include <array>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include "const/Character.h"
#include "const/Potions.h"
#include "base/Card.h"
#include "base/Relic.h"
#include "game/RelicContainer.h"
#include "game/CardContainer.h"

namespace StS {
    class GameState {
    public:
        // TODO: add some information about game instead of combat
        std::uint64_t seed;
        int ascension = 0;
        int floorNumber = 0;

        // player state
        Character character;
        int curHp = 80;
        int maxHp = 80;
        int gold = 99;

        // potion state
        int potionCount = 0;
        int potionCapacity = 0;
        std::array<Potion, 5> potions;

        // relic state
        RelicContainer relics;

        // card state
        CardContainer cards;

        GameState(Character character, std::uint64_t seed, int ascensionLevel);
        void initPlayer();

        // debug
        friend std::ostream &operator<<( std::ostream &output, const GameState &gs);
    };
}

#endif //COMBAT_STS_GAMESTATE_H

//
// Created by andian on 2023/8/3.
//

#ifndef COMBAT_STS_PLAYER_H
#define COMBAT_STS_PLAYER_H

#include <map>
#include "const/Character.h"
#include "const/PlayerStatus.h"

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

        // info
        int block = 0;
        int artifact = 0;
        int dexterity = 0;
        int focus = 0;
        int strength = 0;

        // special relic info
        int8_t happyFlowerCounter = 0;
        int8_t incenseBurnerCounter = 0;
        int8_t inkBottleCounter = 0;
        int8_t inserterCounter = 0;
        int8_t nunchakuCounter = 0;
        int8_t penNibCounter = 0;
        int8_t sundialCounter = 0;

        // special status info
        int8_t bomb[3]{0}; // bomb may have some problems
        int8_t panacheCounter = 0;

        std::map<PlayerStatus, short> statusMap;

        std::uint64_t statusBits0 = 0;
        std::uint32_t statusBits1 = 0;

        std::uint64_t relicBits0 = 0;
        std::uint64_t relicBits1 = 0;

        void setHasStatus(const PlayerStatus& ps, bool value);
        bool hasStatus(const PlayerStatus& ps);

        void buff(const PlayerStatus& ps, int info);

    };
}

#endif //COMBAT_STS_PLAYER_H

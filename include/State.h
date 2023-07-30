//
// Created by frvdec on 2023/7/30.
//

#ifndef COMBAT_STS_STATE_H
#define COMBAT_STS_STATE_H

#include <vector>
#include "base/Card.h"
#include "base/Relic.h"

namespace sts {
    class State {
    public:
        std::vector<CardId> cards;                   // card deck
        std::vector<RelicId> relics;                 // relic deck
        unsigned char potion[5], potion_size;      // potions
        unsigned char floor;                       // current floor
        short hp, money;                           // hp & money
    };
}

#endif //COMBAT_STS_STATE_H

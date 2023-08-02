//
// Created by frvdec on 2023/7/30.
//

#ifndef COMBAT_STS_CARD_H
#define COMBAT_STS_CARD_H

#include "const/Cards.h"

namespace StS {

    class Card {
    public:
        CardId id;
        bool upgrade;

        Card() { id = CardId::INVALID; upgrade = false; }
        explicit Card(const CardId& id, bool upgrade = false) {
            this->id = id;
            this->upgrade = upgrade;
        }
    };
}

#endif //COMBAT_STS_CARD_H

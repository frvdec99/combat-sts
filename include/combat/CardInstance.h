//
// Created by andian on 2023/8/15.
//

#ifndef COMBAT_STS_CARDINSTANCE_H
#define COMBAT_STS_CARDINSTANCE_H

#include "base/Card.h"

namespace StS {
    class CardInstance {
    public:
        CardId id = CardId::INVALID;
        std::int8_t info = 0;
        std::int8_t cost = 0;
        std::int8_t costForTurn = 0;
        std::int8_t uniqueId = -1;

        bool upgraded = false;
        bool freeToPlayOnce = false;
        bool retain = false;

        CardInstance() = default;
        explicit CardInstance(CardId id, bool upgraded = false);
        explicit CardInstance(const Card &card);

        void setUniqueId(int uniqueId);
    };
}

#endif //COMBAT_STS_CARDINSTANCE_H

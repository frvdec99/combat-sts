//
// Created by andian on 2023/8/2.
//

#ifndef COMBAT_STS_CARDCONTAINER_H
#define COMBAT_STS_CARDCONTAINER_H

#include <array>
#include <iostream>
#include "base/Card.h"

namespace StS {
    class CardContainer {
    public:
        static constexpr int MAX_SIZE = 96;
        int size = 0;
        std::array<Card, MAX_SIZE> cards;

        void add(Card card);

        friend std::ostream &operator<<(std::ostream &output, const CardContainer &cc);
    };
}

#endif //COMBAT_STS_CARDCONTAINER_H

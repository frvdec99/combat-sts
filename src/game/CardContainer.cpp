//
// Created by andian on 2023/8/2.
//

#include "game/CardContainer.h"

namespace StS {
    void CardContainer::add(Card card) {
        cards[size++] = card;
    }

    std::ostream &operator<<(std::ostream &output, const CardContainer &cc) {
        output << "Deck : ";
        for(int i = 0; i < cc.size; ++i) output << getCardName(cc.cards[i].id) << '/';
        output << std::endl;
        return output;
    }
}

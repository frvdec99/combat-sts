//
// Created by andian on 2023/8/15.
//

#include "combat/CardInstance.h"

namespace StS {
    CardInstance::CardInstance(CardId id, bool upgraded) : id(id), upgraded(upgraded) {
        cost = getEnergyCost(id, upgraded);
        costForTurn = cost;
    }

    CardInstance::CardInstance(const Card &card) : CardInstance(card.id, card.upgrade) {
        this->info = card.info;
    }

    void CardInstance::setUniqueId(int deckId) {
        this->uniqueId = deckId;
    }
}

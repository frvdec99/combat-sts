//
// Created by andian on 2023/8/16.
//

#include "combat/Actions.h"

namespace StS {
    Action Actions::MakeTempCardInHand(CardInstance card, int amount) {
        return {[=](CombatState &cs) {
            for (int i = 0; i < amount; ++i) {
                card.uniqueId = cs.cards.nextUniqueCardId++;
                bc.cards.notifyAddCardToCombat(c);
                bc.moveToHandHelper(c);
            }
        }};
    }
}
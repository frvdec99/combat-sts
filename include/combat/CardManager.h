//
// Created by andian on 2023/8/4.
//

#ifndef COMBAT_STS_CARDMANAGER_H
#define COMBAT_STS_CARDMANAGER_H

#include <array>
#include <vector>
#include "const/Cards.h"
#include "combat/CardInstance.h"
#include "combat/CombatState.h"

namespace StS {

    class GameState;

    class CardManager {
    public:
        static constexpr int MAX_HAND_SIZE = 10;

        int nextUniqueCardId;

        int cardsInHand = 0;
        std::array<CardInstance, MAX_HAND_SIZE> hand;

        std::vector<CardInstance> drawPile;
        std::vector<CardInstance> discardPile;
        std::vector<CardInstance> exhaustPile;

        void init(const GameState &gs, CombatState &cs);
        void createDeckCardInstanceInDrawPile(const Card &card, int deckIdx, int drawIdx);

    };
}

#endif //COMBAT_STS_CARDMANAGER_H

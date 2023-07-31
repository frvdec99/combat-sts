//
// Created by andian on 2023/7/31.
//

#ifndef COMBAT_STS_COMBATCONTEXT_H
#define COMBAT_STS_COMBATCONTEXT_H

#include <deque>
#include "GameState.h"

namespace sts {
    class CombatState {
    public:
        std::deque<Card> drawOrder;
        std::deque<Card> foldOrder;
        CardId current[10];
        unsigned short turn;
    };
}


#endif //COMBAT_STS_COMBATCONTEXT_H

//
// Created by andian on 2023/8/15.
//

#ifndef COMBAT_STS_ACTIONS_H
#define COMBAT_STS_ACTIONS_H

#include <functional>
#include "combat/CardInstance.h"

namespace StS {
    class CombatState;
    typedef std::function<void(CombatState& cs)> Action;

    class Actions {
    public:
        static Action MakeTempCardInHand(CardInstance card, int amount)
    };
}

#endif //COMBAT_STS_ACTIONS_H

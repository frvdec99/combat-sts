//
// Created by andian on 2023/8/15.
//

#ifndef COMBAT_STS_ACTIONS_H
#define COMBAT_STS_ACTIONS_H

#include <functional>

namespace StS {
    class CombatState;
    typedef std::function<void(CombatState& cs)> Action;

    class Actions {
    public:

    };
}

#endif //COMBAT_STS_ACTIONS_H

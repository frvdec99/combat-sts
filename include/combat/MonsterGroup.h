//
// Created by andian on 2023/8/2.
//

#ifndef COMBAT_STS_MONSTERGROUP_H
#define COMBAT_STS_MONSTERGROUP_H

#include <array>
#include "base/Monster.h"

namespace StS {
    class MonsterGroup {
        int monsterCount = 0;
        std::array<Monster, 5> arr;
    };
}

#endif //COMBAT_STS_MONSTERGROUP_H

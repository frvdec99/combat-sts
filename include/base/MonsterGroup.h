//
// Created by andian on 2023/7/31.
//

#ifndef COMBAT_STS_MONSTERGROUP_H
#define COMBAT_STS_MONSTERGROUP_H

#include <deque>
#include <cassert>
#include "base/Monster.h"

namespace sts {
    enum class MonsterGroupId : unsigned short {
        Invalid = 0,
        TwoLouses,
        SmallSlimes,
    };

    static constexpr const char* monsterGroupEnumStrings[] = {
            "Invalid",
            "2 Louses",
            "Small Slimes",
    };

    class MonsterGroup {
    public:
        std::deque<Monster> monsterGroup;
        MonsterGroup(MonsterId id) {
            monsterGroup = { Monster(id) };
        }

        MonsterGroup(MonsterGroupId id, unsigned short* info = nullptr, unsigned short infoSize = 0) {
            switch(id) {
                case MonsterGroupId::TwoLouses:
                    assert(infoSize == 2);
                    monsterGroup = { Monster(MonsterId::Louse, info[0]), Monster(MonsterId::Louse, info[1]) };
                    break;
                case MonsterGroupId::SmallSlimes:
                    assert(infoSize == 2);
                    monsterGroup = { Monster(MonsterId::Slime, info[0]), Monster(MonsterId::Slime, info[1]) };
                    break;
                default:
                    printf("MonsterGroupId Invalid!\n");
            }
        }
    };
}

#endif //COMBAT_STS_MONSTERGROUP_H

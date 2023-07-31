//
// Created by frvdec on 2023/7/30.
//

#ifndef COMBAT_STS_MONSTER_H
#define COMBAT_STS_MONSTER_H

namespace sts {
    enum class MonsterId : unsigned short {
        INVALID = 0,
        JawWorm,
        Cultist,
        Louse,
        Slime,
    };

    static constexpr const char* monsterEnumStrings[] = {
            "Invalid",
            "Jaw Worm",
            "Cultist",
            "Louse",
            "Slime",
    };

    class Monster {
    public:
        MonsterId id;
        unsigned short info;

        Monster() { id = MonsterId::INVALID; info = 0; }
        explicit Monster(MonsterId id, unsigned short info = 0){
            this->id = id;
            this->info = info;
        }
    };
}

#endif //COMBAT_STS_MONSTER_H

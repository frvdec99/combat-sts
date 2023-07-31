//
// Created by andian on 2023/7/31.
//

#ifndef COMBAT_STS_EFFECT_H
#define COMBAT_STS_EFFECT_H

namespace sts {
    enum class BuffId : unsigned short {
        Invalid = 0,
        Weakness,
        Frail,
        Strength,
        Ritual, // Only for cultist in game
        Curl,   // Only for louse in game
    };

    class Buff {
    public:
        BuffId id;
        unsigned short info;
        Buff() { id = BuffId::Invalid; info = 0; }
        Buff(BuffId id, unsigned short info) {
            this->id = id;
            this->info = info;
        }
    };
}

#endif //COMBAT_STS_EFFECT_H

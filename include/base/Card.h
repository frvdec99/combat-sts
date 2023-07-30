//
// Created by frvdec on 2023/7/30.
//

#ifndef COMBAT_STS_CARD_H
#define COMBAT_STS_CARD_H

namespace sts {
    enum class CardId : unsigned short {
        INVALID = 0,
        STRIKE,
        DEFEND,
        NEUTRALIZE,
        SURVIVOR,
        ASCENDERSBANE,
    };

    static constexpr const char* cardEnumStrings[] = {
            "Invalid",
            "Strike",
            "Defend",
            "Neutralize",
            "Survivor",
            "AscendersBane",
    };
}

#endif //COMBAT_STS_CARD_H

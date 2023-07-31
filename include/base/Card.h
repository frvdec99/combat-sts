//
// Created by frvdec on 2023/7/30.
//

#ifndef COMBAT_STS_CARD_H
#define COMBAT_STS_CARD_H

namespace sts {
    enum class CardId : unsigned short {
        Invalid = 0,
        Strike,
        Defend,
        Neutralize,
        Survivor,
        AscendersBane,
    };

    static constexpr const char* cardEnumStrings[] = {
            "Invalid",
            "Strike",
            "Defend",
            "Neutralize",
            "Survivor",
            "AscendersBane",
    };

    class Card {
    public:
        CardId id;

        Card() { id = CardId::Invalid; }
        explicit Card(CardId id) { this->id = id; }
    };
}

#endif //COMBAT_STS_CARD_H

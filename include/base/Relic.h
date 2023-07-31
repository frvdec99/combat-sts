//
// Created by frvdec on 2023/7/31.
//

#ifndef COMBAT_STS_RELIC_H
#define COMBAT_STS_RELIC_H

namespace sts {
    enum class RelicId : unsigned short {
        Invalid = 0,
        RingOfTheSnake,
    };

    static constexpr const char* RelicEnumStrings[] = {
            "Invalid",
            "RingOfTheSnake",
    };

    class Relic {
    public:
        RelicId id;
        unsigned short count;

        Relic() { id = RelicId::Invalid; count = 0; }
        explicit Relic(RelicId id, unsigned short count = 0) {
            this->id = id;
            this->count = count;
        }
    };
}

#endif //COMBAT_STS_RELIC_H

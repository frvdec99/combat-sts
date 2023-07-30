//
// Created by frvdec on 2023/7/31.
//

#ifndef COMBAT_STS_RELIC_H
#define COMBAT_STS_RELIC_H

namespace sts {
    enum class RelicId : unsigned short {
        INVALID = 0,
        RINGOFTHESNAKE,
    };

    static constexpr const char* RelicEnumStrings[] = {
            "RingOfTheSnake",
    };
}

#endif //COMBAT_STS_RELIC_H

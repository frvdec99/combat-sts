//
// Created by andian on 2023/8/2.
//

#ifndef COMBAT_STS_RELICCONTAINER_H
#define COMBAT_STS_RELICCONTAINER_H

#include <vector>
#include <iostream>
#include "base/Relic.h"

namespace StS {
    class RelicContainer {
    public:
        std::vector<Relic> relics;

        std::uint64_t relicBits0 = 0;
        std::uint64_t relicBits1 = 0;
        std::uint64_t relicBits2 = 0;

        void setHashRelic(const Relic& relic, bool value);
        void add(const Relic& relic);

        friend std::ostream &operator<<(std::ostream &output, const RelicContainer &rc);
    };
}

#endif //COMBAT_STS_RELICCONTAINER_H

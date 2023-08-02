//
// Created by andian on 2023/8/2.
//
#include "game/RelicContainer.h"

namespace StS {
    void RelicContainer::setHashRelic(const Relic &relic, bool value) {
        const int idx = static_cast<int>(relic.id);
        if (value) {
            if (idx < 64) relicBits0 |= 1ULL << idx;
            else if (idx < 128) relicBits1 |= 1ULL << (idx - 64);
            else relicBits2 |= 1ULL << (idx - 128);
        } else {
            if (idx < 64) relicBits0 &= ~(1ULL << idx);
            else if (idx < 128) relicBits1 &= ~(1ULL << (idx - 64));
            else relicBits2 &= ~(1ULL << (idx - 128));
        }
    }
    void RelicContainer::add(const Relic& relic) {
        setHashRelic(relic, true);
        relics.push_back(relic);
    }

    std::ostream &operator<<(std::ostream &output, const RelicContainer &rc) {
        output << "Relic : ";
        for(auto & r : rc.relics) output << getRelicName(r.id) << '/';
        output << std::endl;
        return output;
    }
}



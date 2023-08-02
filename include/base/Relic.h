//
// Created by frvdec on 2023/7/31.
//

#ifndef COMBAT_STS_RELIC_H
#define COMBAT_STS_RELIC_H

#include "const/Relics.h"

namespace StS {
    class Relic {
    public:
        RelicId id;
        int info;
        Relic() { id = RelicId::INVALID; info = 0; }
        explicit Relic(const RelicId& id, int info = 0) {
            this->id = id;
            this->info = info;
        }
    };
}

#endif //COMBAT_STS_RELIC_H

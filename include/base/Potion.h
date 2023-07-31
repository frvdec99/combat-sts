//
// Created by andian on 2023/7/31.
//

#ifndef COMBAT_STS_POTION_H
#define COMBAT_STS_POTION_H

namespace sts {
    enum class PotionId : unsigned char {
        Invalid = 0,
        Empty,
    };

    static constexpr const char* PotionEnumStrings[] = {
            "Invalid",
            "Empty",
    };

    class Potion {
    public:
        PotionId id;

        Potion() { id = PotionId::Invalid; }
        explicit Potion(PotionId id) { this->id = id; }
    };
}

#endif //COMBAT_STS_POTION_H

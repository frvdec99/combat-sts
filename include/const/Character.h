//
// Created by andian on 2023/8/2.
//

#ifndef COMBAT_STS_CHARACTER_H
#define COMBAT_STS_CHARACTER_H

#include <cstdint>

namespace StS {
    enum class Character : std::uint8_t {
        IRONCLAD=0,
        SILENT,
        DEFECT,
        WATCHER,
        INVALID,
    };

    static constexpr const char* characterNames[] = {"Ironclad","Silent","Defect","Watcher"};
    static constexpr const char* characterEnumNames[] = {"IRONCLAD","SILENT","DEFECT","WATCHER"};

    static const char* getCharacterName(const Character& character) {
        return characterNames[static_cast<int>(character)];
    }
}

#endif //COMBAT_STS_CHARACTER_H

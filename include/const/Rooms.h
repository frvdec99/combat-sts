//
// Created by andian on 2023/8/15.
//

#ifndef COMBAT_STS_ROOM_H
#define COMBAT_STS_ROOM_H

#include <cstdint>

namespace StS {
    enum class Room : std::uint8_t {
        SHOP = 0,
        REST,
        EVENT,
        ELITE,
        MONSTER,
        TREASURE,
        BOSS,
        BOSS_TREASURE,
        NONE,
        INVALID,
    };

    static constexpr const char* roomStrings[] = {
            "SHOP",
            "REST",
            "EVENT",
            "ELITE",
            "MONSTER",
            "TREASURE",
            "BOSS",
            "BOSS_TREASURE",
            "NONE",
            "INVALID"
    };

    constexpr char getRoomSymbol(Room room) {
        switch(room) {
            case Room::NONE: return 'N';
            case Room::EVENT: return '?';
            case Room::MONSTER: return 'M';
            case Room::ELITE: return 'E';
            case Room::REST: return 'R';
            case Room::SHOP: return '$';
            case Room::TREASURE: return 'T';
            case Room::BOSS: return 'B';
            default: return 'I';
        }
    }
}

#endif //COMBAT_STS_ROOM_H

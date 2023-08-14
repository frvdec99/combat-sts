//
// Created by andian on 2023/8/14.
//

#include "combat/Player.h"

namespace StS {

    void Player::setHasStatus(const PlayerStatus &ps, bool value) {
        int idx = static_cast<int>(ps);
        if (value) {
            if (idx < 64) statusBits0 |= 1ULL << idx;
            else statusBits1 |= 1ULL << (idx - 64);
        }
        else {
            if (idx < 64) statusBits0 &= ~(1ULL << idx);
            else statusBits1 &= ~(1ULL << (idx-64));
        }
    }

    bool Player::hasStatus(const PlayerStatus &ps) {
        int idx = static_cast<int>(ps);
        if(idx < 64) return (statusBits0 >> idx) & 1ULL;
        else return (statusBits1 >> (idx - 64)) & 1ULL;
    }

    void Player::buff(const PlayerStatus &ps, int info) {
        switch(ps) {
            case PlayerStatus::ARTIFACT:
                artifact += info;
                return;
            case PlayerStatus::DEXTERITY:
                dexterity += info;
                return;
            case PlayerStatus::FOCUS:
                focus += info;
                return;
            case PlayerStatus::STRENGTH:
                strength += info;
                return;
            case PlayerStatus::THE_BOMB:
                bomb[2] += info;
                return;
            case PlayerStatus::PANACHE:
                if(!hasStatus(PlayerStatus::PANACHE)){
                    panacheCounter = 5;
                    setHasStatus(PlayerStatus::PANACHE, true);
                    statusMap[PlayerStatus::PANACHE] = info;
                }
                else statusMap[PlayerStatus::PANACHE] += info;
                return;
            default:
                if(!hasStatus(ps)) {
                    setHasStatus(ps, true);
                    statusMap[ps] = info;
                }
                else statusMap[ps] += info;
        }
        return;
    }
}
//
// Created by andian on 2023/8/14.
//

#include "combat/Player.h"

namespace StS {

    void Player::setHasRelics(const RelicId &r, bool value) {
        int idx = static_cast<int>(r);
        if (value) {
            if (idx < 64) relicBits0 |= 1ULL << idx;
            else relicBits1 |= 1ULL << (idx-64));
        }
        else {
            if (idx < 64) relicBits0 &= ~(1ULL << idx);
            else relicBits1 &= ~(1ULL << (idx-64));
        }
    }

    bool Player::hasRelics(const RelicId &r) {
        int idx = static_cast<int>(r);
        if(idx < 64) return (relicBits0 >> idx) & 1ULL;
        else return (relicBits1 >> (idx - 64)) & 1ULL;
    }

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

    void Player::debuff(const PlayerStatus &ps, int info) {
        if(ps == PlayerStatus::WEAK && hasRelics(RelicId::GINGER)) return;
        if(ps == PlayerStatus::FRAIL && hasRelics(RelicId::TURNIP)) return;
        if(hasStatus(PlayerStatus::ARTIFACT)) decreaseStatus(PlayerStatus::ARTIFACT, 1);

        switch(ps) {
            // TODO draw-reduction
            case PlayerStatus::STRENGTH:
                decreaseStatus(PlayerStatus::STRENGTH, info);
                return;
            case PlayerStatus::DEXTERITY:
                decreaseStatus(PlayerStatus::DEXTERITY, info);
                return;
            case PlayerStatus::FOCUS:
                decreaseStatus(PlayerStatus::FOCUS, info);
                break;

            case PlayerStatus::CONFUSED:
            case PlayerStatus::HEX:
                setHasStatus(ps, true);
                break;

            default:
                if(hasStatus(ps)) statusMap[ps] += info;
                else{
                    setHasStatus(ps, true);
                    statusMap[ps] += info;
                }
                break;
        }
    }

    void Player::decreaseStatus(const PlayerStatus &ps, int info) {
        switch (ps) {
            case PlayerStatus::ARTIFACT:
                artifact -= info;
                break;

            case PlayerStatus::DEXTERITY:
                dexterity -= info;
                break;

            case PlayerStatus::FOCUS:
                focus -= info;
                break;

            case PlayerStatus::STRENGTH:
                strength -= info;
                break;

            default:
                statusMap.at(ps) -= info;
                if (!statusMap.at(ps)) setHasStatus(ps, false);
        }
    }

    void Player::heal(int info) {
        if(hasRelics(RelicId::MARK_OF_THE_BLOOM)) return;
        if(hasRelics(RelicId::MAGIC_FLOWER)) info = info * 3 / 2;

        bool wasBloodied = curHp <= maxHp/2;
        curHp = std::min(static_cast<int>(maxHp), curHp + info);

        if (hasRelics(RelicId::RED_SKULL) && wasBloodied && curHp > maxHp/2 ) debuff(PS::STRENGTH, 3);
    }

    void Player::gainEnergy(int info) {
        energy += info;
    }
}
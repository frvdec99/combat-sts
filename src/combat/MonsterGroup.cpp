//
// Created by andian on 2023/8/3.
//
#include "combat/MonsterGroup.h"

namespace StS {
    void MonsterGroup::init(CombatState &cs, const MonsterEncounter &encounter) {
        createMonsters(cs, encounter);
//        for (int i = 0; i < monsterCount; ++i) {
//            if (arr[i].idx != -1) {
//                arr[i].rollMove(bc);
//            }
//        }
//
//        for (int i = 0; i < monsterCount; ++i) {
//            if (arr[i].idx != -1) {
//                arr[i].preBattleAction(bc);
//            }
//        }
    }

    void MonsterGroup::createMonster(CombatState &cs, const MonsterId& id) {
        arr[monsterCount].init(cs, id);
        monsterCount++;
    }

    void MonsterGroup::createMonsters(CombatState &cs, const MonsterEncounter &encounter) {
        switch (encounter) {
            case MonsterEncounter::CULTIST:
                createMonster(cs, MonsterId::CULTIST);
                break;
            case MonsterEncounter::JAW_WORM:
                createMonster(cs, MonsterId::JAW_WORM);
                break;
            case MonsterEncounter::SMALL_SLIMES:
                if (cs.miscRng.randomBoolean()) {
                    createMonster(cs, MonsterId::SPIKE_SLIME_S);
                    createMonster(cs, MonsterId::ACID_SLIME_M);
                } else {
                    createMonster(cs, MonsterId::ACID_SLIME_S);
                    createMonster(cs, MonsterId::SPIKE_SLIME_M);
                }
                break;
            case MonsterEncounter::TWO_LOUSE: {
                createMonster(cs, getLouse(cs.miscRng));
                createMonster(cs, getLouse(cs.miscRng));
                break;
            }
            default:
                break;
        }
    }

    MonsterId MonsterGroup::getLouse(Random &rng) {
        if (rng.randomBoolean()) return MonsterId::RED_LOUSE;
        else return MonsterId::GREEN_LOUSE;
    }
}


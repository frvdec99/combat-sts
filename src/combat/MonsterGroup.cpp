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
            case MonsterEncounter::SMALL_SLIMES:

            case MonsterEncounter::CULTIST:
                createMonster(cs, MonsterId::CULTIST);
                break;
            case MonsterEncounter::JAW_WORM:
                createMonster(cs, MonsterId::JAW_WORM);
                break;
            default:
                break;
        }
    }
}


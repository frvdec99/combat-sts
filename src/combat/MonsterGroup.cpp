//
// Created by andian on 2023/8/3.
//
#include "combat/MonsterGroup.h"

namespace StS {
    void MonsterGroup::createMonster(Random& monsterHpRng, int ascension, const MonsterId& id) {
        arr[monsterCount].init(monsterHpRng, ascension, id);
        monsterCount++;
    }

    void MonsterGroup::createMonsters(Random& monsterHpRng, Random& miscRng, int ascension, const MonsterEncounter &encounter) {
        switch (encounter) {
            case MonsterEncounter::CULTIST:
                createMonster(monsterHpRng, ascension, MonsterId::CULTIST);
                break;
            case MonsterEncounter::JAW_WORM:
                createMonster(monsterHpRng, ascension, MonsterId::JAW_WORM);
                break;
            case MonsterEncounter::SMALL_SLIMES:
                if (miscRng.randomBoolean()) {
                    createMonster(monsterHpRng, ascension, MonsterId::SPIKE_SLIME_S);
                    createMonster(monsterHpRng, ascension, MonsterId::ACID_SLIME_M);
                } else {
                    createMonster(monsterHpRng, ascension, MonsterId::ACID_SLIME_S);
                    createMonster(monsterHpRng, ascension, MonsterId::SPIKE_SLIME_M);
                }
                break;
            case MonsterEncounter::TWO_LOUSE: {
                createMonster(monsterHpRng, ascension, getLouse(miscRng));
                createMonster(monsterHpRng, ascension, getLouse(miscRng));
                break;
            }
            default:
                break;
        }
    }

    MonsterId MonsterGroup::getLouse(Random &miscRng) {
        if (miscRng.randomBoolean()) return MonsterId::RED_LOUSE;
        else return MonsterId::GREEN_LOUSE;
    }

    void MonsterGroup::init(Random &monsterHpRng, Random &miscRng, int ascension, const MonsterEncounter &encounter) {
        createMonsters(monsterHpRng, miscRng, ascension, encounter);
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
}


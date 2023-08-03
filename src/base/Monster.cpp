//
// Created by andian on 2023/8/3.
//
#include "base/Monster.h"

namespace StS {

    void Monster::setRandomHp(Random &rng, bool ascension) {
        auto hpRange = monsterHpRange[static_cast<int>(id)][ascension ? 1 : 0];
        curHp = rng.random(hpRange[0], hpRange[1]);
        maxHp = curHp;
    }

    void Monster::initHp(Random &rng, const int ascension) {
        switch (id) {
            case MonsterId::INVALID:
                assert(false);
                break;

            case MonsterId::ORB_WALKER:
                rng.random(90, 96);// first call is discarded by game
                setRandomHp(rng, ascension >= 7);
                break;

            case MonsterId::ACID_SLIME_L:
            case MonsterId::ACID_SLIME_M:
            case MonsterId::ACID_SLIME_S:
            case MonsterId::BEAR:
            case MonsterId::BLUE_SLAVER:
            case MonsterId::BYRD:
            case MonsterId::CENTURION:
            case MonsterId::CHOSEN:
            case MonsterId::CULTIST:
            case MonsterId::DARKLING:
            case MonsterId::EXPLODER:
            case MonsterId::FAT_GREMLIN:
            case MonsterId::FUNGI_BEAST:
            case MonsterId::GREEN_LOUSE:
            case MonsterId::GREMLIN_WIZARD:
            case MonsterId::JAW_WORM:
            case MonsterId::LOOTER:
            case MonsterId::MAD_GREMLIN:
            case MonsterId::MUGGER:
            case MonsterId::MYSTIC:
            case MonsterId::POINTY:
            case MonsterId::RED_LOUSE:
            case MonsterId::RED_SLAVER:
            case MonsterId::REPULSOR:
            case MonsterId::ROMEO:
            case MonsterId::SHELLED_PARASITE:
            case MonsterId::SHIELD_GREMLIN:
            case MonsterId::SNAKE_PLANT:
            case MonsterId::SNEAKY_GREMLIN:
            case MonsterId::SNECKO:
            case MonsterId::SPIKER:
            case MonsterId::SPIKE_SLIME_L:
            case MonsterId::SPIKE_SLIME_M:
            case MonsterId::SPIKE_SLIME_S:
            case MonsterId::SPIRE_GROWTH:
            case MonsterId::WRITHING_MASS:
                setRandomHp(rng, ascension >= 7);
                break;

            case MonsterId::AWAKENED_ONE:
            case MonsterId::BRONZE_AUTOMATON:
            case MonsterId::CORRUPT_HEART:
            case MonsterId::DECA:
            case MonsterId::DONU:
            case MonsterId::HEXAGHOST:
            case MonsterId::SLIME_BOSS:
            case MonsterId::THE_CHAMP:
            case MonsterId::THE_COLLECTOR:
            case MonsterId::THE_GUARDIAN:
            case MonsterId::TIME_EATER:
            case MonsterId::TORCH_HEAD:
                setRandomHp(rng, ascension >= 9);
                break;

            case MonsterId::BOOK_OF_STABBING:
            case MonsterId::DAGGER:
            case MonsterId::GIANT_HEAD:
            case MonsterId::GREMLIN_LEADER:
            case MonsterId::GREMLIN_NOB:
            case MonsterId::LAGAVULIN:
            case MonsterId::NEMESIS:
            case MonsterId::SENTRY:
            case MonsterId::SPIRE_SHIELD:
            case MonsterId::SPIRE_SPEAR:
                setRandomHp(rng, ascension >= 8);
                break;

            case MonsterId::REPTOMANCER:
                rng.random(180, 190);
                setRandomHp(rng, ascension >= 8);
                break;

            case MonsterId::BRONZE_ORB:
                rng.random(52, 58);
                setRandomHp(rng, ascension >= 9);
                break;

            case MonsterId::TASKMASTER:
                rng.random(54, 60);
                setRandomHp(rng, ascension >= 8);
                break;

            case MonsterId::SPHERIC_GUARDIAN:
            case MonsterId::THE_MAW:
            case MonsterId::TRANSIENT:
                curHp = monsterHpRange[static_cast<int>(id)][0][0];
                maxHp = curHp;
                break;

            default:
                assert(false);
        }
    }

    void Monster::init(CombatState &cs, const MonsterId &monster) {
        this->id = monster;
        initHp(cs.monsterHpRng, cs.ascension);
    }
}


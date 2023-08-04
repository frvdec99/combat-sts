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

    void Monster::init(Random& monsterHpRng, int ascension, const MonsterId &monster) {
        this->id = monster;
        initHp(monsterHpRng, ascension);
    }

    void Monster::rollMove(Random &aiRng, int ascension) {
        const auto move = getMoveForRoll(aiRng, ascension);
        setMove(move);
    }

    void Monster::setMove(MMID moveId) {
        moveHistory[1] = moveHistory[0];
        moveHistory[0] = moveId;
    }

    MMID Monster::getMoveForRoll(Random& aiRng, int ascension) {
        // only for random move
        int roll = aiRng.random(99);
        const bool asc17 = ascension >= 17;
        const bool asc18 = ascension >= 18;
        const bool asc19 = ascension >= 19;
        switch(id) {
            case MonsterId::ACID_SLIME_S: {
                if (!asc17 && aiRng.randomBoolean()) return (MMID::ACID_SLIME_S_TACKLE);
                else return (MMID::ACID_SLIME_S_LICK);
            }
            case MonsterId::ACID_SLIME_M: {
                // consider split
                if (asc17) {
                    // START ASCENSION 17
                    if (roll < 40) {
                        if (lastTwoMoves(MMID::ACID_SLIME_M_CORROSIVE_SPIT)) {
                            if (aiRng.randomBoolean()) return (MMID::ACID_SLIME_M_TACKLE);
                            else return (MMID::ACID_SLIME_M_LICK);
                        } else return (MMID::ACID_SLIME_M_CORROSIVE_SPIT);

                    } else if (roll < 80) {
                        if (lastTwoMoves(MMID::ACID_SLIME_M_TACKLE)) {
                            if (aiRng.randomBoolean(0.5f)) return (MMID::ACID_SLIME_M_CORROSIVE_SPIT);
                            else return (MMID::ACID_SLIME_M_LICK);
                        } else return (MMID::ACID_SLIME_M_TACKLE);

                    } else if (lastMove(MMID::ACID_SLIME_M_LICK)) {
                        if (aiRng.randomBoolean(0.4F)) return (MMID::ACID_SLIME_M_CORROSIVE_SPIT);
                        else return (MMID::ACID_SLIME_M_TACKLE);
                    } else return (MMID::ACID_SLIME_M_LICK);
                    // END ASCENSION 17

                } else if (roll < 30) {
                    if (lastTwoMoves(MMID::ACID_SLIME_M_CORROSIVE_SPIT)) {
                        if (aiRng.randomBoolean()) return (MMID::ACID_SLIME_M_TACKLE);
                        else return (MMID::ACID_SLIME_M_LICK);
                    } else return (MMID::ACID_SLIME_M_CORROSIVE_SPIT);

                } else if (roll < 70) {
                    if (lastMove(MMID::ACID_SLIME_M_TACKLE)) {
                        if (aiRng.randomBoolean(0.4f)) return (MMID::ACID_SLIME_M_CORROSIVE_SPIT);
                        else return (MMID::ACID_SLIME_M_LICK);
                    } else return (MMID::ACID_SLIME_M_TACKLE);

                } else if (lastTwoMoves(MMID::ACID_SLIME_M_LICK)) {
                    if (aiRng.randomBoolean(0.4F)) return (MMID::ACID_SLIME_M_CORROSIVE_SPIT);
                    else return (MMID::ACID_SLIME_M_TACKLE);
                } else return (MMID::ACID_SLIME_M_LICK);
            }
            case MonsterId::SPIKE_SLIME_S: {
                return (MMID::SPIKE_SLIME_S_TACKLE);
            }
            case MonsterId::SPIKE_SLIME_M: {
                if (roll < 30) {
                    if (lastTwoMoves(MMID::SPIKE_SLIME_M_FLAME_TACKLE)) return (MMID::SPIKE_SLIME_M_LICK);
                    else return (MMID::SPIKE_SLIME_M_FLAME_TACKLE);

                } else if (lastTwoMoves(MMID::SPIKE_SLIME_M_LICK) || (asc17 && lastMove(MMID::SPIKE_SLIME_M_LICK))) {
                    return (MMID::SPIKE_SLIME_M_FLAME_TACKLE);
                } else return (MMID::SPIKE_SLIME_M_LICK);
            }
            case MonsterId::CULTIST: {
                if (firstTurn()) return (MMID::CULTIST_INCANTATION);
                else return (MMID::CULTIST_DARK_STRIKE);
            }
            case MonsterId::JAW_WORM: {
                if (firstTurn()) return (MMID::JAW_WORM_CHOMP);

                if (roll < 25) {
                    if (lastMove(MMID::JAW_WORM_CHOMP)) {
                        if (aiRng.randomBoolean(0.5625f)) return (MMID::JAW_WORM_BELLOW);
                        else return (MMID::JAW_WORM_THRASH);
                    } else return (MMID::JAW_WORM_CHOMP);

                } else if (roll < 55) {
                    if (lastTwoMoves(MMID::JAW_WORM_THRASH)) {
                        if (aiRng.randomBoolean(0.357f)) return (MMID::JAW_WORM_CHOMP);
                        else return (MMID::JAW_WORM_BELLOW);
                    } else return (MMID::JAW_WORM_THRASH);

                } else if (lastMove(MMID::JAW_WORM_BELLOW)) {
                    if (aiRng.randomBoolean(0.416f)) return (MMID::JAW_WORM_CHOMP);
                    else return (MMID::JAW_WORM_THRASH);
                } else return (MMID::JAW_WORM_BELLOW);
            }
            case MonsterId::RED_LOUSE: {
                if (roll < 25) {
                    if (lastMove(MMID::RED_LOUSE_GROW) && (asc17 || lastTwoMoves(MMID::RED_LOUSE_GROW))) return (MMID::RED_LOUSE_BITE);
                    else  return (MMID::RED_LOUSE_GROW);

                } else if (lastTwoMoves(MMID::RED_LOUSE_BITE)) return (MMID::RED_LOUSE_GROW);
                else return (MMID::RED_LOUSE_BITE);
            }
            case MonsterId::GREEN_LOUSE: {
                if (roll < 25) {
                    if (lastMove(MMID::GREEN_LOUSE_SPIT_WEB) && (asc17 || lastTwoMoves(MMID::GREEN_LOUSE_SPIT_WEB))) return (MMID::GREEN_LOUSE_BITE);
                    else  return (MMID::GREEN_LOUSE_SPIT_WEB);

                } else if (lastTwoMoves(MMID::GREEN_LOUSE_BITE)) return (MMID::GREEN_LOUSE_SPIT_WEB);
                else return (MMID::GREEN_LOUSE_BITE);
            }

            default:
                break;
        }
        assert(false);
        return MMID::INVALID;
    }

    bool Monster::lastMove(MMID moveId) {
        return moveHistory[0] == moveId;
    }

    bool Monster::lastTwoMoves(MMID moveId) {
        return moveHistory[0] == moveId && moveHistory[1] == moveId;
    }

    bool Monster::firstTurn() {
        return lastMove(MMID::INVALID);
    }

    void Monster::preCombatAction(Random &monsterHpRng, int ascension) {
        const bool asc4 = ascension >= 4;
        const bool asc7 = ascension >= 7;
        const bool asc9 = ascension >= 9;
        const bool asc17 = ascension >= 17;
        const bool asc18 = ascension >= 18;
        const bool asc19 = ascension >= 19;

        switch (id) {
            case MonsterId::GREEN_LOUSE:
            case MonsterId::RED_LOUSE: {
                int curlUpMin;
                int curlUpMax;
                if (asc17) { curlUpMin = 9; curlUpMax = 12;}
                else if (asc7) { curlUpMin = 4; curlUpMax = 8;}
                else { curlUpMin = 3; curlUpMax = 7; }
                buff(MS::CURL_UP, monsterHpRng.random(curlUpMin, curlUpMax));
                break;
            }
            default:
                assert(false);
                break;
        }
    }

    void Monster::setHasStatus(MS status, bool value) {
        if (value) statusBits |= (1ULL << (int) status);
        else statusBits &= ~(1ULL << (int) status);
    }

    void Monster::buff(MS status, int info) {
        switch(status) {
            case MS::CURL_UP:
                setHasStatus(status, true);
                statusInfo += info;
            default:
                break;
        }
    }
}


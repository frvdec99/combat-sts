//
// Created by andian on 2023/8/3.
//

#include "combat/CombatState.h"

namespace StS {

    void CombatState::init(const GameState &gs, const MonsterEncounter &monsterInit) {
        seed = gs.seed;
        ascension = gs.ascension;
        floorNumber = gs.floorNumber;

        auto startRandom = Random(seed + floorNumber);
        aiRng = startRandom;
        monsterHpRng = startRandom;
        shuffleRng = startRandom;
        cardRng = startRandom;
        miscRng = gs.miscRng;

        potionCount = gs.potionCount;
        potionCapacity = gs.potionCapacity;
        potions = gs.potions;

        player.character = gs.character;
        player.gold = gs.gold;
        player.maxHp = gs.maxHp;
        player.curHp = gs.curHp;
        player.cardDrawPerTurn = 5;

        monsters.init(monsterHpRng, miscRng, aiRng, ascension, monsterInit);
        // TODO fire elite

    }

    void CombatState::initRelics(const GameState &gs) {
        player.relicBits0 = gs.relics.relicBits0;
        player.relicBits1 = gs.relics.relicBits1;

        std::vector<RelicId> startPreDraw;
        std::vector<RelicId> start;
        std::vector<RelicId> turnStartPostDraw;

        auto &p = player;
        for (const auto &r : gs.relics.relics) {
            switch (r.id) {
                case RelicId::HOLY_WATER:
                case RelicId::NINJA_SCROLL:
                case RelicId::PURE_WATER:
                case RelicId::TOOLBOX:
                    startPreDraw.push_back(r.id);
                    break;

                case RelicId::BAG_OF_MARBLES:
                case RelicId::BAG_OF_PREPARATION:
                case RelicId::CLOCKWORK_SOUVENIR:
                case RelicId::GREMLIN_VISAGE:
                case RelicId::RED_MASK:
                case RelicId::RING_OF_THE_SNAKE:
                case RelicId::TWISTED_FUNNEL:
                    start.push_back(r.id);
                    break;

                case RelicId::MARK_OF_PAIN:
                    ++p.energyPerTurn;
                    start.push_back(r.id);
                    break;

                case RelicId::GAMBLING_CHIP:
                case RelicId::WARPED_TONGS:
                    turnStartPostDraw.push_back(r.id);
                    break;

                case RelicId::AKABEKO:
                    p.buff(PlayerStatus::VIGOR, 8);
                    break;

                default:
                    break;
            }
        }
    }
}

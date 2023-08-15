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

                case RelicId::BRIMSTONE:
                    p.buff(PlayerStatus::STRENGTH, 2);
                    for (int i = 0; i < monsters.monsterCount; ++i) {
                        Monster &m = monsters.arr[i];
                        if (m.isTargetable()) m.buff(MS::STRENGTH, 1);
                    }
                    break;

                case RelicId::RUNIC_DOME:
                case RelicId::ECTOPLASM:
                case RelicId::SOZU:
                case RelicId::VELVET_CHOKER:
                case RelicId::BUSTED_CROWN:
                case RelicId::COFFEE_DRIPPER:
                case RelicId::CURSED_KEY:
                case RelicId::FUSION_HAMMER:
                    p.energyPerTurn++;
                    break;

                case RelicId::ENCHIRIDION: {
                    // TODO CardPool
                    break;
                }

                case RelicId::HAPPY_FLOWER:
                    p.happyFlowerCounter = r.info + 1;
                    if (p.happyFlowerCounter == 3) {
                        ++p.energy;
                        p.happyFlowerCounter = 0;
                    }
                    break;

                case RelicId::INCENSE_BURNER:
                    p.incenseBurnerCounter = r.info;
                    if (++p.incenseBurnerCounter == 6) {
                        p.incenseBurnerCounter = 0;
                        p.buff(PS::INTANGIBLE, 1);
                    }
                    break;

                case RelicId::INK_BOTTLE:
                    p.inkBottleCounter = r.info;
                    break;

                case RelicId::INSERTER:
                    // TODO Defect
                    break;

                case RelicId::LIZARD_TAIL:
                    p.setHasRelics(RelicId::LIZARD_TAIL, r.info);
                    break;

                case RelicId::NUNCHAKU:
                    p.nunchakuCounter = r.info;
                    break;

                case RelicId::OMAMORI:
                    p.setHasRelics(RelicId::OMAMORI, r.info);
                    break;

                case RelicId::PEN_NIB:
                    if (r.info == 9) {
                        p.buff(PS::PEN_NIB, 1);
                        p.penNibCounter = -1;
                    }
                    else p.penNibCounter = r.info;
                    break;

                case RelicId::PHILOSOPHERS_STONE:
                    for (int i = 0; i < monsters.monsterCount; ++i) {
                        auto &m = monsters.arr[i];
                        m.buff(MS::STRENGTH, 1);
                    }
                    p.energyPerTurn++;
                    break;

                case RelicId::SNECKO_EYE:
                    p.debuff(PS::CONFUSED, 1);
                    break;

                case RelicId::SUNDIAL:
                    p.sundialCounter = r.info;
                    break;

                case RelicId::ANCHOR:
                    p.block += 10;
                    break;

                case RelicId::ANCIENT_TEA_SET:
                    if(gs.lastRoom == Room::REST) p.gainEnergy(2);
                    break;

                case RelicId::BLOOD_VIAL:
                    p.heal(2);
                    break;

                case RelicId::BRONZE_SCALES:
                    p.buff(PS::THORNS, 3);
                    break;

                case RelicId::CRACKED_CORE:
                    // TODO Defect
                    break;

                case RelicId::DAMARU:
                    p.buff(PS::MANTRA, 1);
                    break;

                case RelicId::DATA_DISK:
                    p.buff(PS::FOCUS, 1);
                    break;

                case RelicId::GIRYA:
                case RelicId::DU_VU_DOLL:
                    p.buff(PS::STRENGTH, r.info);
                    break;

                case RelicId::FOSSILIZED_HELIX:
                    p.buff(PS::BUFFER, 1);
                    break;

                case RelicId::LANTERN:
                    p.gainEnergy(1);
                    break;

                case RelicId::MUTAGENIC_STRENGTH:
                    p.buff(PS::STRENGTH, 3);
                    p.debuff(PS::LOSE_STRENGTH, 3);
                    break;

                case RelicId::NEOWS_LAMENT:
                    // TODO decrease info
                    if (r.info > 0) {
                        for (int i = 0; i < monsters.monsterCount; ++i) {
                            Monster &m = monsters.arr[i];
                            m.curHp = 1;
                        }
                    }
                    break;

                case RelicId::NUCLEAR_BATTERY:
                    // TODO defect
                    break;

                case RelicId::ODDLY_SMOOTH_STONE:
                    p.buff(PS::DEXTERITY, 1);
                    break;

                case RelicId::PANTOGRAPH:
                    if(gs.curRoom == Room::BOSS) p.heal(25);
                    break;

                case RelicId::PRESERVED_INSECT:
                    if(gs.curRoom == Room::ELITE) {
                        for (int i = 0; i < monsters.monsterCount; ++i) {
                            Monster &m = monsters.arr[i];
                            m.curHp = static_cast<int>(m.maxHp * .75);
                        }
                    }
                    break;

                case RelicId::RUNIC_CAPACITOR:
                    // TODO defect
                    break;

                case RelicId::SLAVERS_COLLAR:
                    if(gs.curRoom == Room::ELITE || gs.curRoom == Room::BOSS) p.energyPerTurn++;
                    break;

                case RelicId::SLING_OF_COURAGE:
                    if(gs.curRoom == Room::ELITE) p.buff(PS::STRENGTH, 2);
                    break;

                case RelicId::SYMBIOTIC_VIRUS:
                    // TODO defect
                    break;

                case RelicId::TEARDROP_LOCKET:
                    // TODO watcher
                    break;

                case RelicId::THREAD_AND_NEEDLE:
                    p.buff(PS::PLATED_ARMOR, 4);
                    break;

                case RelicId::VAJRA:
                    p.buff(PS::STRENGTH, 1);
                    break;

                default:
                    break;
            }
        }
    }

    void CombatState::addToTop(const Action &a) {
        actionQueue.push_front(a);
    }

    void CombatState::addToBottom(const Action &a) {
        actionQueue.push_back(a);
    }
}

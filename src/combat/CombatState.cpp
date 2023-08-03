//
// Created by andian on 2023/8/3.
//

#include "combat/CombatState.h"

namespace StS {

//    void CombatState::init(const GameState &gs) {}

    void CombatState::init(const GameState &gs, const MonsterEncounter &monsterInit) {
        seed = gs.seed;
        ascension = gs.ascension;
        floorNumber = gs.floorNumber;

        auto startRandom = Random(seed + floorNumber);
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

        monsters.init(monsterHpRng, miscRng, ascension, monsterInit);
    }
}

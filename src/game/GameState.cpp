//
// Created by andian on 2023/8/2.
//

#include "game/GameState.h"

namespace StS {
    GameState::GameState(Character character, std::uint64_t seed, int ascension):
    seed(seed), character(character), ascension(ascension),
    miscRng(seed)
    {
        initPlayer();

        potionCapacity = ascension < 11 ? 3 : 2;
        std::fill(potions.begin(), potions.end(), Potion::EMPTY_POTION_SLOT);
    }


    void GameState::initPlayer() {
        if (ascension >= 10) cards.add(Card(CardId::ASCENDERS_BANE));
        switch (character) {
            case Character::IRONCLAD:
                maxHp = (ascension < 14 ? 80 : 75);
                relics.add(Relic(RelicId::BURNING_BLOOD));
                for(int i = 0; i < 5; ++i) cards.add(Card(CardId::STRIKE_RED));
                for(int i = 0; i < 4; ++i) cards.add(Card(CardId::DEFEND_RED));
                cards.add(Card(CardId::BASH));
                break;
            case Character::SILENT:
                maxHp = (ascension < 14 ? 70 : 66);
                relics.add(Relic(RelicId::RING_OF_THE_SNAKE));
                for(int i = 0; i < 5; ++i) cards.add(Card(CardId::STRIKE_GREEN));
                for(int i = 0; i < 5; ++i) cards.add(Card(CardId::DEFEND_GREEN));
                cards.add(Card(CardId::NEUTRALIZE));
                cards.add(Card(CardId::SURVIVOR));
                break;
            case Character::DEFECT:
                maxHp = (ascension < 14 ? 75 : 71);
                relics.add(Relic(RelicId::CRACKED_CORE));
                for(int i = 0; i < 4; ++i) cards.add(Card(CardId::STRIKE_BLUE));
                for(int i = 0; i < 4; ++i) cards.add(Card(CardId::DEFEND_BLUE));
                cards.add(Card(CardId::ZAP));
                cards.add(Card(CardId::DUALCAST));
                break;
            case Character::WATCHER:
                maxHp = (ascension < 14 ? 72 : 68);
                relics.add(Relic(RelicId::PURE_WATER));
                for(int i = 0; i < 4; ++i) cards.add(Card(CardId::STRIKE_PURPLE));
                for(int i = 0; i < 4; ++i) cards.add(Card(CardId::DEFEND_PURPLE));
                cards.add(Card(CardId::ERUPTION));
                cards.add(Card(CardId::VIGILANCE));
                break;
            default:
                break;
        }
        curHp = ascension < 6 ? maxHp : int(std::round(static_cast<float>(maxHp) * 0.9f));
    }

    std::ostream &operator<<(std::ostream &output, const GameState &gs) {
        output << "Character: " << getCharacterName(gs.character) << std::endl;
        output << "Hp    = " << gs.curHp << "/" << gs.maxHp << std::endl;
        output << "Gold  = " << gs.gold << std::endl;
        output << "Floor = " << gs.floorNumber << std::endl;
        output << "Potion : ";
        for(int i = 0; i < gs.potionCapacity; ++i) output << getPotionName(gs.potions[i]) << '/';
        output << std::endl;
        output << gs.cards;
        output << gs.relics;

        return output;
    }
}

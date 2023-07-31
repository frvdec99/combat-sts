//
// Created by frvdec on 2023/7/30.
//

#ifndef COMBAT_STS_GAMESTATE_H
#define COMBAT_STS_GAMESTATE_H

#include <vector>
#include "base/Base.h"
#include "base/Card.h"
#include "base/Relic.h"
#include "base/Potion.h"

namespace sts {
    class GameState {
    public:
        std::vector<Card> cards;                   // card deck
        std::vector<Relic> relics;                 // relic deck
        Potion potion[5];                          // potions
        unsigned char floor;                       // current floor
        short hp, maxHp, money;                    // hp & money
        unsigned short ascension;                  // ascension

        explicit GameState(CharacterId id = CharacterId::Silent, unsigned short ascension = 20) {
            // initialize
            if(id == CharacterId::Silent) {
                this->ascension = ascension;

                cards.resize(12);
                cards = {Card(CardId::Strike), Card(CardId::Strike), Card(CardId::Strike), Card(CardId::Strike), Card(CardId::Strike),
                         Card(CardId::Defend), Card(CardId::Defend), Card(CardId::Defend), Card(CardId::Defend), Card(CardId::Defend),
                         Card(CardId::Neutralize), Card(CardId::Survivor)};
                if(ascension >= 10) cards.emplace_back(CardId::AscendersBane);

                relics.resize(1);
                relics = {Relic(RelicId::RingOfTheSnake)};

                potion[0] = Potion(PotionId::Empty); potion[1] = Potion(PotionId::Empty);
                if(ascension >= 11) potion[2] = Potion(PotionId::Invalid);
                else potion[2] = Potion(PotionId::Empty);
                potion[3] = Potion(PotionId::Invalid); potion[4] = Potion(PotionId::Invalid);

                maxHp = 70;
                if(ascension >= 14) maxHp -= 4;
                if(ascension >= 6) hp = short(maxHp * 0.9);
                else hp = maxHp;

                money = 99;
                floor = 0;
            }
        }
    };
}

#endif //COMBAT_STS_GAMESTATE_H

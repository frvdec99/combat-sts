//
// Created by andian on 2023/8/16.
//

#include "combat/CardManager.h"

namespace StS {
    void CardManager::init(const GameState &gs, CombatState &cs) {
        nextUniqueCardId = gs.cards.size;

        std::vector<int> idx(gs.cards.size);
        for(int i = 0; i < gs.cards.size; ++i) idx[i] = i;
        java::Collections::shuffle(idx.begin(), idx.end(), java::Random(cs.shuffleRng.randomLong()));

        drawPile.resize(gs.cards.size);
        discardPile.clear();
        exhaustPile.clear();

        int normalCount = 0;
        std::vector<bool> isInnate(gs.cards.size);

        for (int i = 0; i < gs.cards.size; ++i) {
            const int deckIdx = idx[i];
            const auto &c = gs.cards.cards[deckIdx];
            isInnate[i] = c.isInnate() || deckIdx == gs.cards.bottleIdx[0] || deckIdx == gs.cards.bottleIdx[1] || deckIdx == gs.cards.bottleIdx[2];
            if (!isInnate[i]) ++normalCount;
        }

        int normalIdx = 0;
        int innateIdx = normalCount;

        for (int i = 0; i < gs.cards.size(); ++i) {
            const int deckIdx = idx[i];
            const auto &c = gs.cards.cards[deckIdx];
            if (isInnate[i]) {
                createDeckCardInstanceInDrawPile(c, deckIdx, innateIdx);
                ++innateIdx;
            } else {
                createDeckCardInstanceInDrawPile(c, deckIdx, normalIdx);
                ++normalIdx;
            }
        }

//        int innateCount =  innateIdx - normalCount;
//        if (innateCount  > cs.player.cardDrawPerTurn) {
//            cs.addToBot( Actions::DrawCards(innateCount-bc.player.cardDrawPerTurn) );
//        }
    }

    void CardManager::createDeckCardInstanceInDrawPile(const Card &card, int deckIdx, int drawIdx) {
        auto &c = drawPile[drawIdx];
        c = CardInstance(card);
        c.setUniqueId(deckIdx);

//        notifyAddCardToCombat(c);
//        notifyAddToDrawPile(c);
    }
}

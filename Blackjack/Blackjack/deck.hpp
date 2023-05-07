//
//  deck.hpp
//  Blackjack
//
//  Created by George Peshkov on 5/6/23.
//

#ifndef deck_hpp
#define deck_hpp

#include <stdio.h>
#include "card.hpp"
#include <vector>

class Deck{
public:
    Deck();
    void randomizeDeck();
private:
    std::vector<Card> deck;
};

#endif /* deck_hpp */

//
//  deck.cpp
//  Blackjack
//
//  Created by George Peshkov on 5/6/23.
//

#include "deck.hpp"
#include "card.hpp"
#include <algorithm>
#include <random>
#include <vector>

Deck::Deck(){
    enum Suit { Hearts, Clubs, Diamonds, Spades };
    for(int i = 1; i < 14; i++){
        for(int j = 0; j < 4; j++){
            switch (j){
                case Hearts: {
                    Card a("Hearts", i);
                    deck.push_back(a);
                    break;
                }
                case Clubs: {
                    Card b("Clubs", i);
                    deck.push_back(b);
                    break;
                }
                case Diamonds: {
                    Card c("Diamonds", i);
                    deck.push_back(c);
                    break;
                }
                case Spades: {
                    Card d("Spades", i);
                    deck.push_back(d);
                    break;
                }
            }
        }
    }
}

void Deck::randomizeDeck(){
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(deck), std::end(deck), rng);
}

int Deck::drawCard(){
    Card drawnCard = deck.back();
    deck.pop_back();
    return drawnCard.getValue();
}

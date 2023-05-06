//
//  card.cpp
//  Blackjack
//
//  Created by George Peshkov on 5/6/23.
//

#include "card.hpp"
#include <string>

void Card::setValue(int v){
    value = v;
}

void Card::setSuit(std::string s){
    suit = s;
}

int Card::getValue(){
    return value;
}

std::string Card::getSuit(){
    return suit;
}

//
//  card.hpp
//  Blackjack
//
//  Created by George Peshkov on 5/6/23.
//

#ifndef card_hpp
#define card_hpp

#include <stdio.h>
#include <string>

class Card{
public:
// Setters
    Card(std::string s, int v){suit = s; value = v;}
    void setSuit(std::string s);
    void setValue(int v);
// Getters
    std::string getSuit();
    int getValue();
private:
    std::string suit = "";
    int value;
};

#endif /* card_hpp */

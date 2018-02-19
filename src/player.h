#pragma once

#include <iostream>
#include <vector>
#include "deck.h"

class Player {
private:
    std::string name;
    std::vector<Card> hand;
public:
    // Constructors
    Player();
    Player(const std::string);

    // Setters
    void setName(const std::string);

    // Getters
    std::string getName();
    Card getCard(const int);

    // Functions
    void draw(Deck&);
    void displayHand();
    unsigned int handPoints();
    unsigned int handSize();
};

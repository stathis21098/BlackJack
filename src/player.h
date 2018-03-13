#pragma once

#include <iostream>
#include <vector>
#include "deck.h"

class Player {
private:
    std::string name;
    std::vector<Card> hand;
    bool ai;
public:
    // Constructors
    Player();
    Player(const std::string);

    // Setters
    void setName(const std::string);
    void setCard(const int, Card);
    void setAi(bool);

    // Getters
    std::string getName();
    Card getCard(const int);
    bool getAi();

    // Functions
    void draw(Deck&);
    bool displayHand();
    unsigned int handPoints();
    unsigned int handSize();
    void display();
};

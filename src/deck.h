#pragma once

#include <vector>
#include "card.h"

class Deck {
private:
    std::vector<Card> cards;
public:
    // Constructors
    Deck();

    // Setters
    void setCard(const Card, const int);

    // Getters
    Card getCard(const int);

    // Functions
    void fill();
    void shuffle();

    unsigned int calcPoints(const int);
    void display();
    unsigned int size();
    void removeTopCard();

};

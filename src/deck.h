#pragma once

#include "card.h"

class Deck {
private:
    Card* cards;
    int count;
    int remaining;
public:
    // Constructors
    Deck();

    // De-constructors
    ~Deck();

    // Setters
    void setCount(const int);
    void setCard(const Card, const int);
    void setRemaining(const int);

    // Getters
    unsigned int getCount();
    Card getCard(const int);
    unsigned int getRemaining();

    // Functions
    void fill();
    void shuffle();

    unsigned int calcPoints(const int);
    void display();

};

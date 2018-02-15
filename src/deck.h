#pragma once

#include "card.h"

class Deck {
private:
    Card* cards;
    int count;
public:
    // Constructors
    Deck();

    // Deconstructors
    ~Deck();

    // Setters
    void setCount(int);
    void setCard(Card, int);

    // Getters
    int getCount();
    Card getCard(int);

    // Functions
    void fill();
    void shuffle();

    int calcPoints(int);
    void display();

};

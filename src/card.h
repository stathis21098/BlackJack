#pragma once

#include <iostream>

class Card {
private:
    int points;
    std::string color;
    int value;
    std::string suit;
public:
    // Constructors
    Card();
    Card(const int, const std::string, const int, std::string);

    // Setters
    void setPoints(const int);
    void setColor(const std::string);
    void setValue(const int);
    void setSuit(const std::string);

    // Getters
    unsigned int getPoints();
    std::string getColor();
    unsigned int getValue();
    std::string getSuit();

    // Functions
    void display();
};

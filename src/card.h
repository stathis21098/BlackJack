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
    Card(int, std::string, int, std::string);

    // Setters
    void setPoints(int);
    void setColor(std::string);
    void setValue(int);
    void setSuit(std::string);

    // Getters
    int getPoints();
    std::string getColor();
    int getValue();
    std::string getSuit();

    // Functions
    void display();
};

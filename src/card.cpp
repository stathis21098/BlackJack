#include "card.h"

Card::Card() {
    this->points = 0;
    this->color = "Null";
    this->value = 0;
    this->suit = "Null";
}

Card::Card(int points, std::string color, int value, std::string suit) {
    this->points = points;
    this->color = color;
    this->value = value;
    this->suit = suit;
}

// Setters
void Card::setPoints(int points) {
    this->points = points;
}

void Card::setColor(std::string color) {
    this->color = color;
}

void Card::setValue(int value) {
    this->value = value;
}

void Card::setSuit(std::string suit) {
    this->suit = suit;
}

// Getters
int Card::getPoints() {
    return this->points;
}

std::string Card::getColor() {
    return this->color;
}

int Card::getValue() {
    return this->value;
}

std::string Card::getSuit() {
    return this->suit;
}

void Card::display() {
    std::cout << "Card: " << this->value << " of " << this->suit << " (" << this->points << ", " << this->color << ")\n";
}

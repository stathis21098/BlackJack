#include "card.h"

Card::Card() {
    this->points = 0;
    this->color = "Null";
    this->value = 0;
    this->suit = "Null";
}

Card::Card(const int points, const std::string color, const int value, const std::string suit) {
    this->points = points;
    this->color = color;
    this->value = value;
    this->suit = suit;
}

// Setters
void Card::setPoints(const int points) {
    this->points = points;
}

void Card::setColor(const std::string color) {
    this->color = color;
}

void Card::setValue(const int value) {
    this->value = value;
}

void Card::setSuit(const std::string suit) {
    this->suit = suit;
}

// Getters
unsigned int Card::getPoints() {
    return this->points;
}

std::string Card::getColor() {
    return this->color;
}

unsigned int Card::getValue() {
    return this->value;
}

std::string Card::getSuit() {
    return this->suit;
}

void Card::display() {
    std::cout << "Card: " << this->value << " of " << this->suit << " (" << this->points << ", " << this->color << ")\n";
}

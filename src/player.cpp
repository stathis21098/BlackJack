#include "player.h"
#include "deck.h"

// Constructors
Player::Player() {
    this->name = "Player";
    this->ai = true;
}

Player::Player(const std::string name) {
    this->name = name;
}

// Setters
void Player::setName(const std::string name) {
    this->name = name;
}

void Player::setCard(const int pos, Card card) {
    this->hand[pos] = card;
}

void Player::setAi(bool ai) {
    this->ai = ai;
}

// Getters
std::string Player::getName() {
    return this->name;
}

Card Player::getCard(const int pos) {
    return this->hand[pos];
}

bool Player::getAi() {
    return this->ai;
}

// Functions
void Player::draw(Deck &deck) {
    if(deck.size() > 0) {
        this->hand.push_back(deck.getCard(deck.size() - 1));
        deck.removeTopCard();
    } else {
        // Catching the erros of underfloating deck draw
        std::cout << "Error, underfloating deck!\n";
        std::cin.ignore();
    }
}

bool Player::displayHand() {
    if(this->hand.size() == 0) {
        return false;
    }

    for(unsigned int i = 0; i < this->hand.size(); i++) {
        this->getCard(i).display();
    }

    return true;
}

unsigned int Player::handPoints() {
    unsigned int sum = 0;
    bool found = false;
    int pos;

    for(unsigned int i = 0; i < hand.size(); i++) {
        unsigned int points = hand[i].getPoints();

        sum += points;

        if(points == 11) {
            found = true;
            pos = i;
        }

        if(found && points + sum > 21) {
            sum -= 10;
            found = false;

            Card* temp = new Card();
            *temp = hand[pos];

            temp->setPoints(1);
            hand[pos] = *temp;

            delete temp;
        }
    }

    return sum;
}

unsigned int Player::handSize() {
    return this->hand.size();
}

void Player::display() {
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Ai  : " << this->ai << std::endl;
    std::cout << "Hand:\n";
    this->displayHand();
}

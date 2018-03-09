#include <cstdlib>
#include "game.h"

// Constructors
Game::Game() {
    // Set defaults
    this->diff = 2;

    this->player = new Player();
    this->dealer = new Player("Dealer");

    this->deck = new Deck();
    deck->shuffle();
}

// De-Constructors
Game::~Game() {
    delete this->player;
    delete this->dealer;
    delete this->deck;
}

// Getters
int Game::getDiff() {
    return this->diff;
}

Player* Game::getPlayer() {
    return this->player;
}

Player* Game::getDealer() {
    return this->dealer;
}

Deck* Game::getDeck() {
    return this->deck;
}

// Setters
void Game::setDiff(int diff) {
    this->diff = diff;
}

void Game::setPlayer(Player* player) {
    this->player = player;
}

void Game::setDealer(Player* dealer) {
    this->dealer = dealer;
}

void Game::setDeck(Deck* deck) {
    this->deck = deck;
}

// Functions
bool Game::menu() {
    system("clear");
    std::cout << "Menu";
}

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

    int choice;

    do {
        system("clear");

        std::cout << "BlackJack\n\n";

        std::cout << "[1] Play Game\n";
        std::cout << "\n[0] Exit\n";
        std::cout << ">> ";

        std::cin >> choice;
    } while(choice != 0 && (choice < 1 || choice > 1));

    switch(choice) {
    case 1:
        // Play Game
        std::cout << "play game\n";
        std::cin.ignore().get();
        break;
    case 0:
        // Exit
        std::cout << "Thanks for playing!\n";
        return false;
    default:
        std::cout << "Error, not a possible choice.\n";
        break;
    }

    return true;
}

#include <iostream>
#include <windows.h>
#include "functions.h"

int menu() {
    system("cls");

    unsigned int choice;

    std::cout << "Black Jack (21)\n\n";

    std::cout << "[1] Play Game\n";
    std::cout << "[2] How to Play\n";
    std::cout << "****************\n";
    std::cout << "[0] Exit\n";

    std::cout << ">> ";
    std::cin >> choice;

    switch(choice) {
    case 1:
        playGame();
        break;
    case 2:
        howToPlay();
        break;
    case 0:
        exitGame();
        return 0;
    default:
        error_01();
        break;
    }

    return 1;
}

void playGame() {
    std::cout << "playGame()\n";
    system("pause");
}

void howToPlay() {
    std::cout << "howToPlay()\n";
    system("pause");
}

void exitGame() {
    std::cout << "Thanks for playing!\n";
    system("pause");
}

void setDiff() {
    std::cout << "setDiff()\n";
    system("pause");
}

void error_01() {
    std::cout << "Error, not a possible choice!\n";
    system("pause");
}

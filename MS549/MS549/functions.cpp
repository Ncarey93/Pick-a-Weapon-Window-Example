#include <iostream>
#include "functions.h"

//functions declared in header file

void menu() {
    int choice;
    do {
        std::cout << "Weapon Selector:\n";
        std::cout << "1. Select Sword\n";
        std::cout << "2. Select Bow\n";
        std::cout << "3. Select Shield\n";
        std::cout << "4. Leaving to the Battlefield\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            selectSword();
            break;
        case 2:
            selectBow();
            break;
        case 3:
            selectShield();
            break;
        case 4:
            std::cout << "Leaving Castle...\n";

        default:
            std::cout << "Wrong Choice, Pick Again.\n";
        }
    } while (choice != 4);
}

void selectSword() {
    std::cout << "You have selected a sword. Ready for close combat!\n";
    // Add additional functionality here later
}

void selectBow() {
    std::cout << "You have selected a bow. Ready for ranged attacks!\n";
    // Add additional functionality here later
}
void selectShield() {
    std::cout << "You have selected a Shield, get ready to defend!\n";
    // Add additional functionality here later
}

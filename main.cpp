#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"
#include <iostream>

int main() {
    Warrior warrior("Артур", 150, 35);
    Mage mage("Еліана", 90, 60);
    Archer archer("Леон", 110, 25);

    GameCharacter* character = nullptr;

    std::cout << "===== ДЕМОНСТРАЦІЯ ПОЛІМОРФІЗМУ =====\n\n";

    std::cout << "--- Воїн ---\n";
    character = &warrior;
    character->showStatus();
    character->attack();

    std::cout << "\n--- Маг ---\n";
    character = &mage;
    character->showStatus();
    character->attack();

    std::cout << "\n--- Лучник ---\n";
    character = &archer;
    character->showStatus();
    character->attack();

    std::cout << "\n===== ДЕМОНСТРАЦІЯ ЗВИЧАЙНОГО МЕТОДУ БАЗОВОГО КЛАСУ =====\n";
    character = &warrior;
    character->takeDamage(20);
    character->showStatus();

    character = &mage;
    character->takeDamage(15);
    character->showStatus();

    character = &archer;
    character->takeDamage(10);
    character->showStatus();

    return 0;
}

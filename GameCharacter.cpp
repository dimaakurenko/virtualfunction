#include "GameCharacter.h"
#include <iostream>

GameCharacter::GameCharacter(const std::string& name, int health)
    : name(name), health(health) {
    if (this->health < 0) this->health = 0;
}

GameCharacter::~GameCharacter() = default;

void GameCharacter::showStatus() const {
    std::cout << "Персонаж: " << name << '\n'
              << "Здоров'я: " << health << " од.\n";
}

void GameCharacter::takeDamage(int damage) {
    if (damage <= 0) {
        std::cout << "Значення шкоди має бути додатним.\n";
        return;
    }

    health -= damage;
    if (health < 0) health = 0;

    std::cout << name << " отримав шкоду: " << damage
              << ". Залишок здоров'я: " << health << " од.\n";
}

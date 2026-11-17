#include "Warrior.h"
#include <iostream>

Warrior::Warrior(const std::string& name, int health, int swordDamage)
    : GameCharacter(name, health), swordDamage(swordDamage) {
    if (this->swordDamage < 1) this->swordDamage = 1;
}

void Warrior::attack() const {
    std::cout << name << " атакує мечем і завдає "
              << swordDamage << " од. шкоди.\n";
}

#include "Archer.h"
#include <iostream>

Archer::Archer(const std::string& name, int health, int arrowDamage)
    : GameCharacter(name, health), arrowDamage(arrowDamage) {
    if (this->arrowDamage < 1) this->arrowDamage = 1;
}

void Archer::attack() const {
    std::cout << name << " стріляє з лука та завдає "
              << arrowDamage << " од. шкоди.\n";
}

#include "Mage.h"
#include <iostream>

Mage::Mage(const std::string& name, int health, int magicPower)
    : GameCharacter(name, health), magicPower(magicPower) {
    if (this->magicPower < 1) this->magicPower = 1;
}

void Mage::attack() const {
    std::cout << name << " використовує магічне заклинання силою "
              << magicPower << " од.\n";
}

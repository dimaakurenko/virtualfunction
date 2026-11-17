#ifndef WARRIOR_H
#define WARRIOR_H

#include "GameCharacter.h"

class Warrior : public GameCharacter {
private:
    int swordDamage;

public:
    Warrior(const std::string& name, int health, int swordDamage);
    void attack() const override;
};

#endif // WARRIOR_H

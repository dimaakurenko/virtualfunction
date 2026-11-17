#ifndef ARCHER_H
#define ARCHER_H

#include "GameCharacter.h"

class Archer : public GameCharacter {
private:
    int arrowDamage;

public:
    Archer(const std::string& name, int health, int arrowDamage);
    void attack() const override;
};

#endif // ARCHER_H

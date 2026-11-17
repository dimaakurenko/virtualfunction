#ifndef MAGE_H
#define MAGE_H

#include "GameCharacter.h"

class Mage : public GameCharacter {
private:
    int magicPower;

public:
    Mage(const std::string& name, int health, int magicPower);
    void attack() const override;
};

#endif // MAGE_H

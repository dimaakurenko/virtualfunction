#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H

#include <string>

class GameCharacter {
protected:
    std::string name;
    int health;

public:
    GameCharacter(const std::string& name, int health);
    virtual ~GameCharacter();

    void showStatus() const;
    void takeDamage(int damage);

    virtual void attack() const = 0;
};

#endif // GAME_CHARACTER_H

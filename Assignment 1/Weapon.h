#include "Item.h"

#ifndef WEAPON_H
#define WEAPON_H

//could it be protected/private inheritance?
class Weapon : public Item
{
private:
    const int kAttackDmg;

public:
    Weapon(const std::string& name, const int& durability, const int& dmg);
    virtual ~Weapon();
    const int getAttackDmg();
};

#endif
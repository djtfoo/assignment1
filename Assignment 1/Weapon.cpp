#include <iostream>
#include "Weapon.h"

Weapon::Weapon(const std::string& name, const int& durability, const int& dmg) : Item(name, durability), kAttackDmg(dmg)
{
    std::cout << "Outfit Object being instantiated" << std::endl;
}

Weapon::~Weapon()
{
}

const int Weapon::getAttackDmg()
{
    return kAttackDmg;
}
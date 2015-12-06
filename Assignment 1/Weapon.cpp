#include <iostream>
#include "Weapon.h"

Weapon::Weapon(const std::string& name, const int& durability, const int& dmg) : Item(name, durability), kAttackDmg(dmg)
{
    //debugging purposes
    std::cout << "Weapon Object being instantiated" << std::endl;
}

Weapon::~Weapon()
{
}

const int Weapon::getAttackDmg()
{
    return kAttackDmg;
}

void Weapon::receiveDamage(const int& damage)
{
    durability_ -= damage / 2;
}
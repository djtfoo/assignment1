/******************************************************************************/
/*!
\file	Weapon.cpp
\author Foo Jing Ting
\par	email: 152856H@mymail.nyp.edu.sg
\brief
Class to define a weapon item that can be used by a Dweller
*/
/******************************************************************************/
#include <iostream>
#include "Weapon.h"

Weapon::Weapon(const std::string& name, const int& durability, const int& dmg) : Item(name, durability), kAttackDmg(dmg)
{
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
    if (durability_ < 0)
        durability_ = 0;
}
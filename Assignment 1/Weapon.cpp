/******************************************************************************/
/*!
\file   Weapon.cpp
\author Foo Jing Ting
\par    email: 152856H@mymail.nyp.edu.sg
\brief
Class to define a Weapon Item that can be used by a Dweller
*/
/******************************************************************************/
#include <iostream>
#include "Weapon.h"

/******************************************************************************/
/*!
\brief
Constructor that takes in the name of the Weapon, initial durability value and attack damage value.

\param  name
name of the Weapon
\param  durability
initial durability of the Weapon
\param  dmg
attack damage value of the Weapon
*/
/******************************************************************************/
Weapon::Weapon(const std::string& name, const int& durability, const int& dmg) : Item(name, durability), kAttackDmg(dmg)
{
}

/******************************************************************************/
/*!
\brief
Weapon destructor
*/
/******************************************************************************/
Weapon::~Weapon()
{
}

/******************************************************************************/
/*!
\brief
Return the attack damage value of this Weapon

\return
attack damage of this Weapon
*/
/******************************************************************************/
const int Weapon::getAttackDmg()
{
    return kAttackDmg;
}

/******************************************************************************/
/*!
\brief
Reduce the durability of Weapon by half of damage taken

\param  damage
the damage taken by the Weapon
*/
/******************************************************************************/
void Weapon::receiveDamage(const int& damage)
{
    durability_ -= damage / 2;
    if (durability_ < 0)
        durability_ = 0;
}
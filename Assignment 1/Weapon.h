/******************************************************************************/
/*!
\file   Weapon.h
\author Foo Jing Ting
\par    email: 152856H@mymail.nyp.edu.sg
\brief
Class to define a Weapon Item that can be used by a Dweller
*/
/******************************************************************************/
#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

/******************************************************************************/
/*!
Class Weapon:
\brief  A Weapon Item in this game
*/
/******************************************************************************/
class Weapon : public Item
{
private:
    const int kAttackDmg;       //attack damage of this Weapon

public:
    Weapon(const std::string& name, const int& durability, const int& dmg);     //constructor takes in name of weapon, initial durability and weapon damage
    virtual ~Weapon();          //destructor
    const int getAttackDmg();   //return attack damage of this Weapon
    virtual void receiveDamage(const int& damage);      //Weapon's durability gets reduced
};

#endif
/******************************************************************************/
/*!
\file	Dweller.cpp
\author Foo Jing Ting
\par	email: 152856H@mymail.nyp.edu.sg
\brief
Class to define the dweller character in this game
*/
/******************************************************************************/
#include <iostream>
#include "Dweller.h"

Dweller::Dweller(const std::string& name, const int& special) : GameObject(name), SPECIAL_(special), position_(0, 0), health_(100), radiation_(0), stimpak_(0), radAway_(0), outfit_(0), weapon_(0)
{
    //debugging purposes
    std::cout << "Dweller Object being instantiated" << std::endl;
}

Dweller::~Dweller()
{
}

const int Dweller::getSPECIAL()
{
    if (outfit_ == NULL || (outfit_ != NULL && outfit_->getDurability <= 0))
        return SPECIAL_;
    else
        return weapon_->getAttackDmg();
}

const int Dweller::getCurrentHealth()
{
    return health_ - radiation_;
}

const int Dweller::getCurrentRadDamage()
{
    return radiation_;
}

const int Dweller::getAttackDmg()
{
    if (weapon_ == NULL || (weapon_ != NULL && weapon_->getDurability <= 0))
        return 1;
    else
        return weapon_->getAttackDmg();
}

void Dweller::setPosition(const Vec2D& position)
{
    position_ = position;
}

const Vec2D Dweller::getPosition()
{
    return position_;
}

void Dweller::receiveHealthDamage(const int& dmg)
{
    health_ -= dmg;
}

void Dweller::receiveRadDamage(const int& dmg)
{
    radiation_ += dmg;
}

void Dweller::receiveEquipmentDamage(const int& dmg)
{
    if (weapon_ != NULL)
        weapon_->receiveDamage(dmg);
    if (outfit_ != NULL)
        outfit_->receiveDamage(dmg);
}

void Dweller::addStimpak(const int& quantity)
{
    stimpak_ += quantity;
}

void Dweller::addRadAway(const int& quantity)
{
    radAway_ += quantity;
}

void Dweller::useStimpak()
{
    health_ += 20;
    if (health_ > 100 - radiation_) {
        health_ = 100 - radiation_;
    }
    stimpak_ -= 1;
}

void Dweller::useRadAway()
{
    radiation_ -= 10;
    if (radiation_ < 0) {
        radiation_ = 0;
    }
    radAway_ -= 1;
}

Outfit* Dweller::assignOutfit(Outfit* outfit)
{
    outfit_ = outfit;
    return outfit_;
}

Weapon* Dweller::assignWeapon(Weapon* weapon)
{
    weapon_ = weapon;
    return weapon_;
}

bool Dweller::isDead()
{
    if (getCurrentHealth() <= 0)
        return true;
    else
        return false;
}
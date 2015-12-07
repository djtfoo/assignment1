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
}

Dweller::~Dweller()
{
}

const int Dweller::getSPECIAL()
{
    return SPECIAL_;
}

const int Dweller::getCurrentHealth()
{
    /*if (100 - radiation_ > health_)
        return health_;
    else
        return (100 - radiation_);*/
    return health_;
}

const int Dweller::getCurrentRadDamage()
{
    return radiation_;
}

const int Dweller::getAttackDmg()
{
    if (weapon_ == NULL || (weapon_ != NULL && weapon_->getDurability() <= 0))
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
    if (health_ > dmg) {
        health_ -= dmg;
    }
    else {
        health_ = 0;
    }
}

void Dweller::receiveRadDamage(const int& dmg)
{
    radiation_ += dmg;
    if (100 - radiation_ < health_) {
        health_ = 100 - radiation_;
    }
}

void Dweller::receiveEquipmentDamage(const int& dmg)
{
    if (weapon_ != NULL)
        weapon_->receiveDamage(dmg);
    if (outfit_ != NULL)
        outfit_->receiveDamage(dmg);

    if (outfit_->getDurability() <= 0) {

    }
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
    if (stimpak_ >= 1) {    //if there is Stimpak to use
        if (health_ < 80 - radiation_) {    //if health before recovery is less than the max possible health before recovery (after calculating radiation)
            health_ += 20;               //health will regain 20 after using Stimpak
        }
        else {
            health_ = 100 - radiation_;      //else, after using Stimpak, health will be the max possible health (after calculating radiation)
        }
        stimpak_ -= 1;
    }
}

void Dweller::useRadAway()
{
    if (radAway_ >= 1) {    //if there is radAway to use
        if (radiation_ > 10) {  //if radiation damage is greater than 10
            radiation_ -= 10;   //lose 10 radiation damage
        }
        else {
            radiation_ = 0;     //else radiation damage will be 0 after using radAway
        }
        radAway_ -= 1;
    }
}

Outfit* Dweller::assignOutfit(Outfit* outfit)
{
    outfit_ = outfit;
    int L = SPECIAL_ % 10;
    int A = SPECIAL_ % 100 - L;
    int I;
    int C;
    int E;
    int P;
    int S;
    
    return outfit_;
}

Weapon* Dweller::assignWeapon(Weapon* weapon)
{
    weapon_ = weapon;
    return weapon_;
}

bool Dweller::isDead()
{
    if (health_ <= 0)
        return true;
    else
        return false;
}
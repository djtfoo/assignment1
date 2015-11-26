#include <iostream>
#include "Dweller.h"

Dweller::Dweller(const std::string& name, const int& special) : GameObject(name), SPECIAL_(special), position_(0, 0), health_(100), radiation_(0), stimpak_(0), radAway_(0), outfit_(0), weapon_(0)
{
    std::cout << "Dweller Object being instantiated" << std::endl;
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
    return health_;
}

const int Dweller::getCurrentRadDamage()
{
    return radiation_;
}

const int Dweller::getAttackDmg()
{
    return 1;
}

void Dweller::setPosition(const Vec2D& position)
{
    position_ = position;
}

const Vec2D Dweller::getPosition()
{
    return position_;
}

bool Dweller::receiveHealthDamage(const int& health_dmg)
{
    return true;
}

bool Dweller::receiveRadDamage(const int& rad_dmg)
{
    return true;
}

void Dweller::receiveEquipmentDamage(const int& equip_dmg)
{

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
    if (health_ > 100) {
        health_ = 100;
    }
    stimpak_ -= 1;
}

void Dweller::useRadAway()
{
    //how to use radAway???
    radAway_ -= 1;
}

const Outfit* Dweller::assignOutfit(const Outfit* outfit)
{
    outfit_ = outfit;
    return outfit_;
}

const Weapon* Dweller::assignWeapon(const Weapon* weapon)
{
    return weapon_;
}

bool Dweller::isDead()
{
    if (health_ <= 0) {
        delete outfit_;
        delete weapon_;
        return true;
    }
    else {
        return false;
    }
}
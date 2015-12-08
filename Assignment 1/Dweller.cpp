/******************************************************************************/
/*!
\file   Dweller.cpp
\author Foo Jing Ting
\par    email: 152856H@mymail.nyp.edu.sg
\brief
Class to define the dweller character in this game
*/
/******************************************************************************/
#include <iostream>
#include "Dweller.h"

/******************************************************************************/
/*!
\brief
Constructor that takes in the name of the Dweller and SPECIAL value.
Default SPECIAL value is 0

\param  name
name of the Dweller
\param  special
SPECIAL value of the Dweller
*/
/******************************************************************************/
Dweller::Dweller(const std::string& name, const int& special) : GameObject(name), SPECIAL_(special), position_(0, 0), health_(100), radiation_(0), stimpak_(0), radAway_(0), outfit_(0), weapon_(0)
{
}

/******************************************************************************/
/*!
\brief
Dweller destructor
*/
/******************************************************************************/
Dweller::~Dweller()
{
}

/******************************************************************************/
/*!
\brief
Returns the SPECIAL value of this Dweller. Dweller's SPECIAL is sum of his own SPECIAL and assigned Outfit's SPECIAL.
If Dweller has no Outfit assigned, or Outfit's durability is 0, Dweller's SPECIAL value is his own SPECIAL

\return
total SPECIAL value of Dweller
*/
/******************************************************************************/
const int Dweller::getSPECIAL()
{
    if (outfit_ == NULL || outfit_->getDurability() <= 0) {
        return SPECIAL_;
    }

    else {
        int finalSPECIAL = 0;

        for (int i = 1; i <= 1000000; i *= 10) {
            if ((((SPECIAL_ / i) % 10) + ((outfit_->getSPECIAL() / i) % 10)) < 9) {
                finalSPECIAL += i * (((SPECIAL_ / i) % 10) + ((outfit_->getSPECIAL() / i) % 10));
            }
            else {
                finalSPECIAL += i * 9;
            }
        }

        return finalSPECIAL;
    }
}

/******************************************************************************/
/*!
\brief
Returns the current health value of this Dweller

\return
health value of Dweller
*/
/******************************************************************************/
const int Dweller::getCurrentHealth()
{
    return health_;
}

/******************************************************************************/
/*!
\brief
Returns the current radiation damage sustained by this Dweller

\return
radiation damage value of Dweller
*/
/******************************************************************************/
const int Dweller::getCurrentRadDamage()
{
    return radiation_;
}

/******************************************************************************/
/*!
\brief
Returns the attack damage of this Dweller. Dweller's attack damage is assigned Weapon's attack damage.
If Dweller has no Weapon assigned, or Weapon's durability is 0, Dweller's attack damage is 1

\return
attack damage value of Dweller
*/
/******************************************************************************/
const int Dweller::getAttackDmg()
{
    if (weapon_ == NULL || (weapon_ != NULL && weapon_->getDurability() <= 0))
        return 1;
    else
        return weapon_->getAttackDmg();
}

/******************************************************************************/
/*!
\brief
Sets the position vector of this Dweller
*/
/******************************************************************************/
void Dweller::setPosition(const Vec2D& position)
{
    position_ = position;
}

/******************************************************************************/
/*!
\brief
Returns the current position of this Dweller

\return
position vector of Dweller
*/
/******************************************************************************/
const Vec2D Dweller::getPosition()
{
    return position_;
}

/******************************************************************************/
/*!
\brief
Reduces the health of this Dweller by damage taken. Minimum possible health is 0

\param  dmg
the damage received by this Dweller
*/
/******************************************************************************/
void Dweller::receiveHealthDamage(const int& dmg)
{
    if (health_ > dmg) {
        health_ -= dmg;
    }
    else {
        health_ = 0;
    }
}

/******************************************************************************/
/*!
\brief
Increases the radiation damage sustained by Dweller. Maximum possible health is (100 - radiation damage)

\param  dmg
the radiation damage received by this Dweller
*/
/******************************************************************************/
void Dweller::receiveRadDamage(const int& dmg)
{
    radiation_ += dmg;
    if (100 - radiation_ < health_) {
        health_ = 100 - radiation_;
    }
}

/******************************************************************************/
/*!
\brief
Outfit and Weapon that is assigned to this Dweller receive damage

\param  dmg
the damage received by this Dweller's assigned Outfit and Weapon
*/
/******************************************************************************/
void Dweller::receiveEquipmentDamage(const int& dmg)
{
    if (outfit_ != NULL)
        outfit_->receiveDamage(dmg);
    if (weapon_ != NULL)
        weapon_->receiveDamage(dmg);
}

/******************************************************************************/
/*!
\brief
Increase number of Stimpaks this Dweller has by quantity received

\param  quantity
number of Stimpaks received by this Dweller
*/
/******************************************************************************/
void Dweller::addStimpak(const int& quantity)
{
    stimpak_ += quantity;
}

/******************************************************************************/
/*!
\brief
Increase number of RadAway this Dweller has by quantity received

\param  quantity
number of RadAway received by this Dweller
*/
/******************************************************************************/
void Dweller::addRadAway(const int& quantity)
{
    radAway_ += quantity;
}

/******************************************************************************/
/*!
\brief
Use 1 Stimpak to increase health by 20 units
*/
/******************************************************************************/
void Dweller::useStimpak()
{
    if (stimpak_ >= 1) {    //if there is Stimpak to use
        if (health_ < 80 - radiation_) {    //if health before recovery is less than the max possible health before recovery (after calculating radiation)
            health_ += 20;               //health will increase by 20 units after using Stimpak
        }
        else {
            health_ = 100 - radiation_;      //else, after using Stimpak, health will be the max possible health (after calculating radiation)
        }
        stimpak_ -= 1;
    }
}

/******************************************************************************/
/*!
\brief
Use 1 RadAway to reduce radiation damage by 10 units
*/
/******************************************************************************/
void Dweller::useRadAway()
{
    if (radAway_ >= 1) {    //if there is radAway to use
        if (radiation_ > 10) {  //if radiation damage is greater than 10
            radiation_ -= 10;   //reduce radiation damage by 10 units
        }
        else {
            radiation_ = 0;     //else radiation damage will be 0 after using radAway
        }
        radAway_ -= 1;
    }
}

/******************************************************************************/
/*!
\brief
Assign an Outfit to this Dweller

\param  outfit
pointer to an Outfit that will be assigned to this Dweller

\return
the existing Outfit the Dweller has (before assigning)
*/
/******************************************************************************/
Outfit* Dweller::assignOutfit(Outfit* outfit)
{
    Outfit* temp = outfit_;
    outfit_ = outfit;
    return temp;
}

/******************************************************************************/
/*!
\brief
Assign a Weapon to this Dweller

\param  weapon
pointer to a Weapon that will be assigned to this Dweller

\return
the existing Weapon the Dweller has (before assigning)
*/
/******************************************************************************/
Weapon* Dweller::assignWeapon(Weapon* weapon)
{
    Weapon* temp = weapon_;
    weapon_ = weapon;
    return temp;
}

/******************************************************************************/
/*!
\brief
Check if Dweller is dead

\return
TRUE if Dweller's health is 0
*/
/******************************************************************************/
bool Dweller::isDead()
{
    if (health_ <= 0)
        return true;
    else
        return false;
}
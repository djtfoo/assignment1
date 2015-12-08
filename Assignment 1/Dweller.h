/******************************************************************************/
/*!
\file   Dweller.h
\author Foo Jing Ting
\par    email: 152856H@mymail.nyp.edu.sg
\brief
Class to define the dweller character in this game
*/
/******************************************************************************/
#ifndef DWELLER_H
#define DWELLER_H

#include "Vec2D.h"
#include "GameObject.h"
#include "Outfit.h"
#include "Weapon.h"

/******************************************************************************/
/*!
Class Dweller:
\brief  A character class in this game
*/
/******************************************************************************/
class Dweller : public GameObject
{
private:
    Vec2D position_;        //location of this Dweller
    int SPECIAL_;           //set of attributes of this Dweller
    int health_;            //current health of this Dweller: initial is 100
    int radiation_;         //current radiation damage sustained by this Dweller
    int stimpak_;           //amount of Stimpaks this Dweller has
    int radAway_;           //amount of RadAway this Dweller has
    Outfit* outfit_;        //a pointer to the outfit of this Dweller
    Weapon* weapon_;        //a pointer to the weapon of this Dweller

public:
    Dweller(const std::string& name, const int& special = 0);   //takes in name and SPECIAL value
    ~Dweller();
    const int getSPECIAL();             //return SPECIAL of this Dweller
    const int getCurrentHealth();       //return current health of this Dweller
    const int getCurrentRadDamage();    //return current radiation damage of this Dweller
    const int getAttackDmg();           //return current attack damage of this Dweller
    void setPosition(const Vec2D& position);    //set position vector of this Dweller
    const Vec2D getPosition();          //return current position vector of this Dweller
    void receiveHealthDamage(const int& dmg);   //reduce health by damage
    void receiveRadDamage(const int& dmg);      //increase radiation by damage
    void receiveEquipmentDamage(const int& dmg);    //reduce outfit and weapon durability by damage
    void addStimpak(const int& quantity);       //increase number of Stimpaks of this Dweller
    void addRadAway(const int& quantity);       //increase number of RadAway of this Dweller
    void useStimpak();                  //use 1 Stimpak to regain 20 health
    void useRadAway();                  //use 1 RadAway to reduce 10 radiation damage
    Outfit* assignOutfit(Outfit* outfit);   //assign Outfit object to the Outfit pointer of this Dweller
    Weapon* assignWeapon(Weapon* weapon);   //assign Weapon object to the Weapon pointer of this Dweller
    bool isDead();                      //if health drops below 1, this Dweller is dead
};

#endif
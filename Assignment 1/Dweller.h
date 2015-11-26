#include "Vec2D.h"
#include "GameObject.h"
#include "Outfit.h"
#include "Weapon.h"

#ifndef DWELLER_H
#define DWELLER_H

class Dweller : public GameObject
{
private:
    Vec2D position;         //location of this Dweller
    int SPECIAL;            //set of attributes of this Dweller
    int health;             //current health of this Dweller: initial is 100
    int radiation;          //current radiation damage sustained by this Dweller
    int stimpak;            //amount of Stimpaks this Dweller has
    int radAway;            //amount of RadAway this Dweller has
    const Outfit* outfit;   //a pointer to the outfit of this Dweller
    const Weapon* weapon;   //a pointer to the weapon of this Dweller

    static int count;       //count of number of Dwellers
public:
    Dweller(const std::string& name, const int& special);   //takes in name and SPECIAL value
    ~Dweller();
    const int getSPECIAL();     //return SPECIAL value
    const int getCurrentHealth();   //return current health value
    const int getCurrentRadDamage();    //return current radiation damage value
    const int getAttackDmg();       //return current attack damage value
    void setPosition(const Vec2D pos);
    const Vec2D getPosition();
    bool receiveHealthDamage(const int&);
    bool receiveRadDamage(const int&);
    void receiveEquipmentDamage(const int&);
    void addStimpak(const int&);
    void addRadAway(const int&);
    void useStimpak();
    void useRadAway();
    const Outfit* assignOutfit(const Outfit*);
    const Weapon* assignWeapon(const Weapon*);
    bool isDead();          //if health drops below 1, Dweller is dead
};

#endif
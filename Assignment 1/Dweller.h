#include "Vec2D.h"
#include "GameObject.h"
#include "Outfit.h"
#include "Weapon.h"

#ifndef DWELLER_H
#define DWELLER_H

class Dweller : public GameObject
{
private:
    Vec2D position_;            //location of this Dweller
    int SPECIAL_;               //set of attributes of this Dweller
    int health_;                //current health of this Dweller: initial is 100
    int radiation_;             //current radiation damage sustained by this Dweller
    int stimpak_;               //amount of Stimpaks this Dweller has
    int radAway_;               //amount of RadAway this Dweller has
    const Outfit* outfit_;      //a pointer to the outfit of this Dweller
    const Weapon* weapon_;      //a pointer to the weapon of this Dweller

public:
    Dweller(const std::string& name, const int& special = 0);   //takes in name and SPECIAL value
    ~Dweller();
    const int getSPECIAL();     //return SPECIAL value
    const int getCurrentHealth();   //return current health value
    const int getCurrentRadDamage();    //return current radiation damage value
    const int getAttackDmg();       //return current attack damage value
    void setPosition(const Vec2D& position);
    const Vec2D getPosition();
    bool receiveHealthDamage(const int& health_dmg);
    bool receiveRadDamage(const int& rad_dmg);
    void receiveEquipmentDamage(const int& equip_dmg);
    void addStimpak(const int& quantity);
    void addRadAway(const int& quantity);
    void useStimpak();
    void useRadAway();
    const Outfit* assignOutfit(const Outfit* outfit);
    const Weapon* assignWeapon(const Weapon* weapon);
    bool isDead();          //if health drops below 1, Dweller is dead
};

#endif
#include <iostream>
using std::cout;
using std::endl;

#include "Dweller.h"
#include "Outfit.h"
#include "Weapon.h"
#include "Item.h"
#include "GameObject.h"
#include "Vec2D.h"

void testNames();
void shouldNotCompile();

int main()
{
    testNames();
    //shouldNotCompile();

    Dweller d("One", 5555555);
    Outfit o("Outfit", 10, 1234567);
    cout << d.getSPECIAL() << endl;
    d.assignOutfit(&o);
    cout << d.getSPECIAL() << endl;
    d.setPosition(Vec2D(50, 10));
    cout << d.getPosition().x << endl;
    cout << d.getPosition().y << endl;
    d.receiveHealthDamage(20);
    d.receiveRadDamage(10);
    d.receiveRadDamage(10);
    d.receiveRadDamage(10);
    d.addStimpak(5);
    d.addRadAway(5);
    d.useStimpak();
    d.useRadAway();
    d.useStimpak();
    cout << d.getCurrentHealth() << endl;
    Weapon w("Weapon", 10, 5);
    cout << d.getAttackDmg() << endl;
    d.assignWeapon(&w);
    cout << d.getAttackDmg() << endl;
    d.receiveEquipmentDamage(10);
    cout << d.getSPECIAL() << endl;
    cout << d.getAttackDmg() << endl;
    d.receiveEquipmentDamage(10);
    d.receiveEquipmentDamage(10);
    cout << d.getAttackDmg() << endl;
    cout << o.getDurability() << endl;
    cout << w.getDurability() << endl;
    d.receiveHealthDamage(120);
    cout << d.getCurrentHealth() << endl;
    cout << d.getName() << endl;
    cout << o.getName() << endl;
    cout << w.getName() << endl;

    return 0;
}
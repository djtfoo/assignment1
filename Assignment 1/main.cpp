#include <iostream>

#include "Vec2D.h"
#include "GameObject.h"
#include "Item.h"
#include "Dweller.h"
#include "Outfit.h"
#include "Weapon.h"

int GameObject::count_ = 0;

void main(void)
{
    //it is no longer = new something
    Outfit* outfit = new Outfit("dress", 5, 10000);
    Outfit outfit2("shirt", 10, 10000);
    Item* outfit3 = new Outfit("armour", 100, 10000);
    std::cout << outfit2.getCount() << std::endl;

    Dweller boy1("George", 1234567);
    std::cout << "Dweller's name is " << boy1.getName() << std::endl;
    boy1.assignOutfit(outfit);
    std::cout << boy1.getAttackDmg() << std::endl;
}
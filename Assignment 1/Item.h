#include "GameObject.h"

#ifndef ITEM_H
#define ITEM_H

//could it be protected/private inheritance?
class Item : public GameObject
{
protected:
    int durability_;
    Item(const std::string& name = "Item", const int& durability = 1);  //in class diagram, it is public

public:
    virtual ~Item();
    virtual void receiveDamage(const int& damage) = 0;
    const int getDurability();
};

#endif
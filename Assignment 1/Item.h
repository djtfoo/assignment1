#include "GameObject.h"

#ifndef ITEM_H
#define ITEM_H

//could it be protected/private inheritance?
class Item : public GameObject
{
protected:
    int durability_;

    Item(); //default constructor - alternatively, provide default arguments for every parameter
    Item(const std::string& name, const int& durability);

public:
    virtual ~Item();
    virtual void receiveDamage(const int& damage) = 0;
    virtual const int getDurability();
};

#endif
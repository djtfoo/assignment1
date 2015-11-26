#include "GameObject.h"

#ifndef ITEM_H
#define ITEM_H

//could it be protected/private inheritance?
class Item : public GameObject
{
protected:
    int durability_;

    //not sure if a count is needed here
    //static int count_item;

    Item(); //default constructor - alternatively, provide default arguments for every parameter
    Item(const std::string& name, const int& durability);
    virtual ~Item();

public:
    virtual void reduceDurability(const int& reduction);
    virtual const int getDurability();
};

#endif
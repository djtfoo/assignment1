#include "GameObject.h"

#ifndef ITEM_H
#define ITEM_H

class Item: public GameObject
{
private:
    int durability_;

    //static int count_item;
public:
    Item(); //default - alternatively, provide default arguments for every parameter
    Item(const std::string& name, const int& durability);
    virtual ~Item();
    void reduceDurability(const int& reduction);
    const int getDurability();

    virtual std::string getName();
    virtual int getCount();
};

#endif
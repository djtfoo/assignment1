#include "Item.h"

Item::Item(const std::string& name, const int& durability)
{
    durability_ = durability;
}

Item::~Item()
{
}

void Item::reduceDurability(const int& reduction)
{
    durability_ -= reduction;
}

const int Item::getDurability()
{
    return durability_;
}

int Item::getCount()
{
    return count;   //not sure if this is calling the right count?
}
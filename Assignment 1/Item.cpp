#include <iostream>
#include "Item.h"

Item::Item()
{
    std::cout << "Item Object is called" << std::endl;
}

Item::Item(const std::string& name, const int& durability) : GameObject(name), durability_(durability)
{
    std::cout << "Item Object being instantiated" << std::endl;
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
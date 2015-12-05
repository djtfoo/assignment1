#include <iostream>
#include "Item.h"

Item::Item(const std::string& name, const int& durability) : GameObject(name), durability_(durability)
{
    //debugging purposes
    std::cout << "Item Object being instantiated" << std::endl;
}

Item::~Item()
{
}

const int Item::getDurability()
{
    return durability_;
}
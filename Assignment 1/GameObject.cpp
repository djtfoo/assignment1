#include <iostream>
#include "GameObject.h"

GameObject::GameObject(const std::string& name) : kName(name)
{
    ++count_;

    //debugging purposes
    std::cout << "GameObject Object being instantiated" << std::endl;
}

GameObject::~GameObject()
{
    --count_;
}

std::string GameObject::getName()
{
    return kName;
}

int GameObject::getCount()
{
    return count_;
}
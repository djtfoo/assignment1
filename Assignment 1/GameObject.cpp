#include <iostream>
#include "GameObject.h"

GameObject::GameObject()
{
    std::cout << "GameObject Object is called" << std::endl;
}

GameObject::GameObject(const std::string& name) : kName(name)
{
    ++count_;
    std::cout << "GameObject Object being instantiated" << std::endl;
}

GameObject::~GameObject()
{
}

std::string GameObject::getName()
{
    return kName;
}

int GameObject::getCount()
{
    return count_;
}
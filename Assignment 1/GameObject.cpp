#include "GameObject.h"

GameObject::GameObject(const std::string& name) : kName(name)
{
    ++count_;
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
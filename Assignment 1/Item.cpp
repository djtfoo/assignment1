/******************************************************************************/
/*!
\file	Item.cpp
\author Foo Jing Ting
\par	email: 152856H@mymail.nyp.edu.sg
\brief
Interface class for all items in this game
*/
/******************************************************************************/
#include <iostream>
#include "Item.h"

Item::Item(const std::string& name, const int& durability) : GameObject(name), durability_(durability)
{
}

Item::~Item()
{
}

const int Item::getDurability()
{
    return durability_;
}
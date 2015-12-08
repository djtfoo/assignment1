/******************************************************************************/
/*!
\file   Item.cpp
\author Foo Jing Ting
\par    email: 152856H@mymail.nyp.edu.sg
\brief
Interface class for all items in this game
*/
/******************************************************************************/
#include <iostream>
#include "Item.h"

/******************************************************************************/
/*!
\brief
Constructor that takes in the name of the Item and initial durability value.
Default name is "Item" and default durability value is 0

\param  name
name of the Item
\param  durability
initial durability of the Item
*/
/******************************************************************************/
Item::Item(const std::string& name, const int& durability) : GameObject(name), durability_(durability)
{
}

/******************************************************************************/
/*!
\brief
Item destructor
*/
/******************************************************************************/
Item::~Item()
{
}

/******************************************************************************/
/*!
\brief
Return the durability of this Item

\return
current durability of this Item
*/
/******************************************************************************/
const int Item::getDurability()
{
    return durability_;
}
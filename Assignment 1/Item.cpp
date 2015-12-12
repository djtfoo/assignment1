/******************************************************************************/
/*!
\file   Item.cpp
\author Foo Jing Ting
\par    email: 152856H@mymail.nyp.edu.sg
\brief
Interface class for all items in this game
*/
/******************************************************************************/
#include "Item.h"

/******************************************************************************/
/*!
\brief
Constructor that takes in the name and initial durability value of this Item.
Default name is "Item" and default durability value is 0

\param  name
name of this Item
\param  durability
initial durability of this Item
*/
/******************************************************************************/
Item::Item(const std::string& name, const int& durability) : GameObject(name)
{
    if (durability > 0) {
        durability_ = durability;
    }
    else {
        durability_ = 0;
    }
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
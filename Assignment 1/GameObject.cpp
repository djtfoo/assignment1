/******************************************************************************/
/*!
\file   GameObject.cpp
\author Foo Jing Ting
\par    email: 152856H@mymail.nyp.edu.sg
\brief
Interface class for all objects in this game
*/
/******************************************************************************/
#include <iostream>
#include "GameObject.h"

int GameObject::count_ = 0;

/******************************************************************************/
/*!
\brief
Constructor that takes in the name of the object. Default name is "GameObject"

\param  name
name of the object
*/
/******************************************************************************/
GameObject::GameObject(const std::string& name) : kName(name)
{
    ++count_;
}

/******************************************************************************/
/*!
\brief
GameObject destructor
*/
/******************************************************************************/
GameObject::~GameObject()
{
    --count_;
}

/******************************************************************************/
/*!
\brief
Return the name of this object

\return
name of the object
*/
/******************************************************************************/
std::string GameObject::getName()
{
    return kName;
}

/******************************************************************************/
/*!
\brief
Return the total count of number of GameObjects that exist in the game

\return
number of objects in the game
*/
/******************************************************************************/
int GameObject::getCount()
{
    return count_;
}
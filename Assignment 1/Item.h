/******************************************************************************/
/*!
\file   Item.h
\author Foo Jing Ting
\par    email: 152856H@mymail.nyp.edu.sg
\brief
Interface class for all items in this game
*/
/******************************************************************************/
#ifndef ITEM_H
#define ITEM_H

#include "GameObject.h"

/******************************************************************************/
/*!
Class Item:
\brief  An interface class for all items in this game
*/
/******************************************************************************/
class Item : public GameObject
{
protected:
    int durability_;        //durability of this Item
    Item(const std::string& name = "Item", const int& durability = 1);  //constructor takes in name of object and initial durability value
public:
    virtual ~Item();
    virtual void receiveDamage(const int& damage) = 0;  //Item's durability gets reduced
    const int getDurability();      //return durability of this Item
};

#endif
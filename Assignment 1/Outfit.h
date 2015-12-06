/******************************************************************************/
/*!
\file	Outfit.h
\author Foo Jing Ting
\par	email: 152856H@mymail.nyp.edu.sg
\brief
Class to define an outfit item that can be used by a dweller
*/
/******************************************************************************/
#ifndef OUTFIT_H
#define OUTFIT_H

#include "Item.h"

/******************************************************************************/
/*!
Class Outfit:
\brief	Defines an outfit item and its methods
*/
/******************************************************************************/
class Outfit : public Item
{
private:
    const int kSPECIAL;         //set of attributes of this Outfit

public:
    Outfit(const std::string& name, const int& durability, const int& special);     //constructor takes in name of outfit, initial durability and outfit SPECIAL value
    virtual ~Outfit();          //destructor
    const int getSPECIAL();     //return SPECIAL of this Outfit
    virtual void receiveDamage(const int& damage);      //Outfit's durability gets reduced
};

#endif
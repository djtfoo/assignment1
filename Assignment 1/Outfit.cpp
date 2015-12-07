/******************************************************************************/
/*!
\file	Outfit.cpp
\author Foo Jing Ting
\par	email: 152856H@mymail.nyp.edu.sg
\brief
Class to define an outfit item that can be used by a dweller
*/
/******************************************************************************/
#include <iostream>
#include "Outfit.h"

Outfit::Outfit(const std::string& name, const int& durability, const int& special) : Item(name, durability), kSPECIAL(special)
{
}

Outfit::~Outfit()
{
}

const int Outfit::getSPECIAL()
{
    return kSPECIAL;
}

void Outfit::receiveDamage(const int& damage)
{
    durability_ -= damage;
    if (durability_ < 0)
        durability_ = 0;
}
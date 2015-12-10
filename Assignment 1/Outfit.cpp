/******************************************************************************/
/*!
\file   Outfit.cpp
\author Foo Jing Ting
\par    email: 152856H@mymail.nyp.edu.sg
\brief
Class to define an Outfit Item that can be used by a Dweller
*/
/******************************************************************************/
#include "Outfit.h"

/******************************************************************************/
/*!
\brief
Constructor that takes in the name, initial durability value and SPECIAL value of this Outfit

\param  name
name of this Outfit
\param  durability
initial durability of this Outfit
\param  special
SPECIAL value of this Outfit
*/
/******************************************************************************/
Outfit::Outfit(const std::string& name, const int& durability, const int& special) : Item(name, durability), kSPECIAL(special)
{
}

/******************************************************************************/
/*!
\brief
Outfit destructor
*/
/******************************************************************************/
Outfit::~Outfit()
{
}

/******************************************************************************/
/*!
\brief
Return the SPECIAL value of this Outfit

\return
SPECIAL value of this Outfit
*/
/******************************************************************************/
const int Outfit::getSPECIAL()
{
    return kSPECIAL;
}

/******************************************************************************/
/*!
\brief
Reduce the durability of Outfit by damage taken

\param  damage
the damage taken by this Outfit
*/
/******************************************************************************/
void Outfit::receiveDamage(const int& damage)
{
    durability_ -= damage;
    if (durability_ < 0)
        durability_ = 0;
}
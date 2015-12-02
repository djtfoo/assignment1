#include <iostream>
#include "Outfit.h"

Outfit::Outfit(const std::string& name, const int& durability, const int& special) : Item(name, durability), kSPECIAL(special)
{
    std::cout << "Outfit Object being instantiated" << std::endl;
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
}
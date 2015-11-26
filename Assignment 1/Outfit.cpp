#include "Outfit.h"

Outfit::Outfit(const std::string& name, const int& durability, const int& special) : SPECIAL(special)
{
    GameObject(name);
    Item(durability);
}

Outfit::~Outfit()
{
}

const int Outfit::getSPECIAL()
{
    return SPECIAL;
}
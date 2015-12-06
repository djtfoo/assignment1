#ifndef OUTFIT_H
#define OUTFIT_H

#include "Item.h"

//could it be protected/private inheritance?
class Outfit : public Item
{
private:
    const int kSPECIAL;

public:
    Outfit(const std::string& name, const int& durability, const int& special);
    virtual ~Outfit();
    const int getSPECIAL();
    virtual void receiveDamage(const int& damage);
};

#endif
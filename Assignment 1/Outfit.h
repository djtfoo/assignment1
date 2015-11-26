#include "Item.h"

#ifndef OUTFIT_H
#define OUTFIT_H

class Outfit : public Item
{
private:
    int count;
    const int SPECIAL;

    static int count;
public:
    Outfit(const std::string& name, const int& durability, const int& special);
    ~Outfit();
    const int getSPECIAL();
};

#endif
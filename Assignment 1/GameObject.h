#include <string>

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
protected:
    const std::string kName;

    GameObject();
    GameObject(const std::string& name);
    virtual ~GameObject();

public:
    static int count_;

    virtual std::string getName();
    virtual int getCount();
};

#endif
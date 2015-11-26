#include <string>

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
private:
    const std::string kName;
    static int count_;

public:
    GameObject();
    GameObject(const std::string& name);
    virtual ~GameObject();
    virtual std::string getName();
    virtual int getCount();
};

#endif
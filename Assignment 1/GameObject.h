#include <string>

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
private:
    const std::string kName;
    static int count_;

protected:
    GameObject(const std::string& name = "GameObject");

public:
    virtual ~GameObject();
    std::string getName();
    static int getCount();
};

#endif
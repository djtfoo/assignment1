#include <string>

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
private:
    const std::string kName;
    static int count_;

protected:
    GameObject();   //default constructor - alternatively, provide default arguments for every parameter
    GameObject(const std::string& name);

public:
    virtual ~GameObject();
    virtual std::string getName();
    virtual int getCount();
};

#endif
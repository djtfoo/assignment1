/******************************************************************************/
/*!
\file   GameObject.h
\author Foo Jing Ting
\par    email: 152856H@mymail.nyp.edu.sg
\brief
Interface class for all objects in this game
*/
/******************************************************************************/
#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>

/******************************************************************************/
/*!
Class GameObject:
\brief  An interface class for all objects in this game
*/
/******************************************************************************/
class GameObject
{
private:
    const std::string kName;    //name of this object
    static int count_;          //stores the number of objects of this type instantiated

protected:
    GameObject(const std::string& name = "GameObject");     //constructor takes in name of the object

public:
    virtual ~GameObject();      //destructor
    std::string getName();      //return name of this object
    static int getCount();      //return number of objects of this type instantiated
};

#endif
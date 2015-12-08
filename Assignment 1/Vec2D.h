/******************************************************************************/
/*!
\file   Vec2D.h
\author Foo Jing Ting
\par    email: 152856H@mymail.nyp.edu.sg
\brief
Struct to define a 2D vector
*/
/******************************************************************************/
#ifndef VEC2D_H
#define VEC2D_H

/******************************************************************************/
/*!
Class Vec2D:
\brief  Defines a 2D vector
*/
/******************************************************************************/
struct Vec2D
{
public:
    double x;   //the x-component of this vector
    double y;   //the y-component of this vector

    Vec2D(double x, double y);  //a function to set the x- and y- components of this vector
};

#endif
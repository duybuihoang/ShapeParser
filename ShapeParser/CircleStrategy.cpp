#include"pch.h"

#include "CircleStrategy.h"

CircleStrategy::CircleStrategy(string data)
    :Strategy(data)
    ,_radius(stof(data))
{
}

float CircleStrategy::getArea()
{
    return _radius * _radius * PI ;
}

float CircleStrategy::getPerimeter()
{
    return _radius * 2.f * PI;
}

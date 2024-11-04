#pragma once
#include "Strategy.h"
class RectangleStrategy :
    public Strategy
{
private:
    int _width;
    int _height;
public:
    RectangleStrategy(string);
	//return area
    float getArea();
	//return perimeter
    float getPerimeter();
};


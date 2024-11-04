#pragma once
#include "Strategy.h"
class SquareStrategy :
    public Strategy
{
private:
    float _side;
public:
    SquareStrategy(string);
	//return area()
    float getArea();
	//return perimeter()
    float getPerimeter();
};


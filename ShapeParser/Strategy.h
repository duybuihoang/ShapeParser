#pragma once
#include"Shape.h"
class Strategy
{
protected:
	string _data;
public:
	Strategy(string);
	virtual float getArea() = 0;
	virtual float getPerimeter() = 0;
};


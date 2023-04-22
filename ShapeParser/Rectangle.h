#pragma once
#include"Shape.h"
class Rectangle :public Shape 
{
private:
	float _w;
	float _h;
public:
	Rectangle(const string&, const float&, const float&);
	float getArea();
	float getPerimeter();
};


#pragma once
#include"Shape.h"
#define PI 3.14159
class Circle : public Shape
{
private:
	float _radius;
public:
	Circle(const string&, const float&);
	float getArea();
	float getPerimeter();
};


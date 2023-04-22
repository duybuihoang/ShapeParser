#include "Circle.h"

Circle::Circle(const string&n, const float&r)
	:Shape(n)
{
	_radius = r;
}

float Circle::getArea()
{
	return PI * _radius * _radius;
}

float Circle::getPerimeter()
{
	return PI * _radius * 2.f;
}

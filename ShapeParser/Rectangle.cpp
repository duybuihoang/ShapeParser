#include "Rectangle.h"

Rectangle::Rectangle(const string&n, const float&w, const float&h)
	:Shape(n)
{
	_w = w;
	_h = h;
}

float Rectangle::getArea()
{
	return _w * _h;
}

float Rectangle::getPerimeter()
{
	return (_w + _h) * 2.f;
}

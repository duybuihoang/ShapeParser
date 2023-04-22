#include "Square.h"

Square::Square(const string&n, const float&s)
	:Shape(n)
{
	_side = s;
}

float Square::getArea()
{
	return _side * _side;
}

float Square::getPerimeter()
{
	return _side * 4.f;
}

void Square::print()
{
	cout << "Square: "<<_side<<" ";
}
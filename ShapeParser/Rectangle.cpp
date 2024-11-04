#include "pch.h"

#include "Rectangle.h"

myShape::Rectangle::Rectangle(const float& w, const float& h, unique_ptr<Strategy> stra)
	:_rectangleStrategy(move(stra))
{
	_w = w;
	_h = h;
}

float myShape::Rectangle::getArea()
{
	float area = _w * _h;

	return area;
}

float myShape::Rectangle::getPerimeter()
{
	float perimeter = (_w + _h) * 2.f;
	return perimeter;
}

string myShape::Rectangle::toString()
{
	return "Hinh chu nhat";
}

string myShape::Rectangle::getData()
{


	return string("Rong=" + ftos(_w, DATAPRECISION) + ", Cao=" + ftos(_h, DATAPRECISION));
}

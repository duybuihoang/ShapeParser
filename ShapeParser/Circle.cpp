#include"pch.h"

#include "Circle.h"

Circle::Circle(const float& r,unique_ptr<Strategy> strategy)
	:_radius(r)
	, _circleStrategy(move(strategy))
{
	
}

float Circle::getArea()
{
	return _circleStrategy->getArea();
}

float Circle::getPerimeter()
{
	return _circleStrategy->getPerimeter();
}

string Circle::toString()
{
	return "Hinh tron";
}

string Circle::getData()
{
	return string("Ban Kinh=" + ftos(_radius, DATAPRECISION));
}



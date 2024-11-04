#include "pch.h"

#include "RectangleStrategy.h"

RectangleStrategy::RectangleStrategy(string data)
	:Strategy(data)
{
	stringstream ss(data);
	string width, height;
	ss >> width;
	ss >> height;

	_width = stof(width);
	_height = stof(height);
}

float RectangleStrategy::getArea()
{
	return _width* _height;
}

float RectangleStrategy::getPerimeter()
{
	return (_width + _height) * 2.f;
}




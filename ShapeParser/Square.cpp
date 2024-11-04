#include "pch.h"

#include "Square.h"

Square::Square( const float&s, unique_ptr<Strategy> strategy)
	:_squareStrategy(move(strategy)),
	_side(s)
{
}

float Square::getArea()
{
	return _squareStrategy->getArea();
}

float Square::getPerimeter()
{
	return _squareStrategy->getPerimeter();
}

string Square::toString()
{
	return "Hinh vuong";
}

string Square::getData()
{
	return string("canh=" + ftos(_side, DATAPRECISION));
}

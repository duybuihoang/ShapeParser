#include "pch.h"

#include "SquareStrategy.h"

SquareStrategy::SquareStrategy(string side)
	:_side(stof(side)),
	Strategy(side)
{
}

float SquareStrategy::getArea()
{
	return _side * _side;
}

float SquareStrategy::getPerimeter()
{
	return 4.f * _side;
}

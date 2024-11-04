#pragma once

#include"Strategy.h"
#define PI 3.14;
class CircleStrategy:
	public Strategy
{
private:
	float _radius;
public:
	//receive a string and convert to float
	CircleStrategy(string data);
	//return area
	float getArea();
	//return perimeter
	float getPerimeter();
	
};


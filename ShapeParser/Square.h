#pragma once
#include"Shape.h"
class Square :public Shape
{
private:
	float _side;
public:
	Square(const string&, const float&);
	float getArea();
	float getPerimeter();
	void print();
};


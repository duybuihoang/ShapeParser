#pragma once
#include<string>
#include<iostream>
using std::cin, std::cout;
using std::string;
class Shape
{
private:
	string _name;
public:
	Shape();
	Shape(const string&);

	virtual float getArea() = 0;
	virtual float getPerimeter() = 0;
	virtual void print() = 0;
};


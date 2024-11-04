#pragma once

#include"Shape.h"
#include"Strategy.h"
#include"CircleStrategy.h"
class Circle : public Shape
{
protected:
	float _radius;
	// manage circle's Algorithm 
	unique_ptr<Strategy> _circleStrategy;
public:
	//receive radius and a pointer 
   	Circle(const float&, unique_ptr<Strategy>);
	// return Area of the Shape
	float getArea() ;
	// return Perimeter of the Shape
	float getPerimeter() ;
	// return Shape Name
	string toString();
	// return the data of shape under string data type
	string getData();
};


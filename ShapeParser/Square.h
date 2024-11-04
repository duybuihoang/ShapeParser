#pragma once
#include"Shape.h"
#include"Strategy.h"
class Square :public Shape
{
protected:
	float _side;
	//manage square's algorithm
	unique_ptr<Strategy> _squareStrategy;
public:
	Square( const float&, unique_ptr<Strategy>);
	//return area
	float getArea();
	//return perimeter
	float getPerimeter();
	//return shape name
	string toString();
	//return data
	string getData();

};


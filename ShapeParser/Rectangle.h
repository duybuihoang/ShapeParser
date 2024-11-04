#pragma once
#include"Shape.h"
#include"Strategy.h"

//name "Rectangle" collide with Rectangle from wingdi.h so it is needed to put Rectangle class in a nameSpace 

namespace myShape {
	class Rectangle :public Shape
	{
	protected:
		float _w;
		float _h;
		// manage rectangle's Algorithm 
		unique_ptr<Strategy> _rectangleStrategy;
	public:
		Rectangle(const float&, const float&, unique_ptr<Strategy>);
		//return area
		float getArea();
		//return perimeter
		float getPerimeter();
		//return shape name
		string toString();
		//return data
		string getData();
	};
}


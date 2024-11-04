#include"pch.h"

#include "CircleParser.h"

Shape* CircleParser::parse(stringstream data)
{
    string radius = "";
    Circle* circle;

    getline(data, radius, '=');
    radius.clear();

    getline(data, radius);

    if (!isNumber(radius))
        circle = nullptr;
    else
    {
	//create Circle's Strategy
        unique_ptr<Strategy> temp(new CircleStrategy(radius));
        circle = new Circle(stof(radius), move(temp));
    }
    return circle;
}

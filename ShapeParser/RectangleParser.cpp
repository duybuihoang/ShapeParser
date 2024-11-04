#include "pch.h"
#include "RectangleParser.h"

Shape* RectangleParser::parse(stringstream data)
{
    string width;
    string height;
    myShape::Rectangle* rect;
    
    getline(data, width, '=');
    width.clear();
    getline(data ,width, ',');

    getline(data, height, '=');
    height.clear();
    getline(data, height);

	//check if data is number
    if (isNumber(width) && isNumber(height))
    {
	// pointer manage algorithm
        unique_ptr<Strategy> temp(new RectangleStrategy(width + " " + height));
        rect = new myShape::Rectangle(stof(width), stof(height), move(temp));
    }
    else
    {
        rect = nullptr;
    }
    return rect;
}



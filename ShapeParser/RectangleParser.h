#pragma once
#include "Parser.h"
#include"Rectangle.h"
#include"RectangleStrategy.h"
class RectangleParser :
    public Parser
{
public:
//return a rectangle pointer 
    Shape* parse(stringstream data);
};


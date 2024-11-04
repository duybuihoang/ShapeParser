#pragma once

#include "Parser.h"
#include"Circle.h"
#include"CircleStrategy.h"

class CircleParser :
    public Parser
{
public:
	//return a pointer of circle datatype
    Shape* parse(stringstream data);
};


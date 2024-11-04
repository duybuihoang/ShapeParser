#pragma once
#include "Parser.h"
#include "Square.h"
#include"SquareStrategy.h"
class SquareParser : 
	public Parser
{
public:
	//return a square pointer
	Shape* parse(stringstream data);
};


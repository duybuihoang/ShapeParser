#pragma once
#include"Shape.h"
#include "Object.h"
using std::stringstream;
class Parser : 
	public Object
{
public:
	virtual Shape* parse(stringstream data) = 0;
	string toString();
};


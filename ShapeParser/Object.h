#pragma once
#include<string>
#include<iostream>
#include<iomanip>
#include<sstream>
using std::cin, std::cout;
using std::string;
using std::ostream;
using std::stringstream;
using std::to_string;
class Object
{
public:
	//interface
		virtual string toString() = 0;
};

#pragma once
#include<string>
#include<iomanip>
#include <sstream>
using std::fixed, std::setprecision, std::setw;
using std::string;
using std::ostringstream;
using std::move;
//convert float to String 
string ftos(float, int);
//check if a String is a Number
bool isNumber(string);
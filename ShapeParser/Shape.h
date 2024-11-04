#pragma once
#include"Object.h"
#include"utils.h"
#include<iomanip>
#include <locale>


#define NAMEWIDTH 20
#define DATAWIDTH 25
#define AREAWIDTH 15
#define PERIMETERWIDTH 15
#define AREAPRECISION 2
#define PERIMETERPRECISION 1
#define DATAPRECISION 2
using std::unique_ptr; 
using std::move;
using std::make_unique;
using std::endl;
using std::setw, std::setprecision, std::fixed;
using std::ostringstream;
class Shape : Object
{
private:
public:
	//interface 
	virtual float getArea() = 0;
	virtual float getPerimeter() = 0;
	virtual string toString() = 0;
	virtual string getData() = 0;
	//advance print
	void print() ;
};


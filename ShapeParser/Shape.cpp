#include "Shape.h"

string Shape::toString()
{
	return "Shape";
}

void Shape::print()
{

	auto area = ftos(getArea(), AREAPRECISION);
	auto perimeter = ftos(getPerimeter(), PERIMETERPRECISION);

	cout << setw(1) << toString() << setw(NAMEWIDTH - toString().size()) << "|";
	cout << setw(1) << getData() << setw(DATAWIDTH - getData().size()) << "|";
	cout << setw(1) <<"Chu vi:" << perimeter << setw(AREAWIDTH - perimeter.size() ) << "|";
	cout << setw(1) <<"Dien tich:"<< area << setw(PERIMETERWIDTH - area.size()) << "|";
}




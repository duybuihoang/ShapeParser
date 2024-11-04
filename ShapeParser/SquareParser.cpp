#include "pch.h"

#include "SquareParser.h"

Shape* SquareParser::parse(stringstream data)
{
    string side;
    getline(data, side, '=');
    side.clear();
    getline(data, side);
    //check data 
    if (isNumber(side))
    {
        unique_ptr<Strategy> temp(new SquareStrategy(side));
        Square* square = new Square(stof(side), move(temp));

        return square;
    }
    return nullptr;
}

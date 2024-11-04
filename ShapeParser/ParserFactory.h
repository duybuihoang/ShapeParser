#pragma once
#include"Object.h"
#include"Parser.h"
#include<map>
using std::map;
class ParserFactory: public Object
{
private:
	map<string, std::shared_ptr<Parser>> _factory;
public:
	void insert(string type, std::shared_ptr<Parser> parser);
	Parser* select(string type);

	string toString();
};


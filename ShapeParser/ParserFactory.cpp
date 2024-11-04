#include "ParserFactory.h"

void ParserFactory::insert(string type,std::shared_ptr<Parser> parser)
{
	_factory.insert({ type, parser });
}

Parser* ParserFactory::select(string type)
{
	Parser* p = nullptr;

	if (_factory.contains(type))
		p = _factory[type].get();

	return p;
}

string ParserFactory::toString()
{
	return "ParserFactory";
}


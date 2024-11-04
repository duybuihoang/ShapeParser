#include"utils.h"
string ftos(float data, int precision)
{
	ostringstream ans;
	ans.precision(precision);
	ans << fixed << data;
	return move(ans).str();
}

bool isNumber(string data)
{
	for (auto x : data)
	{
		if (std::isdigit(x) == 0)
			return false;
	}
	return true;
}
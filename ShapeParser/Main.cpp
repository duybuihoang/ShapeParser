#include"Shape.h"
#include"Square.h"
#include"Circle.h"
#include"Rectangle.h"
#include<vector>
#include<algorithm>
#include<memory>
using std::vector;
using std::unique_ptr;
int main()
{
	vector<Shape*> list;
	Shape* v1 = new Square("hinhVuong", 10);
	Shape* v2 = new Square("hinhVuong", 12);
	Shape* v3 = new Square("hinhVuong", 9);
	Shape* v4 = new Square("hinhVuong", 8);
	Shape* v5 = new Square("hinhVuong", 7);
	

	list.push_back(v1);
	list.push_back(v2);
	list.push_back(v3);
	list.push_back(v4);
	list.push_back(v5);

	sort(list.begin(), list.end(), [&list]( Shape*& a,  Shape*& b) 
		{
			return a->getArea() < b->getArea();
		});
	for (auto a : list)
	{
		a->print();
	}

	return 0;
}
#include<vector>
#include<algorithm>
#include<memory>
#include<fstream>
#include <filesystem>
#include <windows.h>
#include<locale>

#include"Parser.h"
#include"ParserFactory.h"
#include"Shape.h"

namespace fs = std::filesystem;
typedef Parser* (*parserFuncion)();

using fs::path;
using std::vector;
using std::ifstream;

int main()
{
	//set locale for printing vietnamese character
	setlocale(LC_ALL, "vi_VN.UTF-8");

	//factory declaration
	ParserFactory factory;
	//get directory
	path current_directory = fs::current_path();
	//loop to get all file in directory 

	for (const auto& entry : fs::directory_iterator(current_directory))
	{
		//get file name end with .dll
		if (entry.path().extension() == ".dll")
		{
			//load that file dll
			HINSTANCE hDll = LoadLibrary(entry.path().c_str());

			if (hDll != NULL)
			{
				//getting file name 
				string filename = entry.path().filename().string();
				//getting the index in filename string before '.'
				auto end_point = filename.find(".dll");
				//getting the Shapename string by get the substring from 0 to end_point index in filename String
				//ex: 
				//filename: "Square.dll" -> shapeName:"Square"
				string shapeName = filename.substr(0, end_point);

				//get function pointer name createPaser in the dll file
				parserFuncion CreateParser = (parserFuncion)GetProcAddress(hDll, "createParser");

				//checking if that function pointer exist 
				if (CreateParser != nullptr)
				{
					//create the shapeParser
					std::shared_ptr<Parser> parser;
					parser.reset(CreateParser());
					// register shapeParser to factory
					factory.insert(shapeName, parser);
				}
			}
		}
	}
	//reading data from "shapes.txt"
	string filename = "shapes.txt";
	ifstream fin(filename);

	string line;
	getline(fin, line);

	int size = stoi(line);
	vector<Shape*> v;

	for (int i = 0; i < (size); i++)
	{
		//getting the shape name
		getline(fin, line);
		stringstream ss(line);
		string data;
		string type;

		getline(ss, type, ':');
		getline(ss, data);

		//check if shape name available 
		Parser* parserSelect = factory.select(type);

		if (parserSelect != nullptr)
		{
			Shape* shape = parserSelect->parse(stringstream(data));

			if (shape != nullptr)
				v.push_back(shape);
		}
	}

	//print 

	//simple printing 
	bool flag = false;
	cout << "Simple Printing" << endl << endl;
	if (v.size() == size)
	{
		cout << "tim thay " << v.size() << " hinh" << endl;
	}
	else
	{
		cout << "tim thay " << v.size() << "/" << size << " hinh" << endl;
		flag = true;

	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << i + 1 << ". " << v[i]->toString() << ": " << v[i]->getData() << endl;
	}

	if (flag)
		cout << "khong the tim thay: " << size - v.size() << " hinh" << endl;

	cout << endl;
	
	//advance printing
	cout << "Advance Printing" << endl << endl;

	//sort ascending using std::sort and lambda expression
	sort(v.begin(), v.end(), [&v](Shape*& a, Shape*& b) {
	return a->getArea() < b->getArea();
	});

	cout << "Expected: " << size << " Shape" << endl;
	cout << "Shape Found: " << v.size() << endl;

	for ( int i =  0; i < v.size(); i++)
	{
		cout << "|" << setw(2) << i + 1 << setw(2) << "|";
		v[i]->print();
		cout << endl;
	}

	system("pause");
	return 0;
}	



#pragma once

#include <iostream>
#include <string>

using std::string;

class Date {
	//так как объект класса будет создаваться только внутри класса Person
	//всего его поля могут быть публичными для удобства заполения
public:
	short day;
	short month;
	short year;
	string ToString() {}
	string ToFile() {}
};
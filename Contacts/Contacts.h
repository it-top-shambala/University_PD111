#pragma once

#include <iostream>
#include <string>

using std::string;

class Contacts {
	//так как объект класса будет создаваться только внутри класса Person
	//всего его поля могут быть публичными для удобства заполения
public:
	string address;
	string phone;
	string email;
	string ToString() {} 
	string ToFile() {}
};
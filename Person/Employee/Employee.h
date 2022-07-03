#pragma once

#include <iostream>
#include <string>
#include "Person/Person.h"

using std::string;

class Employee : public Person {
protected:
	string _department;
	string _position;
	Date _employmentDate; //можно добавить дату приема на работу
	bool _isWorking;
public:
	Employee (unsigned short id) : Person(id) {}
	string ToString() {
		string str = "";
		str = _firstName + " " + _lastName + " " + _dateOfBirth.ToString() + " " + _contacts.ToString() + " " + _department + " " + _position + " ";
		if (_isWorking) str += "is working";
		else str += "fired";
		return str;
	}
	string ToFile() {
		string str = "";
		str = _firstName + "|" + _lastName + "|" + _dateOfBirth.ToString() + "|" + _contacts.ToString() + "|" + _faculty + "|" + _department + "|" + _position + "|";
		if (_isWorking) str += "is working";
		else str += "fired";
		return str;
	}
	void SetDepartment(string newDepartment) {}
	void SetPosition(string newPosition) {}
	void SetIsWorking(bool) {}
	string GetDepartment() {}
	string GetPosition() {}
	bool GetIsWorking() {}
};
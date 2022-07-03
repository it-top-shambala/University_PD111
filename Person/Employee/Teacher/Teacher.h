#pragma once

#include <iostream>
#include <string>
#include "Person/Employee/Employee.h"

using std::string;

class Teacher : public Employee {
protected:
	string subject;

public:
	Teacher(unsigned short id) : Employee(id) {}
	string ToString() {
		string str = "";
		str = _firstName + " " + _lastName + " " + _dateOfBirth.ToString() + " " + _contacts.ToString() + " " + _department + " " + _position + " " + _subject + " ";
		if (_isWorking) str += "is working";
		else str += "fired";
		return str;
	}
	string ToFile() {
		string str = "";
		str = _firstName + "|" + _lastName + "|" + _dateOfBirth.ToString() + "|" + _contacts.ToString() + "|" + _faculty + "|" + _department + "|" + _position + "|" + _subject + "|";
		if (_isWorking) str += "is working";
		else str += "fired";
		return str;
	}
	void SetSubject(string newSubject) {}
	string GetSubject() {}
};
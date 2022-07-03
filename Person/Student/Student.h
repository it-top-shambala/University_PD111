#pragma once

#include <iostream>
#include <string>
#include "Person/Person.h"
#include "Progress.h"

using std::string;

class Student : public Person {
protected:
	string _faculty;
	bool _isStudying;
	Progress _progress;
public:
	Student(unsigned short id) : Person(id) {}

	string ToString() {
		string str = "";
		str = _firstName + " " + _lastName + " " + _dateOfBirth.ToString() + " " + _contacts.ToString() + " " + _faculty + " ";
		if (_isStudying) str += "is studying";
		else str += "expelled";
		return str;
	}
	string ToFile() {
		string str = "";
		str = _firstName + "|" + _lastName + "|" + _dateOfBirth.ToString() + "|" + _contacts.ToString() + "|" + _faculty + "|";
		if (_isStudying) str += "is studying";
		else str += "expelled";
		return str;
	}
	string ProgressToString() {}
	string ProgressToFile() {}
	void SetFaculty(string newFaculty) {}
	void SetIsStudying(bool) {}
	void SetProgress(string subject, vector<short>& marks) {}
	string GetFaculty() {}
	bool GetIsStudying() {}
	auto* GetProgress() {
		return &_progress.progress;
	}
};
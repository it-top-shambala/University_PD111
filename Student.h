#pragma once
#include <string>
#include "Person.h"
#include <map>
#include <vector>
#include "Progress.h"
using namespace std;
class Student : public Person
{
protected:
	string faculty;
	bool isStudying;
	Progress* progress;
public:
	Student(){}
	void SetFaculty(string str)
	{
		faculty = str;
	}
	string GetFaculty()
	{
		return faculty;
	}
	void SetIsStuying(bool is)
	{
		isStudying = is;
	}
	bool GetIsStudying()
	{
		return isStudying;
	}	
};
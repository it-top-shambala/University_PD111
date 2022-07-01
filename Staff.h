#pragma once
#include <string>
#include "Person.h"
using namespace std;
class Staff : public Person
{
protected:
	string department;
	string position;
	bool isWorking;
public:
	Staff(){}
	string GetDepartment()
	{
		return department;
	}
	void SetDepartment(string str)
	{
		department = str;
	}
	string GetPosition()
	{
		return position;
	}
	void SetPosition(string str)
	{
		position = str;
	}
	bool GetIsWorking()
	{
		return isWorking;
	}
	void SetIsWorking(bool state)
	{
		isWorking = state;
	}	
};
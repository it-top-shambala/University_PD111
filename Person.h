#pragma once
#include <string>
#include "Date.h"
#include "Contacts.h"
using namespace std;
class Person
{
protected:
	string firstName;
	string lastName;
	Date* dateOfBirth;
	Contacts* contacts;
public:
	Person (){}
	string GetLastName()
	{
		return lastName;
	}
	void SetLastName(string str)
	{
		lastName = str;
	}
	string GetFirstName()
	{
		return firstName;
	}
	void SetFirstName(string str)
	{
		firstName = str;
	}	
};
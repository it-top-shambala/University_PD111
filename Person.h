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
};
#pragma once
#include <string>
#include "DateOfBirth.h"
#include "Contacts.h"
using namespace std;
class Person
{
protected:
	string firstName;
	string lastName;
	DateOfBirth* dateOfBirth;
	Contacts* contacts;
public:
	Person (){}
};
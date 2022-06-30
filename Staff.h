#pragma once
#include <string>
#include "Person.h"
#include "Progress.h"
using namespace std;
class Staff : public Person
{
protected:
	string department;
	string position;
	bool isWorking;	
};
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
	bool isStuduing;
	Progress* progress;
};
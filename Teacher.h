#pragma once
#include <string>
#include "Staff.h"
using namespace std;
class Teacher : public Staff
{
protected:
	string subject;
};
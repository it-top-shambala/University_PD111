#pragma once

#include <iostream>
#include <map>
#include "Person/Employee/Employee.h"
#include "DataBase/DataBase.h"

using std::map;
using std::pair;

class DataBaseEmployees : public DataBase {
	map <unsigned int, Employee>  //или Employee*
};
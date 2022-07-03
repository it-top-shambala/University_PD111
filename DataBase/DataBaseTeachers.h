#pragma once

#include <iostream>
#include <map>
#include "Person/Employee/Teacher/Teacher.h"
#include "DataBase/DataBase.h"

using std::map;
using std::pair;

class DataBaseTeachers : public DataBase {
	map <unsigned int, Teacher>  //или Teacher*
};
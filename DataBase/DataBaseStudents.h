#pragma once

#include <iostream>
#include <map>
#include "Person/Student/Student.h"
#include "DataBase/DataBase.h"

using std::map;
using std::pair;

class DataBaseStudents : public DataBase {
	map <unsigned int, Student>  //или Student*
};
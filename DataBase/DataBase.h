#pragma once

#include <iostream>
#include <map>
#include "Person/Student/Student.h"
#include "Person/Employee/Employee.h"
#include "Person/Employee/Teacher/Teacher.h"
#include "LogFile/LogFile.h"

using std::map;
using std::pair;

//базовый класс обобщенной базы данных
class DataBase {
public:
	void Add(Student* student, string username) {
	//в каждом методе будет генерироваться сообщение и передаваться в класс-подписчик для записи в лог-файл
		string message = username+" added a new student "+student->SetFirstName()+" "+student->GetLastName()+" to the base";
		LogFile::LogToFile(message);
	}
	void Add(Employee* employee, string username) {}
	void Add(Teacher* teacher, string username) {}
	Student* Find(unsigned int id, string username) {}
	Employee* Find(unsigned int id, string username) {}
	Teacher* Find(unsigned int id, string username) {}
	Student* Find(string lastName, string username) {}
	Employee* Find(string lastName, string username) {}
	Teacher* Find(string lastName, string username) {}
	void Change(Student* student, string username) {}
	void Change(Employee* employee, string username) {}
	void Change(Teacher* teacher, string username) {}
	void Delete(Student* student, string username) {}
	void Delete(Employee* employee, string username) {}
	void Delete(Teacher* teacher, string username) {}
};
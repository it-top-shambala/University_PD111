#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "DataBase/DataBaseStudents.h"
#include "DataBase/DataBaseEmployees.h"
#include "DataBase/DataBaseTeachers.h"

using std::ofstream;
using std::string;
using std::ios;

class CLI {
	string _userName;
	unsigned int _idMemory;  
	//string _passWord; //можно вести файл логинов и паролей
	DataBaseStudents _students;
	DataBaseTeachers _teachers;
	DataBaseEmployees _employees;
	CLI() {
		//при запуске программы считывать из файла запомненное значение id (изначально 0)
		//и передавать в конструктор Person'ов его значение + 1 
		//считывать данные из файлов баз в нужные поля и работать с ними
	}
public:
	void Authorization(string userName) {}

	void AddPerson() {
		short select = 0;
		//прописать менюшки, в main вызывать нужные функции в циклах, в зависимости от выбора

		switch (select) {
		case 1: Student newStudent(_idMemory + 1);
			_students.Add(newStudent,_userName);
			SaveToFile(newStudent.ToFile(), 's');
			break;
		case 2: Employee newEmployee(_idMemory + 1);
			_employees.Add(newEmployee,_userName);
			SaveToFile(newEmployee.ToFile(), 'e');
			break;
		case 3: Teacher newTeacher(_idMemory + 1);
			_teachers.Add(newTeacher,_userName);
			SaveToFile(newTeacher.ToFile(), 't');
			break;
		default:
			break;
		}
	}

	void ChangePerson(short select) {}

	void DeletePerson(short select) {}

	void Show() {}

	void ReadFromFile() {}

	void SaveToFile(string newString, char key) {} //реализовать выбор файла для дозаписи в зависимости от key
	//запись производится в 3 файла .csv для баз данных, 1 текстовый лог-файл, 1 бинарный файл для запоминания id
};
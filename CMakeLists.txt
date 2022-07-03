cmake_minimum_required(VERSION 3.22)
project(university)

set(CMAKE_CXX_STANDARD 14)

add_executable(university main.cpp "Contacts/Contacts.h" "Person/Person.h" "Date/Date.h" "Person/Student/Student.h" "Person/Student/Progress.h" "Person/Employee/Employee.h" "Person/Employee/Teacher/Teacher.h" "DataBase/DataBase.h" "DataBase/DataBaseStudents.h" "DataBase/DataBaseEmployees.h" "DataBase/DataBaseTeachers.h" "LogFile/LogFile.h" "CLI/CLI.h")

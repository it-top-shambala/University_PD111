#pragma once

#include <iostream>
#include <fstream>
#include <string>

using std::ofstream;
using std::string;
using std::ios;

class LogFile {
public:
	static void LogToFile(string message) {
		ofstream fout;
		fout.open("University_LogFile.txt", ios::app);
		fout << message;
		fout.close;
	}
};
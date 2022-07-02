#pragma once
#include <map>
#include <vector>
#include <string>
using namespace std;
class Progress
{
protected:
	map<string, vector<int>> progress;
public:
	Progress(){}
	map<string, vector<int>> GetProgress()
	{
		return progress;
	}
	SetProgress(string subject, vector<int> mark)
	{
		progress.emplace(subject, mark);
	}
};
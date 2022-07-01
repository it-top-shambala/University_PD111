#pragma once
using namespace std;
struct Date
{
protected:
	int day;
	int month;
	int year;
public:
	Date(){}
	int GetDay()
	{
		return day;
	}
	void SetDay(int dd)
	{
		day = dd;
	}
	int GetMonth()
	{
		return month;
	}
	void SetMonth(int mm)
	{
		month = mm;
	}
	int GetYear()
	{
		return year;
	}
	void SetYear(int yyyy)
	{
		year = yyyy;
	}
};
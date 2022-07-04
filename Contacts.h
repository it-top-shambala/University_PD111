#pragma once
#include <string>
using namespace std;
struct Contacts
{
protected:
	string address;
	string phone;
public:
	Contacts(){}
	string GetAddress()
	{
		return address;
	}
	void SetAddress(string str)
	{
		address = str;
	}
	string GetPhone()
	{
		return phone;
	}
	void SetPhone(string str)
	{
		phone = str;
	}
};
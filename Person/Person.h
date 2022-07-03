#pragma once

#include <iostream>
#include <string>
#include "Contacts/Contacts.h"
#include "Date/Date.h"

using std::string;

class Person {
protected:
	unsigned int _id;
	string _firstName;
	string _lastName;
	Date _dateOfBirth;
	Contacts _contacts;
	Person(unsigned short id) {
		_id + id;
	}
	Person(unsigned short id, string firstName, string lastName) {
		_id + id;
		_firstName = firstName;
		_lastName = lastName;
	}
public:
	void SetFirstName(string newFirstName) {}
	void SetLastName(string newLastName) {}
	void SetDateOfBirth(short newDay, short newMonth, short newYear) {
		_dateOfBirth.day = newDay;
		_dateOfBirth.month = newMonth;
		_dateOfBirth.year = newYear;
	}
	void SetContacts(string newAddress, string newPhone, string newEmail) {
		_contacts.address = newAddress;
		_contacts.phone = newPhone;
		_contacts.email = newEmail;
	}
	string GetFirstName() {}
	string GetLastName() {}
	string GetDateOfBirth() {
		return _dateOfBirth.ToString();
	}
	string GetContacts() {
		return _contacts.ToString();
	}
};
#pragma once
#include <iostream>
using namespace std;

class Student {
	char* name;
	int year;
	char* group;
	char* institution;

public:
	Student();
	Student(const char* newName, int newYear, const char* newGroup, const char* newInstitution);
	Student(const Student& obj);
	const char* getName() { return name; }
	const int getYear() { return year; }
	const char* getGroup() { return group; }
	const char* getInstitution() { return institution; }
	void setName(const char* newName) { delete[] name; createRecord(newName, 1); }
	void setYear(int newYear) { (newYear < 1950 or newYear > 2010) ? year = 0 : year = newYear; }
	void setGroup(const char* newGroup) { delete[] group; createRecord(newGroup, 2); }
	void setInstitution(const char* newInstitution) { delete[] institution;	createRecord(newInstitution, 3); }
	void print();
	void createRecord(const char* data, int sel);
	~Student();
};
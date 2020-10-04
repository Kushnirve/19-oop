#pragma once
#include <iostream>
using namespace std;

class Student {
	char* name;
	int year;
	char* group;	
	char* inst;

public:
	Student();
	Student(const char* newName, int newYear, const char* newGroup, const char* newInst);

	void setName(const char* newName){
		delete[] name;
		createRecord(newName, 1);
	}

	void setYear(int newYear) {
		if (newYear < 1950 or newYear > 2010) newYear = 0;
		year = newYear;
	}

	void setGroup(const char* newGroup) {
		delete[] group;
		createRecord(newGroup, 2);
	}

	void setInst(const char* newInst) {
		delete[] inst;
		createRecord(newInst, 3);
	}

	const char* getName() {
		return name;
	}

	const int getYear() {
		return year;
	}

	const char* getGroup() {
		return group;
	}

	const char* getInst() {
		return inst;
	}

	void show();	
	void createRecord(const char* data, int sel);
	~Student();
};
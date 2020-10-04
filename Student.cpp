#include "Student.h"

Student::Student() {
	name = nullptr;
	year = 0;
	group = nullptr;
	inst = nullptr;
	cout << "Constructor" << endl;
}

Student::Student(const char* newName, int newYear, const char* newGroup, const char* newInst) {
	setName(newName);
	setYear(newYear);
	setGroup(newGroup);
	setInst(newInst);
	cout << "Constructor" << endl;
}

void Student::show() {
	cout << name << " " << year << " " << group << " " << inst << endl;
}

void Student::createRecord(const char* data, int sel) {
	char* tmp;
	int length = strlen(data);
	tmp = new char[length + 1];
	for (int i = 0; i <= length; i++) tmp[i] = data[i];
	switch (sel) {
	case 1:
		name = tmp;
		break;
	case 2:
		group = tmp;
		break;
	case 3:
		inst = tmp;
		break;
	}
}

Student::~Student() {
	if (name != nullptr) delete[] name;
	if (group != nullptr) delete[] group;
	if (inst != nullptr) delete[] inst;
	cout << "Destructor" << endl;
}

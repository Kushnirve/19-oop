#include "Student.h"

Student::Student() {
	name = new char[1];
	group = new char[1];
	institution = new char[1];
	name[0] = '\0';
	year = 0;
	group[0] = '\0';
	institution[0] = '\0';
	cout << "Consructor 0" << endl;
}

Student::Student(const char* newName, int newYear, const char* newGroup, const char* newInstitution) {
	setName(newName);
	setYear(newYear);
	setGroup(newGroup);
	setInstitution(newInstitution);
	cout << "Consructor 1" << endl;
}

Student::Student(const Student& obj) {
	createRecord(obj.name, 1);
	createRecord(obj.group, 2);
	createRecord(obj.institution, 3);
	year = obj.year;
	cout << "Copiyng Consructor" << endl;
};

void Student::print() {
	cout << name << "|" << year << "|" << group << "|" << institution << endl;
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
		institution = tmp;
		break;
	}
}

Student::~Student() {
	if (name != nullptr) delete[] name;
	if (group != nullptr) delete[] group;
	if (institution != nullptr) delete[] institution;
	cout << "Destructor" << endl;
}
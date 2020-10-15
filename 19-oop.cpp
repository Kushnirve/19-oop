#include "Student.h"

int main() {
	Student student1;
	student1.setName("Ivanov Vasiliy");
	student1.setYear(2003);
	student1.setGroup("Metallica");
	student1.setInstitution("KPI");
	student1.print();

	Student student2("Petrov Fedya", 1982, "Risk group", "IT Step Academy");
	student2.print();

	Student	student3 = student1;
	student3.print();

	Student	student4(student2);
	student4.print();
}
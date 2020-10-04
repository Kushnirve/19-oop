#include "Student.h"

int main(){
	Student student1;
	student1.setName("Ivan Abram");
	student1.setYear(1998);
	student1.setGroup("Rpi19");
	student1.setInst("Shevchenko");
	student1.show();

	Student student2("Fedor Petrov", 1999, "Rpo07", "Kozubinski");
	student2.show();
}
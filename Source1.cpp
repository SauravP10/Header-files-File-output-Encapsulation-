

#include "Header1.h"
#include "faculty.h"
#include "student.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	Members m;
	
	Student stu("Max","underwoo", 783, "Science");
	stu.printMembers();
	stu.setLname("Underwood");
	stu.printMembers();
	//Example for print Member Function
	
	Faculty fac;
	
	//Creating objects of Members, Student and Faculty


	ifstream ins;
	ofstream outs;
	//File stream objects

	ifstream fin("input.txt");

	fac.readWriteMembers(ins, outs);
	stu.readWriteMembers(ins, outs);
	//Writing output to files.
	getchar();
}

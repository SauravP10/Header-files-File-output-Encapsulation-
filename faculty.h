#ifndef FACULTY_H
#define FACULTY_H

#include"Header1.h"
#include<fstream>
#include <string>
#include<iostream>
using namespace std;

class Faculty : public Members {
private:
	string salary;

public:
	Faculty();
	Faculty(string f_firstName, string f_lastName, int f_idNum, string salary1);

	string fname, lname, id, type;

	void printMember() {
		Members::printMember();
		cout << "Faculty name is:" << firstName << " " << lastName << "." " " << "ID is:" << idNum << "." " " << "Salary is:" << salary << "." << endl;
	}

	void readWriteMembers(ifstream& instream,ofstream& outstream) {
		
		instream.open("input.txt");
		if (!instream) {
			cout << "File cannot be opened";
			system("pause");
		}

		int line = 0;
		
		outstream.open("facultyoutput.txt");
		while (!instream.eof()) {
			
			instream >> type >> fname >> lname >> id >> salary;

			if (type == "f") {
								
				if (!outstream) {
					cout << "File cannot be opened";
					system("pause");
				}
				outstream <<"Faculty name is:" << fname << " " << lname <<"." " " <<"ID is:" << id <<"." " " <<"Salary is:"<< salary << "." << endl;
				//cout << "Faculty name is:" << fname << " " << lname << "." " " << "ID is:" << id << "." " " << "Salary is:" << salary << "." << endl;
				//To check output on Console.		
			}
			
		}outstream.close();
		instream.close();
	}

	string getSalary();
	void setSalary(string theSalary);

};

Faculty::Faculty() {
	firstName = ' ';
	lastName = ' ';
	idNum = ' ';
	salary = ' ';
}
Faculty::Faculty(string f_firstName, string f_lastName, int f_idNum, string salary1) {
	firstName = f_firstName;
	lastName = f_lastName;
	idNum = f_idNum;
	salary = salary1;
}

string Faculty::getSalary() {
	return salary;
}
void Faculty::setSalary(string theSalary) {
	salary = theSalary;
}

#endif // !FACULTY_h
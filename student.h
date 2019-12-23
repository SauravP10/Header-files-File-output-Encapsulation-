#ifndef STUDENT_H
#define STUDENT_H

#include"Header1.h"
#include<fstream>
#include <string>
#include<iostream>
using namespace std;

class Student : public Members {
private:
	string major;

public:
	Student();
	Student(string s_firstName, string s_lastName, int s_idNum, string major1);

	string fname, lname, salary, id, type;

	void printMembers() {
		//Members::printMember();
		cout << "Student name is:" << firstName << " " << lastName << "." " " << "ID is:" << idNum << "." " " << "Major is:" << major << "." << endl;
	}

	void readWriteMembers(ifstream& instream, ofstream& outstream) {

		instream.open("input.txt");
		if (!instream) {
			cout << "File cannot be opened";
			system("pause");
		}

		int line = 0;
		
		outstream.open("studentoutput.txt");
		while (!instream.eof()) {
			
			instream >> type >> fname >> lname >> id >> major;

			if (type == "s") {

				if (!outstream) {
					cout << "File cannot be opened";
					system("pause");
				}
				outstream << "Student name is:" << fname << " " << lname << "." " " << "ID is:" << id << "." " " << "Major is:" << major << "." << endl;
				//cout << "Student name is:" << fname << " " << lname << "." " " << "ID is:" << id << "." " " << "Major is:" << major << "." << endl;
				//To check output on Console.
			}

		}outstream.close();

	}

	string getMajor();
	void setMajor(string theMajor);
};

Student::Student() {
	firstName = ' ';
	lastName = ' ';
	idNum = ' ';
	major = ' ';
}
Student::Student(string s_firstName, string s_lastName, int s_idNum, string major1) {
	firstName = s_firstName;
	lastName = s_lastName;
	idNum = s_idNum;
	major = major1;
}

string Student::getMajor() {
	return major;
}
void Student::setMajor(string theMajor) {
	major = theMajor;
}

#endif // !STUDENT_h
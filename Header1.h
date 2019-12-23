#ifndef HEADER1_H
#define HEADER1_H

#include <string>
#include<fstream>
#include<iostream>
using namespace std;

class Members {

public:

	string firstName, lastName, idNum;

	Members();
	Members(string firstN,string lastN, int idN);

	void printMember() const {
		cout << firstName << "\t" << lastName << "\t" << idNum << "\t" << endl;;
	}

	void readWriteMembers(ifstream& instream, ofstream& outstream) {

	}

	string getFname();
	void setFname(string fname);

	string getLname();
	void setLname(string lname);

	string getID();
	void setID(string id);
	
};
// Initializing First Name, Last Name and ID of String Type. Defining Default and Parametrized constructor.
// Definition of printMember() and readWriteMembers()
// Defining Getters and Setters.

Members :: Members() {
	firstName = ' ';
	lastName = ' ';
	idNum = ' ';
}
Members :: Members(string firstN,string lastN, int idN) {
	firstName = firstN;
	lastName = lastN;
	idNum = idN;
}
//Declaring Constructor

string Members :: getFname() {
	return firstName;
}
void Members :: setFname(string fname){
	firstName = fname;
}

string Members :: getLname() {
	return lastName;
}
void Members :: setLname(string lname) {
	lastName = lname;
}

string Members :: getID() {
	return idNum;
}
void Members :: setID(string id) {
	idNum = id;
}

//Declaring Getters and Setters
#endif // !HEADER_H

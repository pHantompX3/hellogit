#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

Student::Student() {
	StudentFname = " ";
	StudentLname = " ";
	StudentID = 0;
}
void Student::setStudentFname(string fname){
	StudentFname = fname;
}
void Student::setStudentLname(string lname){
	StudentLname = lname;
}
void Student::setStudentID(int SID){
	StudentID = SID;
}
string Student::getName() {
	return StudentFname + " " + StudentLname;
}
int Student::getID() const {
	return StudentID;
}

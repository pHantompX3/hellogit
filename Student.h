#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {

public:
	Student();
	void setStudentFname(string fname);
	void setStudentLname(string lname);
	void setStudentID(int SID);
	
	string getName();

	int getID() const;
	
private:
	int StudentID;
	string StudentFname;
	string StudentLname;
};


#endif


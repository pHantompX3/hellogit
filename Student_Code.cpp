#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
using namespace std;

int main()
{
	vector<Student> StudentVector;

	Student A;
	Student B;
	Student C;
	Student D;
	
	string a1 = "James";
	string a2 = "Hart";
	int a3 = 411004523;

	string b1 = "Jess";
	string b2 = "Hart";
	int b3 = 412005463;

	string c1 = "Jen";
	string c2 = "Hart";
	int c3 = 413004512;

	string d1 = "Jim";
	string d2 = "Hart";
	int d3 = 414003223;

	A.setStudentFname(a1);
	A.setStudentLname(a2);
	A.setStudentID(a3);

	B.setStudentFname(b1);
	B.setStudentLname(b2);
	B.setStudentID(a3);

	C.setStudentFname(c1);
	C.setStudentLname(c2);
	C.setStudentID(a3);

	D.setStudentFname(d1);
	D.setStudentLname(d2);
	D.setStudentID(d3);

	

	StudentVector.push_back (A);
	StudentVector.push_back (B);
	StudentVector.push_back (C);
	StudentVector.push_back (D);

	
	for(int x=0; x<StudentVector.size(); x++){

		cout << endl << "Student name is: " << StudentVector[x].getName() << endl << endl << "Student ID is: " << StudentVector[x].getID() << endl << endl;

	}

int temp = 0;

cout << endl << endl << "enter 0 to end program: ";
cin >> temp;

return temp;
}

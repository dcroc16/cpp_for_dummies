//
// PassObjVal - attempts to change the value of an object
//              in a function fail when the object is passed
//              by value
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student
{
public:
	int semesterHours;
	float gpa;
};

void someFn(Student copyS)
{
	copyS.semesterHours = 10;
	copyS.gpa           = 3.0;
	cout << "The value of copyS.gpa is: "
	     << copyS.gpa << endl;
}

int main(int argc, char* pArgs[])
{

	Student s;
	s.gpa = 0.0;

	cout << "The value of s.gpa = " << s.gpa << endl;

	cout << "Calling someFn(Student)" << endl;
	someFn(s);
	cout << "Returned from someFn(Student) " << endl;

	cout << "The value of s.gpa is still " << s.gpa << endl;

	return 0;
}
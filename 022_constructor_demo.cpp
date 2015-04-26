//
// LinkedListData - store data in a linked list of objects
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

// NameDataSet - stores a person's name (these
//               objects could easily store any
//               other information desired.)

class Student
{
public:
	Student()
	{
		cout << "constructing student" << endl;
		semesterHours = 0;
		gpa = 0.0;
	}
	// ...other public members...
protected:
	int semesterHours;
	float gpa;
};

int main(int nNumberofArgs, char* pszArgs[])
{
	cout << "Creating a new Student object" << endl;
	Student s;

	cout << "Creating a new object off the heap" << endl;
	Student* pS = new Student;

	cout << "Creating an array of 5 Student objects"
	     << endl;
	Student sArray[5];

	return 0;
}
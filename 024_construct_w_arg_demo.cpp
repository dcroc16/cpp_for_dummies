//
// ConstructorWArg - a class may pass along args
//                   to the members' constructor
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
//#include <string.h>
using namespace std;

class Student
{
public:
	Student( const char* pName) 
	{ 
		cout << "constructing student" << pName << endl; 
		name = pName;
		semesterHours = 0;
		gpa = 0.0;
	}
	~Student() { cout << "destructing student" << endl; }
// ...other public members...
protected:
	string name;
	int semesterHours;
	float gpa;
};

int main(int argcs, char* pszArgs[])
{
	// create a student locally and one off the heap
	Student s1("Chester");
	Student* pS2 = new Student("Trude");

	//cout << "Student 1 Name: " << s1.name << endl;
	//cout << "Student 2 Name: " << pS2->name << endl;

	// be sure to delete the heap student
	delete pS2;

	return 0;
}
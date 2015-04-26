//
// ConstructingMembers - a class may pass along arguments
//                       to the members' constructors
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int nextStudentId = 1000; // first legal Student ID

class StudentId
{
public:
	// default constructor assigns id's sequentially
	StudentId()
	{
		value = nextStudentId++;
		cout << "take next student id " << value << endl;
	}

	// int constructor allows user to assign id
	StudentId(int id)
	{
		value = id;
		cout << "assign student id " << value << endl;
	}
protected:
	int value;

};

class Student
{
public:
	
	Student( const char* pName) 
	{ 
		cout << "constructing student" << pName << endl; 
		name = pName;

	}
// ...other public members...
protected:
	string name;
	StudentId id; 
};

int main(int argcs, char* pszArgs[])
{
	// create a student locally and one off the heap
	Student s1("Chester");
	Student s2("Trude");

	//cout << "Student 1 Name: " << s1.name << endl;
	//cout << "Student 2 Name: " << s2.name << endl;

	return 0;
}
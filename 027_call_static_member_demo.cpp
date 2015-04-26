//
// CallStaticMember - demonstrate two ways to call a
//                    static member function
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;


class Student
{
public:
    // conventional constructor	
	Student( const char *pN = "no name") : name(pN)
	{ 
		cout << "constructed" << name << endl;
	}

	// copy constructor
	Student (Student& s)
	    : name("Copy of " + s.name), id(s.id)
	{
		cout << "constructed " << name << endl;
	}

	~Student()
	{
		cout << "Destructing " << name << endl;
	}
// ...other public members...
protected:
	string name;
	int id; 
};

// fn - recieves its argument by value

void fn(Student copy)
{
	cout << "In function fn()" << endl;
}

int main(int nNumberofArgs, char* pszArgs[])
{
	Student chester("Chester", 1234);
	cout << "Calling fn()" << endl;
	fn(chester);
	cout << "Back in main()" << endl;


	return 0;
}
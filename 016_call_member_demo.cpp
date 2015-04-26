//
// CallMemberFunction - define and invoke a function
// that's a member of the class Student
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// prototype declarations
// ...

class Student
{
public:
	// add a completed course to the record
	float addCourse(int hours, float grade)
	{
		// calculate the sum of all courses
		// times the averge grade
		float weightedGPA;
		weightedGPA = semesterHours * gpa;

		// now add in the new course
		semesterHours += hours;
		weightedGPA += grade * hours;
		gpa = weightedGPA / semesterHours;

		// return new gpa
		return gpa;
	}

	int semesterHours;
	float gpa;

};


int main(int nNumberofArgs, char* pszArgs[])
{
	// create a Student object to initialize it
	Student s;
	s.semesterHours = 3;
	s.gpa = 3.0;

	// output the values before the method call

	cout << "Before" << endl;
	cout << "-------------------------" << endl;
	cout << "semesterHours: " << s.semesterHours << endl;
	cout << "gpa:           " << s.gpa << endl;

	cout << "\nAdding 3 hours with a grade of 4.0\n" << endl;
	s.addCourse(3, 4.0);

	cout << "After" << endl;
	cout << "-------------------------" << endl;
	cout << "semesterHours: " << s.semesterHours << endl;
	cout << "gpa:           " << s.gpa << endl;




    return 0;

}


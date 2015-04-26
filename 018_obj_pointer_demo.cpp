//
// ObjPrt - define and use a pointer to a
//          Student Ojbect
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

#include "018_students.h"

int main(int nNumberofArgs, char* pszArgs[])
{

	Student s;
	s.gpa = 3.0;

	Student* pS;

	pS = &s;

	cout << "s.gpa: " << s.gpa << endl;
	cout << "pS->gpa: " << pS->gpa << endl;

	return 0;
}
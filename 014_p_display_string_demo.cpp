//
// DisplayString - display an array of char using
//                 both pointer and array index
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// prototype declarations
// ...

int main(int nNumberofArgs, char* pszArgs[])
{
	// declare a string
	const char* szString = "Randy";
	cout << "The array is '" << szString << "'" << endl;

	// display the szString as an array
	cout << "Display the string as an array: ";
	for (int i = 0; i < 5; i++)
	{
		cout << szString[i];
	}
	cout << endl;

	// now using typical pointer arithmetic
	cout << "Display the string as a pointer: ";
	const char* pszString = szString;
	while(*pszString)
	{
		cout << *pszString++;
	}
	cout << endl;

    // wait until user is ready before terminating program
    return 0;

}


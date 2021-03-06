//
// DisplayString - demonstrate the use of arrays
//             by reading a sequence of integers
//             and then displaying them and their sum
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// prototype declarations
void displayStringArray( char* charArray[]);

int main(int nNumberofArgs, char* pszArgs[])
{
	cout << endl << endl;
	// Null terminated by String
	// char charMyName[] = {'D', 'A', 'V', 'I', 'D', '\0'};
	//   char szMyName[] = "DAVID";
	// now output the values and the sum of the values
	displayStringArray(pszArgs);
	cout << endl;

    // wait until user is ready before terminating program
    return 0;

}

// displayStringArray - display an array of characters
//                    by outputting one character at 
//                    a time terminated with a null char NTBS

void displayStringArray( char* charArray[])
{
	for ( int i = 0; charArray[i]; i++)
	{
		cout << charArray[i];
	}
}


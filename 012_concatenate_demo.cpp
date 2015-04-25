//
// concatenate - concatenate two strings
//               with a " - " in the middle
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// prototype declarations
void concatString( char szTarget[], const char szSource[]);

int main(int nNumberofArgs, char* pszArgs[])
{
	// read in the first string
	char szString1[260];
	cout << "Enter String #1: ";
	cin.getline(szString1, 128);

	// read in the second string
	char szString2[128];
	cout << "Enter String #2: ";
	cin.getline(szString2, 128);

	// now concatenate a " - " onto the first......
	concatString(szString1, " - ");

	// now add the second string...
	concatString(szString1, szString2);

	// ... and display the result
	cout << "\n" << szString1 << endl;

    // wait until user is ready before terminating program
    return 0;

}

// concatString - concatenate the szSource String
//                onto the end of the szTarget String

void concatString( char szTarget[], const char szSource[])
{
	// find the end of teh first string
	int targetIndex = 0;
	while (szTarget[targetIndex]){		
		targetIndex++;
	}

	// tack the second onto the end of the first
	int sourceIndex = 0;
	while (szSource[sourceIndex])
	{
		szTarget[targetIndex] = szSource[sourceIndex];
		targetIndex++;
		sourceIndex++;
	}

	//tack on the terminating null
	szTarget[targetIndex] = '\0';
}
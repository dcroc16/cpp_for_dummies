//
// ArrayDemo - demonstrate the use of arrays
//             by reading a sequence of integers
//             and then displaying them and their sum
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// prototype declarations
void displayCharArray( char charArray[], int sizeOfArray);

int main(int nNumberofArgs, char* pszArgs[])
{
	int numberOfValues = 5;

	char charMyName[] = {'D', 'A', 'V', 'I', 'D'};

	// now output the values and the sum of the values
	displayCharArray(charMyName, numberOfValues);
	cout << endl;

    // wait until user is ready before terminating program
    return 0;

}

// displayCharArray - display an array of characters
//                    by outputting one character at 
//                    a time
void displayCharArray( char charArray[], int sizeOfArray)
{
	for ( int i = 0; i < sizeOfArray; i++)
	{
		cout << charArray[i];
	}
}
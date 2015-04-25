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
	// input the loop count
	cout << "This program sums values entered by the users\n";
	cout << "Teminate the loop by entering a negative number\n";
	cout << endl;

	// read numbers to be summed from the user into a local array
	int inputValues[128];
	int numberOfValues = readArray(inputValues, 128);

	// now output the values and the sum of the values
	displayArray(inputValues, numberOfValues);
	cout << "The sum is "
	     << sumArray(inputValues, numberOfValues)
	     << endl;

    // wait until user is ready before terminating program
    return 0;

}


void displayCharArray( char charArray[], int sizeOfArray)
{
	
}

// readArray - read integers from the user into
//             'integerArray' until user enters neg.
//             return the number of maxNumElements stored

int readArray( int integerArray[], int maxNumElements)
{
	int numberOfValues;
	for(numberOfValues = 0; numberOfValues < maxNumElements; numberOfValues++)
	{
		// fetch another number
		int integerValue;
		cout << "Enter next number: ";
		cin >> integerValue;

		// if it's negative break
		if ( integerValue < 0)
		{
			break;
		}

		// ...Otherwise store the number into the storage array
		integerArray[numberOfValues] = integerValue;
	}
	return numberOfValues;
}

// sumArray - reutrn the sum of the msembers of an integer Array
int sumArray( int integerArray[], int numElements)
{
	int accumulator = 0;
	for ( int i = 0; i < numElements; i++)
	{
		accumulator += integerArray[i];

	}
	return accumulator;
}

// displayArray - display the members of an array of length sizeOfFloatArray
void displayArray( int integerArray[], int numElements)
{
	cout << "The value of the array is: " << endl;
	for(int i = 0; i < numElements; i++)
	{
		cout << i << ": " << integerArray[i] << endl;
	}
	cout << endl;

}


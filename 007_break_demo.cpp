//
// BreakDemo - input a series of numbers.
//             Continue to accumulate the sum
//             of these numbers until user enters
//             a negative number
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
	// input the loop count
	int accumulator = 0;
	cout << "This program sums values entered"
	     << "by the user\n";
	cout << "Terminate the loop by entering"
	     << "a negative number" << endl;
	// loop "forever"
	for(;;)
	{
		// fetch another number
		int nValue = 0;
		cout << "Enter a number: ";
		cin >> nValue;
		if (nValue < 0)
		{
			// ...then exit
			break;
		}

		// ...otherwise add the number to the accumulator
		accumulator += nValue;
	}

	// output the accumulated result
	cout << "The total is: " << accumulator << endl;

    // wait until user is ready before terminating program
    return 0;

}
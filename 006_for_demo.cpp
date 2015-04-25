//
// forDemo1 - input a loop count. Loop while
//             outputting astring arg number of times.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // input the loop count
	int nLoopCount;
	cout << "Enter loop count: ";
	cin >> nLoopCount;

	// count up to the loop count
	for (int i = 0; i <= nLoopCount; i++)
	{
		cout  << "We've finished " << i
		      << " loops" << endl;
	}

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    return 0;

}
//
// PrintArgs - write the arguments to the program
//             to the standard output
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// prototype declarations
// ...

int main(int nNumberofArgs, char* pszArgs[])
{
	// print a warning banner
	cout << "The arguments to " << pszArgs[0] << " are:\n";

	// now write out the remaining arguments
	for (int i = 1; i < nNumberofArgs; i++)
	{
		cout << i << ": " << pszArgs[i] << "\n";
	}

	// that's it
	cout << "that's it!" << endl;

    return 0;

}


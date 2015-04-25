//
// Layout - this program tries to give the
//          reader an idea of the layout of
//          the local memory in the compiler
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// prototype declarations
// ...

int main(int nNumberofArgs, char* pszArgs[])
{
	int start;
	int n;
	long l;
	long long ll;
	float f;
	double d;
	long double ld;
	int end;

	// set output to hex mode
	cout.unsetf(ios::dec);
	cout.setf(ios::hex);
    
    // output the address of each variable
    // inorder to get an idea of how they 
    // are laid out in memory

    cout << "--- = " << &start << endl;
	cout << "&n  = "  << &n    << endl;
	cout << "&l  = "  << &l    << endl;
	cout << "&ll = " << &ll    << endl;
	cout << "&f  = "  << &f    << endl;
	cout << "&d  = "  << &d    << endl;
	cout << "&ld = " << &ld    << endl;
	cout << "--- = " << &end   << endl;

    // wait until user is ready before terminating program
    return 0;

}


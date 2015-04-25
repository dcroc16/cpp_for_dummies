//
// bitTest - intialize two variables and out the
//           results of applying the ~, &, |, and ^
//           operations
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // set output format to hexadecimal
    cout.unsetf(cout.dec);
    cout.setf(cout.hex);

    // intiialize two arguments
    int nArg1 = 0x78ABCDEF;
    int nArg2 = 0x12345678;

    // now perform each operation in turn
    // first the unary NOT operator
    cout << " nArg1 = 0x" << nArg1 << endl;
    cout << "~nArg1 - 0x" << ~nArg1 << "\n" << endl;
    cout << " nArg2 = 0x" << nArg2 << endl;
    cout << "~nArg2 - 0x" << ~nArg2 << "\n" << endl;

    // now the binary operators
    cout << "   0x" << nArg1 << "\n"
         << "&  0x" << nArg2 << "\n"
         << "  ------------" << "\n"
         << "   0x" << (nArg1 ^ nArg2) << "\n"
         << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    return 0;

}
//
// SavingsClassInline - invoke a member function
//                      that's both declared and defined
//                      within the class Savings
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

#include "017_savings.h"

int main(int nNumberofArgs, char* pszArgs[])
{

	Savings s;
	s.accountNumber = 123456;
	s.balance = 0.0;

	cout << "Depositing 10 to account "
	     << s.accountNumber << endl;
	s.deposit(10);
	cout << "Balance is " << s.balance << endl;




	return 0;
}
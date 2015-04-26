//
// LinkedListData - store data in a linked list of objects
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

// NameDataSet - stores a person's name (these
//               objects could easily store any
//               other information desired.)

class NameDataSet
{
public:
	string sName;
	// link to the next entry in the list
	NameDataSet* pNext;
};

// the pointer to the first entry in the list
NameDataSet* pHead = 0;

// add - add a new member to the linked list

void add(NameDataSet* pNDS)
{
	// point the current entry to the beginning of 
	// the list
	pNDS->pNext = pHead;

	// point the head pointer to the current entry
	pHead = pNDS;
}

// getData - read a name and social ssn; return
//           null if no more to read

NameDataSet* getData()
{
	string name;
	cout << "\nEnter Name: ";
	cin >> name;

	if (name == "exit")
	{
		// return a null to terminate the input
		return 0;
	}

	// get a new entry and fill in values
	NameDataSet* pNDS = new NameDataSet;
	pNDS->sName = name;
	pNDS->pNext = 0; // zero link

	// return the address of the object created
	return pNDS;
}

int main(int argc, char* pArgs[])
{
	cout << "Read in names of students\n"
	     << "Enter 'exit' for the first name to exit"
	     << endl;

	// create (another) NameDataSet Object
	NameDataSet* pNDS;
	while(pNDS = getData())
	{
		// add it to the list of NameDataSet objects
		add(pNDS);
	}

	// list out the names
	cout << "\nEntries: " << endl;
	for (NameDataSet *pIter = pHead; pIter; pIter = pIter->pNext)
	{
		// display name of current entry
		cout << pIter->sName << endl;
	}

	return 0;
}
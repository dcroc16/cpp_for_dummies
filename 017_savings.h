//
// Savings - define a class that includes the ability
//           to make a deposit
//

// prototype declarations
// ...

class Savings
{
public:
	
	float deposit(int amount)
	{
		balance += amount;
		return balance;
	}

	unsigned int accountNumber;
	float balance;

};


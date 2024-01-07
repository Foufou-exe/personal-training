// Section 8 Challenge
/*
	For this programme, I'll be using American dollars and cents.
	
    Write a program that asks the user to enter the following data:
	an integer representing the number of cents
    	
	You can assume that the number of cents entered is greater than or equal to zero.
    
	The program must then show the user how to make this change.
	
	In the United States :
		1 dollar equals 100 cents
		1 quarter is 25 cents
		1 dime is worth 10 cents
		1 nickel is worth 5 cents, and
		1 penny is worth 1 cent.
		
	Here's an example:
	
	Enter an amount in cents: 92
	
	You can provide this change as follows:
	dollars: 0
	quarters: 3
	cents: 1
	nickels: 1
	cents : 2
	
	Feel free to use your own monetary system.
	Also think about how you could solve the problem using the modulo operator.

	Have fun and test your programme!

*/
#include <iostream>

using namespace std;

int main() {

    // Value initialised by pieces
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};
    const int penny_value{1};

    // Asks the user to enter the amount
    int change_amount{};
    cout << "Enter an amount in cents: ";
    cin >> change_amount;

    // Calculates the change
    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    // Calculate the number of dollars
    dollars = change_amount / dollar_value;
    balance = change_amount - (dollars * dollar_value);
    // Calculation of the number of quarters
    quarters = balance / quarter_value;
    balance -= quarters * quarter_value;
    // Calculation of the number of dimes
    dimes = balance / dime_value;
    balance -= dimes * dime_value;
    // Calculation of the number of nickels
    nickels = balance / nickel_value;
    balance -= nickels * nickel_value;
    // Calculation of the number of pennies
    pennies = balance;

    cout << "You can provide this modifi(cation as follows: " << endl;
    cout << "dollars : " << dollars << endl;
    cout << "quarters : " << quarters << endl;

    cout << "dimes : " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies : " << pennies << endl;

    cout << endl;
    
    return 0;
}




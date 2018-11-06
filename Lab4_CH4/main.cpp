// Larry Delgado
// CO INFO 739
// Chapter 4 Lab 4
// Bank Charges
#include<iostream>
using namespace std;

int main()
{
	//Defining the variables for computing
	const double MONTHLY_FEE = 10;
	const double MINIMUM_BALANCE = 400;
	const double BALANCE_CHARGE = 15;
	double	balance,
			totalMonthlyFee,
			checksCost;
	int		checks;
			

	//Asking for User's Inputs by Displaying questions
	cout << "Please enter your beginning balance: \n";
	cin >> balance;

	if (balance < 0)
		cout << "Your balance is overdrawn! \n" << endl;
	
		//If checks are negative we ask the user to input the number again	
	cout << "Please enter the number of checks written \n";
	cin >> checks;

	if (checks < 0)
	{
		cout << "Please enter a positive value: \n";
		cin >> checks;
	}
		
	//Calculating the Total fee by adding $10 and checks
	//Also multiplying the checks by amount needed
	if (checks < 20)
		checksCost = checks * 0.10;
	else if (checks < 40)
		checksCost = checks * 0.08;
	else if (checks < 60)
			checksCost = checks * 0.06;
	else 
		checksCost = checks * 0.04;

	//Calculating for balances less than 400
	if (balance <= MINIMUM_BALANCE)
		totalMonthlyFee = BALANCE_CHARGE + MONTHLY_FEE + checksCost;
	else
		totalMonthlyFee = MONTHLY_FEE + checksCost;
	
	//Displaying the total monthly fee after calculations
	cout << "--------------------------------\n";
	cout << "Your monthly fee is $"<< MONTHLY_FEE << " \n";
	cout << "Total charge for checks is: $ " << checksCost << endl;
	cout << "Your total bank's service fees for the month is: $ " << totalMonthlyFee << endl;
	
	//-------------------
	system("pause");
	return 0;
}

// Larry Delgado
// 9-17-18
// Lab 13 Stock Commission
// CO INFO 739

#include <iostream>

using namespace std;

int main()
{
	//Defining the variables being used for calculating
	short int shareAmount = 750;
	double pricePerShare = 35.00;
	double commission = 0.02; // 2 % commission


	double shareCost = shareAmount * pricePerShare; //Calculating the amount paid for the stocks without commission
	double commissionAmount = commission * shareCost; //Calculating the commission amount
	double totalPaid = shareCost + commissionAmount; //Calculating the amount paid for the stocks with the commission


	//Information to be displayed
	cout << "The amount paid for the stock alone(without the commision) : $ " << shareCost << endl;
	cout << "The amount of comission: $ " << commissionAmount << endl;
	cout << "The total amount paid (for plus the commission) : $ " << totalPaid << endl;


	system("pause");
	return 0;
}


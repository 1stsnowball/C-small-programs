//Funtions CH6

#include<iostream>
using namespace std;
double add(double, double); //prototype
void displayMath(double, double);
bool isEven(int);

int main()
{
	double income1, income2;
	cout << "Give me two incomes. I'll give you the total: \n";
	cin >> income1 >> income2;
	//call function
	cout << "Total income is $ " << add(income1 ,income2) << endl;
	cout << "Total income is $ " << add(3452, 6523) << endl;
	
	//----------
	double value1, value2;
	cout << "Enter two numbers: ";
	cin >> value1 >> value2;
	displayMath(value1, value2);

	int num;
	cout << "Enter an integer to see if it is odd or even: ";
	cin >> num;
	if(isEven(num))
		cout << num << "is even." << endl;
	else 
		cout << num << "is odd." << endl;
	
	return 0;	
}

double add (double num1, double num2)
{
	return num1+ num2;
}

void displayMath()
{
	double total = add(num1 , num2);
	cout << num1 << " + " << num2 << " = " << total << endl;
}

bool isEven(int num)
{
	if(num % 2 == 0)
		return true;
	return false;
	
}
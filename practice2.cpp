//Larry Delgado
//9-12
//Data Types Class Practice


#include<iostream>
#include<string>
using namespace std;
int main()
{
	//Calculate income
	const double BONUS = 10;
	double hrlyRate, hrsWorked, income;
	hrsWorked = 2.5;
	hrlyRate = 10.25;
	income = hrlyRate *hrsWorked;
	
	cout << "You made $ "<< income << endl;
	cout << "income size is " << sizeof(income) << " btyes" << endl;


	system("pause");
	return 0;
}
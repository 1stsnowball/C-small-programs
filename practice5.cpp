//10-8-18
//Conditionals

#include<iostream>
#include<string>
using namespace std;

int main()
{
	double sales, bonus;
	const double BIG_SALES = 50000;
	string message;
	cout << "Enter the sales amount: "; 
	cin >> sales;
	if (sales > BIG_SALES)
		bonus = 1000;
	else bonus = 200;

	//Conditional operator
	message = sales > BIG_SALES ? "Great Job!" : "Can do better!";
	cout << "Bonus: $" << bonus << endl;
	cout << message << endl;
	//------------------------------
	double grade;
	char letterGrade;
	cout << "Enter a grade to see the letter grade: ";
	cin >> grade; 
	if (grade >= 90)
		letterGrade = 'A';
	else if (letterGrade >= 80)
		letterGrade = 'B';
	else if (letterGrade >= 70)
		letterGrade = 'C';
	else if (letterGrade >= 60)
		letterGrade = 'D';
	else
		letterGrade = 'F';
		//----------
		cout << endl << endl;
		system("pause");
		return 0;
}
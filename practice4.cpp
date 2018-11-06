//class practice
//expressions
#include<iostream>
#include<string>
#include<cstdlib> // for random
#include<iomanip> //for output formatting
#include<ctime> // to see random
using namespace std;


int main()
{
	string name1 = "Mary Gnzalez";
	string name2 = "David Johnson";
	double income1 = 3400.458765, income2 = 2343.34444;
	cout << setprecision(2) << fixed; // Use fixed to display decimals properly
	cout << setw(25) << left << setfill('.')<< name1  << "$"<<  income1 << endl; // Use left to left align
	cout << setw(25) << left << setfill('.') << name2 << "$" << income2 <<  endl << endl;
	//setfill adds dotted lines

	
	cout << "8 - 3 + 6 + 9 % 3 * 2 = " << 8 - 3 + 6 + 9 % 3 * 2 << endl; // 11
	cout << "3 + 5 - 8 / 5 % 2 = " << 3 + 5 - 8 / 5 % 2 << endl << endl; // 7

	//randoms
	srand(time(NULL)); //seeding the random number  DO THIS ONCE "it can be zero" 
	cout << rand() << endl << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	
	cout << endl;
	system("pause");
	return 0;
}
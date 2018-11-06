/*	Larry Delgado
	05-21-18
	Lab 7 Chapter 10
	Name Arranger
*/

#include<iostream>
#include<string>
using namespace std;

/* I wanted to use pointers since it was in Chapter 9 this function prototype will help arrange the name in the order last, first, and middle name,
stores it in an array, returns a pointer to the array */

char *nameArranger(const char *, const char *, const char *);

int main()
{
	const int SIZE = 30;

	char         fName[SIZE],
		mName[SIZE],
		lName[SIZE];

	char        *fullName = " ";

	cout << "\nName Arranger\n\n"
		<< "Enter your first name: ";
	cin.getline(fName, SIZE);

	cout << "Enter your middle name: ";
	cin.getline(mName, SIZE);

	cout << "Enter your last name: ";
	cin.getline(lName, SIZE);

	cout << "Your full name, sorted in the order of last name,\n"
		"first name, and middle name: "
		<< (fullName = nameArranger(fName, mName, lName))
		<< "\n\n";

	system("pause");
	return 0;
}

/*
This nameArranger function takes three pointers to C-string objects
as a argument. Then the names are concatenated and stored in a
char array. The pointer to the array is then returned.
 */

char *nameArranger(const char *fName, const char *mName,
	const char *lName)
{
	const int MAX_LETTERS = 50;

	char *fullName = new char[MAX_LETTERS]();

	strcat_s(fullName, MAX_LETTERS, lName);
	strcat_s(fullName, MAX_LETTERS, ", ");
	strcat_s(fullName, MAX_LETTERS, fName);
	strcat_s(fullName, MAX_LETTERS, " ");
	strcat_s(fullName, MAX_LETTERS, mName);

	return fullName;
}
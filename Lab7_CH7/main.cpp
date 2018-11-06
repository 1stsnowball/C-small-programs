/*
Larry Delgado
Lab 7 Chips and Salsa
5/14/18
COINFO 739
*/

#include<iostream>
#include<string> //We need the string class sort the salsas into their elements as strings.

using namespace std;

int main()
{
	int const ARRAYSIZE = 5; //Our constant array will contain the 5 elements for the array we will be using.
	string names[ARRAYSIZE] = { "mild", "medium", "sweet", "hot","zesty"}; //These are the salsas we will use.
	int jarsSold[ARRAYSIZE];
	int largest = 0, smallest = 0, total = 0; //These integer types will help with the end result. To calculate the highest sold, smallest, and total.
	double average = 0;//To use later to calculate average sold.

	for (int i = 0; i < ARRAYSIZE; i++) //This loop will run to capture the names of the salsa and store them.
	{
		cout << "Please enter the amount of jars sold for " << names[i] << ": " << endl;
		cin >> jarsSold[i];
		while (jarsSold[i] < 0)
		{
			cout << "Jars sold must be 0 or more.  Please re-enter: ";
			cin >> jarsSold[i];
		}
		
	}
	
/*//This loop will run to check elements in our jars sold array. If the amount of a salsa that was sold is less than
the first element of jarsSold array, then the smallest amount of salsa sold will be the new quantity i that was found in the loop.
Same goes for largest amount sold.
*/
	for (int i = 0; i < ARRAYSIZE; i++)   
	{
		if (jarsSold[i] < jarsSold[smallest])
			smallest = i;


		if (jarsSold[i] > jarsSold[largest])
			largest = i;
	}
	average = total / ARRAYSIZE; //By diving total and ArraySize we will find the average amount of salsa sold.
		
	/*
	Here we will display the salsas in a list and the amount that they were sold.
	Using the loop we can ouput them in order of their elements
	We also display the aberage amount sold
	Then We display the largest and smallest amount sold
	
	*/
	cout << "_____ Salsa Sold _____ \n";
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		cout << names[i] << ": " << jarsSold[i] << "\n";
	}

	cout << "Number of Jars Sold: " << total << "\n";
	cout << "Average number of jars Sold: " << average << "\n";
	cout << "Highest sold Salsa for " << names[largest] << " is: " << jarsSold[largest] << "\n";
	cout << "Least sold Salsa for " << names[smallest] << " is: " << jarsSold[smallest] << "\n";

	system("pause");
	return 0;
}

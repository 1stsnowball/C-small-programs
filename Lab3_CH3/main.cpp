//Larry Delgado
//9-26-19
//Lab 3 Pizza Pi

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	//Declaring the variables
	double pizzaDiameter, pizzaArea, pizzaRadius, numberOfSlices;

	//Permanent variables that should not change value
	const double PI = 3.14159;
	const double SLICE_AREA = 14.125;

	//Asking for Diameter
	cout << "Please enter the diameter of the pizza in inches: " << endl;
	cin >> pizzaDiameter;

	//Calculating numbers
	pizzaRadius = pizzaDiameter / 2.0;
	pizzaArea = PI * pow(pizzaRadius, 2.0);

	//Calculating the number of slices total and converting it to integer
	numberOfSlices = pizzaArea / SLICE_AREA;

	cout << fixed << setprecision(1);
	cout << "The total number of slices that can be taken is: " << numberOfSlices << " slices." << endl;



	system("pause");
	return 0;

}
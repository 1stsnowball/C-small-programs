//Larry Delgado
//10-24-18
//Lab 5 Hotel Occupancy

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int numFloors,
		numRooms,
		floorIteration,//Floors cannot be 0 for the loop
		numOccupied, //rooms occupied at that floor
		totalRooms,
		roomsOccupied, 
		roomsUnoccupied;
	const int FLOOR13 = 13,
		MIN_ROOMS = 10, //Must have 10 or more rooms
		NUM_ROOMS = 0,// initializing constant
		ROOMS_OCCUPIED = 0;//intializing constant
	double percentRoomsOccupied;
	totalRooms = NUM_ROOMS; //Initializing
	roomsOccupied = ROOMS_OCCUPIED; //Initializing 
	
	cout << "This is a Hotel Occupancy program\n";
	cout << "How many floors does the Hotel have?\n";
	cin >> numFloors;
	while (numFloors < 1)	//In case they repeat the mistake
	{
		cout << "Please enter a postive number!\n";
		cin >> numFloors;
	}

	for (floorIteration = 1; floorIteration <= numFloors; floorIteration++)
	{
		if (floorIteration == FLOOR13) //Skip the number 13 but not floor 13
		{
			floorIteration++;
			numFloors++; //Floor 13 becomes floor 14
		}
				
		cout << "\nHow many rooms does floor " << floorIteration << " have? Please enter 10 or more.\n";
		cin >> numRooms;
		while (numRooms < MIN_ROOMS) //In case they repeat the mistake
		{
			cout << "Please enter 10 or more rooms!\n";
			cin >> numRooms;
		}
		cout << "How many rooms are occupied on floor " << floorIteration << "?\n";
		cin >> numOccupied;
		while (numOccupied < 0 || numOccupied > numRooms)
		{
			if (numOccupied < 0)
			{
				cout << "Please enter a positive number!\n";
				cin >> numOccupied;
			}
			if (numOccupied > numRooms)
			{
				cout << "This number is greater than the available rooms!\n";
				cin >> numOccupied;
			}
		}
		roomsOccupied += numOccupied;
		totalRooms += numRooms;
		
		//Converting the variables to store a double value.
		//Multiply by 100 for percentage
		roomsUnoccupied = totalRooms - roomsOccupied;
		percentRoomsOccupied = (static_cast<double>(roomsOccupied) / static_cast<double>(totalRooms)) * 100;
	}
		
	cout << "\n------------------------------------------------\n";
	cout << "Amount of rooms: " << totalRooms << endl;
	cout << "Occupied Rooms: " << roomsOccupied << endl;
	cout << "Unoccupied rooms: " << roomsUnoccupied << endl;
	cout << "Percent of rooms occupied: " << percentRoomsOccupied << setw(3) << "%\n";
	//-------------------
	system("pause");
	return 0;
}




#include<iostream>
using namespace std;

//Function prototypes
void getJudgeData(double &);
double calcScore(double, double, double, double, double);
int findHighest(double, double, double, double, double);
int findLowest(double, double, double, double, double);

int main()
{
	double Score1, Score2, Score3, Score4, Score5;

//Displaying the introduction
	cout << "\n This program will  determine the performer's final score. \n\n";

//Calling the function getJudgeData one time for each of the judges

	getJudgeData(Score1);
	getJudgeData(Score2);
	getJudgeData(Score3);
	getJudgeData(Score4);
	getJudgeData(Score5);

	cout << "\n The contestant's score is: ";

// We call the Function calcScore to put into 5 scores
	cout << calcScore(Score1, Score2, Score3, Score4, Score5) << endl;
	
	
	system("pause");
	return 0;

}

/*
The getJudgeData function will ask the user for a judge score
then it stores it in a reference parameter variable
then validates it
*/

void getJudgeData(double &Score) 
{
	do {
		cout << "Enter a judge's score: ";
		cin >> Score;
		
		if (Score < 0 || Score > 10)
			{
			cout << "\n Error! Invalid Score. \n" << "Judge's score must be greater than 0 and less than 10.\n";
			}
		} while (Score < 0 || Score > 10);
}

/*
The calcScore function will find and return the average of 3 scores that
remain after removing the highest and lowest scores the performer receives.
*/

double calcScore(double Score1, double Score2, double Score3, double Score4, double Score5) 
{
	int High, Low;
	double Average;

	//Calling the function findHighet and findLowest to pass the scores
	High = findHighest(Score1, Score2, Score3, Score4, Score5);
	Low = findLowest(Score1, Score2, Score3, Score4, Score5);

	if (High == static_cast<int>(Score1))
	{
		if (Low == static_cast<int>(Score2))
			Average = (Score3 + Score4 + Score5) / 3;
		else if (Low == static_cast<int>(Score3))
			Average = (Score2 + Score4 + Score5) / 3;
		else if (Low == static_cast<int>(Score4))
			Average = (Score3 + Score2 + Score5) / 3;
		else
			Average = (Score2 + Score3 + Score4) / 3;
	}
	else if (High == static_cast<int>(Score2))
	{
		if (Low == static_cast<int>(Score1))
			Average = (Score3 + Score4 + Score5) / 3;
		else if (Low == static_cast<int>(Score3))
			Average = (Score1 + Score4 + Score5) / 3;
		else if (Low == static_cast<int>(Score4))
			Average = (Score3 + Score1 + Score5) / 3;
		else
			Average = (Score1 + Score3 + Score4) / 3;
	}
	else if (High == static_cast<int>(Score3))
	{
		if (Low == static_cast<int>(Score2))
			Average = (Score1 + Score4 + Score5) / 3;
		else if (Low == static_cast<int>(Score1))
			Average = (Score2 + Score4 + Score5) / 3;
		else if (Low == static_cast<int>(Score4))
			Average = (Score1 + Score2 + Score5) / 3;
		else
			Average = (Score2 + Score1 + Score4) / 3;
	}
	else if (High == static_cast<int>(Score4))
	{
		if (Low == static_cast<int>(Score2))
			Average = (Score3 + Score1 + Score5) / 3;
		else if (Low == static_cast<int>(Score3))
			Average = (Score2 + Score1 + Score5) / 3;
		else if (Low == static_cast<int>(Score1))
			Average = (Score3 + Score2 + Score5) / 3;
		else
			Average = (Score2 + Score3 + Score1) / 3;
	}
	else
	{
		if (Low == static_cast<int>(Score2))
			Average = (Score3 + Score4 + Score1) / 3;
		else if (Low == static_cast<int>(Score3))
			Average = (Score2 + Score4 + Score1) / 3;
		else if (Low == static_cast<int>(Score4))
			Average = (Score3 + Score2 + Score1) / 3;
		else
			Average = (Score2 + Score3 + Score4) / 3;
	}

	return Average;
}

                                      
//The function findHighest will find and return the Highest score of the 5 scores passed to it   

int findHighest(double Score1, double Score2, double Score3, double Score4,
	double Score5)
{
	if (Score1 > Score2 && Score1 > Score3 && Score1 > Score4 && Score1 > Score5)
		return Score1;
	else if (Score2 > Score1 && Score2 > Score3 && Score2 > Score4 &&
		Score2 > Score5)
		return Score2;
	else if (Score3 > Score2 && Score3 > Score1 && Score3 > Score4 &&
		Score3 > Score5)
		return Score3;
	else if (Score4 > Score2 && Score4 > Score3 && Score4 > Score1 &&
		Score4 > Score5)
		return Score4;
	else
		return Score5;
}

                                                             
//The function findLowest will find and return the lowest of the 5 scores passed to it

int findLowest(double Score1, double Score2, double Score3, double Score4,
	double Score5)
{
	if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 && Score1 < Score5)
		return Score1;
	else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 &&
		Score2 < Score5)
		return Score2;
	else if (Score3 < Score2 && Score3 < Score1 && Score3 < Score4 &&
		Score3 < Score5)
		return Score3;
	else if (Score4 < Score2 && Score4 < Score3 && Score4 < Score1 &&
		Score4 < Score5)
		return Score4;
	else
		return Score5;

}
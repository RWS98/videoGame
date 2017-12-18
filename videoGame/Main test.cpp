//
//
//

#include <iostream>
#include <stdlib.h>
#include "school.h"

using namespace std;

int main()
{
	School mySchool;
	string temp;
	double number;

	bool gameOver = false;

	cout << "Welcome to School Manager!" << endl;
	cout << "Please enter the Name of your School to continue: ";
	cin >> temp;
	mySchool.setName(temp);
	cout << "How much starting money would you like? (easy=$10,000 medium=$5,000 hard=$1,000)" << endl;
	cin >> number;
	mySchool.setFunds(number);

	while (!gameOver)
	{
		cout << "type s to add student," << endl;
		cin >> temp;
		
		system("CLS");

		if (temp == "s")
		{
			mySchool.addStudent();
		}
		else
			cout << "Error, try again" << endl;

		if (mySchool.getFunds() < 0)
		{
			gameOver = true;
		}


		cout << mySchool.getName() << endl;
		cout << "Number of Students: " << mySchool.getNumOfStudents() << endl;
		cout << "Total Funds: $" << mySchool.getFunds() << endl << endl;
	}

	cout << "Game Over!!" << endl;

	return 0;
}
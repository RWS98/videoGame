//
//
//

#include <iostream>
#include "school.h"

using namespace std;

int main()
{
	School mySchool;
	string temp;

	cout << "Welcome to School Manager!" << endl;
	cout << "Please enter the Name of your School to continue: ";
	cin >> temp;
	mySchool.setName(temp);



	return 0;
}
#include "School.h"

School::School()
{
	name = "";
	funds = 0;
	numOfStudents = 0;
	numOfFaculty = 0;
}

double School::getFunds()
{
	return funds;
}

int School::getNumOfStudents()
{
	return numOfStudents;
}

std::string School::getName()
{
	return name;
}

void School::setName(std::string s)
{
	name = s;
}

void School::setFunds(double n)
{
	funds = n;
}

void School::addStudent()
{
	numOfStudents++;
}

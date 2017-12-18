//
//
//

#include <string>


class School
{
public:
	School();
	School(std::string s);

	double getFunds();
	int getNumOfStudents();
	std::string getName();

	void setName(std::string s);
	void setFunds(double n);
	void addStudent();

private:
	std::string name;
	double funds;
	int numOfStudents;
	int numOfFaculty;

};



#include<iostream>
using namespace std;

class Student {
private:
	string fname;
	string lname;
	double gpa;
public:
	Student(string s1 = "X", string s2 = "Y", double d = 0) { fname = s1; lname = s2; gpa = d; }
	string getfname() { return fname; }
	string getlname() { return lname; }
	double getgpa() { return gpa; }

	void setfname(string s) { fname = s; }
	void setlname(string s) { lname = s; }
	void setgpa(double d) { gpa = d; }

};
int LinearSearch(Student list[], int size, double value);
int main()
{
	Student Array1[4] = { Student("Alex","Smith",3.3),Student("John","Ramzi",2.4), Student("Ashly","David",3.6), Student("Suzan","Adam",2.9) };
	int result;
	result = LinearSearch(Array1, 4, 2.4);
	if (result >= 0)
		cout << " A match found at location " << result << "\n";
	else cout << "No match found\n";
}

int LinearSearch(Student list[], int size, double value)
{
	bool found = false;
	int position = -1;
	int index = 0;

	while (index < size && !found)
	{
		if (list[index].getgpa() == value)
		{
			found = true;
			position = index;
		}
		++index;

	}
	return position;
}

#include<iostream>
using namespace std;

class Student {
private:
	string fname;
	string lname;
	double gpa;
public:
	Student(string s1 = "X", string s2 = "Y", double d = 0) {
		fname = s1; lname = s2; gpa = d;
	}
	string getfname() {
		return fname;
	}
	string getlname() {
		return lname;
	}
	double getgpa() { 
		return gpa; 
	}

	void setfname(string s) {
		fname = s;
	}
	void setlname(string s) {
		lname = s;
	}
	void setgpa(double d) {
		gpa = d;
	}
};

int LinearSearch(Student[], int, string);

int main() {
	Student arr[4] = {Student("A","S",3.0),Student("AW","RS",3.1) ,Student("FA","VS",3.5) ,Student("WZ","DZ",3.2) };
	
	bool result = LinearSearch(arr, 5, "FA");

	if (result) {
		cout << "A match found at location " << result << "\n";
	}
	else {
		cout << "no match found\n";
	}
	
}

int LinearSearch(Student list[], int size, string value)
{
	bool found = false;
	int position = -1;
	int index = 0;

	while (index < size && !found)
	{
		if (list[index].getfname() == value)
		{
			found = true;
			position = index;
		}
		++index;

	}
	return position;
}

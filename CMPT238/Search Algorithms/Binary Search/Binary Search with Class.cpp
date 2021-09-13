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

int binarySearch(Student[], int, string);

int main() {
	Student arr[4] = {Student("Adam","dez",3.0),Student("Awaka","Ramzi",3.1) ,Student("Farans","Seint",3.5) ,Student("Waikz","Quiza",3.2) };
	
	int	result = binarySearch(arr, 4,"Ramzi");

	if (result) {
		cout << "A match found at location " << result << "\n";
	}
	else {
		cout << "no match found\n";
	}
	
}

int binarySearch(Student X[], int size, string value)
{
	int first = 0;
	int last = size - 1;
	int position = -1;
	int middle;
	bool found = false;

	while (first <= last && !found)
	{
		middle = (first + last) / 2;
		if (X[middle].getlname() == value)
		{
			found = true;
			position = middle;
		}
		else if (value > X[middle].getlname())
			first = middle + 1;
		else
			last = middle - 1;

	}

	return position;
}

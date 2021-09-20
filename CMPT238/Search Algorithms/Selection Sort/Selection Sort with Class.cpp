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

void print(Student Array1[], int size);
void selectionSort(Student x[], int size);

int main() {
	Student A[4] = { Student("Alex","Smith",3.3),Student("John","Ramzi",2.4), Student("Ashly","David",3.6), Student("Suzan","Adam",2.9) };
	
	cout << "Before selection sort: \n";
	print(A, 4);
	selectionSort(A, 4);
	cout << "After selection sort: \n";
	print(A, 4);

}
void print(Student Array1[], int size) {
	for (int i = 0; i < size; i++) {
		cout << Array1[i].getfname() << " " << Array1[i].getlname() << " " <<  Array1[i].getgpa() << " " << "\n";
	} cout << "\n";

}
void selectionSort(Student x[], int size) {
	int max;
	int maxindex;

	for (int i = 0; i < size - 1; i++) {
		max = x[i].getgpa();
		maxindex = i;
		for (int j = i + 1; j < size; j++) {
			if (x[j].getgpa() > max) {
				max = x[j].getgpa();
				maxindex = j;
			}
		}
		swap(x[i], x[maxindex]);
	}
}

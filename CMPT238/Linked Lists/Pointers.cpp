#include <iostream>
using namespace std;

struct student {
	int id;
	string name;
	double gpa;
	student* next;

	student(int i = 0,string s = "", double d = 0.0, student* n = nullptr){
		id = i;
		name = s;
		gpa = d;
		next = n;
	}

};
int main() {

	//a pointer of type integer can hold an address, or point to a location, that holds a type integer value
	int* q = new int[5];

	/*
	q[0] = 1;
	q[1] = 2;
	*(q + 2) = 3;
	*(q + 3) = 4;
	*/

	for (int i = 0; i < 5; i++) {
		q[i] = i;
		cout << q[i] << " \n" ;
	}

	student* s1 = new student;
	s1->id = 20;
	s1->name = "Laur";
	s1->gpa = 3.8;

	student s;
	s.id = 10;
	s.name = "Thomas";
	s.gpa = 3.8;

	student d;

	s1->next = new student(20, "X", 3.0);
	student* temp = s1;

	while (temp) {
		cout << temp -> id << " " << temp->name << " " << temp->gpa;
		cout << "\n";
		temp = temp->next;
	}
}

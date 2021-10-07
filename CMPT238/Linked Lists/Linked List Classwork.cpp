#include <iostream>
using namespace std;

struct student {
	int id;
	string name;
	double gpa;
	student* next; //Self-referential

	student(int i = 0, string s = "", double d = 0.0, student * n = nullptr) {
		id = i;
		name = s;
		gpa = d;
		next = n;
	}

};
void printlist(student*);

int main() {
    
	student* head;
	head = new student(30, "J", 3.5);
	head->next = new student(40, "Art", 3.6);
	head->next->next = new student(80, "Jak", 11);
	printlist(head);
	cout << "____________\n\n";

    student* prev = head->;
    printlist(prev);
    
}
void printlist(student* head) {
	student* temp = head;
	if (!head) {
		cout << "Empty linked list, nothing to print.";
	}
	else {
		while (temp) {
			cout << temp->id << " " << temp->name << " " << temp->gpa;
			cout << "\n";
			temp = temp->next;
		}
	}
}

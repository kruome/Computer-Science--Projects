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
void add_node_end(student*&, int, string, double);
void add_node_sorted(student*&, int, string, double);
int main() {

	student* s1 = new student; // student* s1 = new students(2, "A", 3.5,)
	// -> to dereference

	s1->id = 20;
	s1->name = "Laur";
	s1->gpa = 3.8;

	student* head;
	head = new student(30, "J", 3.5);
	head->next = new student(40, "Art", 3.6);

	add_node_end(head, 2, "joe", 2.3);
	head = new student(80, "Jak", 11, head);

	printlist(head);
	cout << "____________\n\n";

	student* head2 = nullptr;
	add_node_end(head2, 100, "Thei", 3.99);
	add_node_sorted(head2, 22, "TO", 4.5);
	add_node_sorted(head2, 9, "L", 5);
	printlist(head2);

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
void add_node_end(student*& h, int i, string s, double d) {
	if (!h) { // This represents an empty length list
		h = new student(i, s, d); // Does not need the last parameter because there is no other node to point to
	}
	else {
		student* temp = h;
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = new student(i, s, d);
	}
}
void add_node_sorted(student*& head, int i, string s, double d){
	if (head == nullptr || i <= head->id) { //either the list is empty or 
		head = new student(i,s,d,head); // the new id is smaller than the first
	}
	else {
		student* q = head;
		student* prev = nullptr;
		while (q!= nullptr || i > q->id) {
			prev = q;
			q = q->next;
		}
		prev->next = new student(i, s, d, q);
	}
}

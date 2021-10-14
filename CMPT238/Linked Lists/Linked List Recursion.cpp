#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node(int i, Node* p = nullptr) {
		data = i; next = p;
	}
};
int size(Node* ptr); 
void displayList(Node* ptr);
Node* add(Node* alist, double value);
Node* remove(Node* alist, double value);
Node* createCopy(Node*);


int main() {
	Node* s1 = new Node(10);
	s1->next = new Node(11);
	s1->next->next = new Node(2);

	Node* temp = createCopy(s1);

	cout << "The size of this node is " << size(temp) << "\n";
	add(temp, 22);
	remove(temp, 11);
	displayList(temp);
}


Node* createCopy(Node* head) {
	Node* temp = head;
	return temp;
}
int size (Node *ptr){
	if (ptr == nullptr) {
		return 0;
	}
	else {
		return 1 + size(ptr->next);
	}
}
void displayList(Node* ptr) {
	if (ptr != nullptr) {
		cout << ptr->data << " ";
		displayList(ptr->next);
	}
}
Node* add(Node* alist, double value) {
	if (alist == nullptr) {
		return new Node(value);
	}
	else {
		alist->next = add(alist->next, value);
		return alist;
	}
}
Node* remove(Node* alist, double value) {
	if (alist == nullptr)return nullptr;
	if (alist->data == value) {
		Node* tail = alist->next;
		delete alist;
		return tail;
	}
	else {
		alist->next = remove(alist->next, value);
		return alist;
	}
}

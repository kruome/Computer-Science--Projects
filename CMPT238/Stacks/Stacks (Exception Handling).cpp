#include <iostream>
using namespace std;


class dynamic_stack {
private:
	struct Node {
		int data;
		Node* next;
		Node(int i, Node* x = nullptr) {
			data = i;
			next = x;
		}

	};
	Node* top;
public:
	dynamic_stack() {
		top = nullptr;
	}
	~dynamic_stack() {
		Node* temp = top;
		while (temp) {
			top = top->next;
			delete temp;
			temp = top;
		}
	}
	bool isEmpty() {
		return top == nullptr;
	}
	void push(int val) {
		top = new Node(val, top);
	}
	/*
	int pop() {
		if(!isEmpty()){
			int result = top->data;
			Node* garbage = top;
			top = top->next;
			delete garbage;
			return result;
		}else{
			throw UnderFlow();
		}
	}*/
	void pop(int& x) {

		if (!isEmpty()) {
			x = top->data;
			Node* garbage = top;
			top = top->next;
			delete garbage;
		}
		else {
			throw UnderFlow();
		}
	}
	class UnderFlow {};
};

int main() {
	return 0;
}

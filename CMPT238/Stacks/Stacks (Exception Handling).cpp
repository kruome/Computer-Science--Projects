#include <iostream>
using namespace std;

class intStaticStack {
private:
	int container[10];
	int capacity;
	int top; // Represents the index of the available position for inserting a new item in the stack.

public:
	intStaticStack() {
		capacity = 10;
		for (int i = 0; i < capacity; i++) {
			container[i] = 0;
			top = 0;
		}
	}
	bool isFull() {
		return top == capacity;
	}
	bool isEmpty() {
		return top == 0;
	}
	void push(int value) {
		if (!isFull()) {
			container[top] = value;
			top++;
		}
		else {
			throw OverFlow();
			//cout << "Wrong Operation. The stack is full.";
		}
	}
	int pop() {
		if (!isEmpty()) {
			top--;
			return container[top];
		}
		else {
			throw UnderFlow();
			//cout << "Wrong operation. The stack is empty
			//return -1;
		}
	}
	class OverFlow {};
	class UnderFlow {};
};

int main() {
	intStaticStack obj;

	try {
		for (int i = 0; i < 10; i++) {
			obj.push(i);
			cout<<obj.pop() << " ";
		}
}
	catch (intStaticStack::OverFlow) {
		cout << "Wrong Operation. The stack is full.";
	}
	catch (intStaticStack::UnderFlow) {
		cout << "Wrong operation. The stack is empty.";
		return -1;
	}
}

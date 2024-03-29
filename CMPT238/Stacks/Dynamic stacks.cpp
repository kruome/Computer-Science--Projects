#include <iostream>
using namespace std;

// STACK IS LIFO => LAST IN FIRST OUT
class dynamic_Stack {
private:
	class Node {
	public:
		double data;
		Node* next;
		Node(double d, Node* p = nullptr)
		{
			data = d;
			next = p;
		}

	};
	Node* top;// points to the last pushed node in the dynamic stack.

public:
	dynamic_Stack()
	{
		top = nullptr;
	}



	bool isEmpty()
	{
		return top == nullptr;
	}


	void push(double val)
	{
		top = new Node(val, top);
	}

	double pop()
	{

		if (!isEmpty())
		{

			double result = top->data;
			Node* temp = top;
			top = top->next;
			delete temp;
			return result;
		}
		else {
			throw UnderFlow();

		}
	}
	void printContent() {
		Node* temp = top;
		while (temp) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	class UnderFlow {};
};




int main()
{

	dynamic_Stack obj;
	try {
		obj.push(8);
		obj.push(5);
		obj.push(10);
		obj.push(2);
		obj.push(6);
		obj.push(100);
		obj.push(88);
		obj.push(44);
		obj.push(333);

		cout << obj.pop() << " ";
		cout << obj.pop() << " ";
		cout << obj.pop() << " ";
		cout << obj.pop() << " \n";

		obj.push(99);
		obj.push(100);
		cout << "===========================\n";
		obj.printContent();
	}
	catch (dynamic_Stack::UnderFlow)
	{
		cout << "Wrong operation, stack is EMPTY\n";
	}
	cout << "\n";
}

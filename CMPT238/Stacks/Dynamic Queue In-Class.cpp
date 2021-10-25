#include <iostream>
using namespace std;

// Queue IS FIFO => First IN FIRST OUT
class dynamic_Queue {
private:
	struct Node {
	public:
		int data;
		Node* next;
		Node(int d, Node* p = nullptr)
		{
			data = d;
			next = p;
		}

	};


	Node* front;
	Node* rear;


public:
	dynamic_Queue()
	{
		front = nullptr;
		rear = nullptr;

	}



	bool isEmpty()
	{
		return front == nullptr;
	}



	void enqueue(int val)
	{

		if (isEmpty())
		{
			front = new Node(val);
			rear = front;
		}
		else
		{
			rear->next = new Node(val);
			rear = rear->next;

		}


	}

	int dequeue()
	{

		if (!isEmpty())
		{
			int result = front->data;
			Node* trash = front;
			front = front->next;
			delete trash;
			return result;
		}
		else
			throw UnderFlow();

	}
	void printDynamicQueue() {
		if (!isEmpty()){
			Node* print = rear;
				while (print != nullptr) {
					cout << print->data << " ";
					print = rear->next;
				}
		}
	}

	class UnderFlow {};
};




int main()
{
	dynamic_Queue obj;
	obj.enqueue(6);
	obj.enqueue(7);
	obj.enqueue(8);
	obj.enqueue(9);
	obj.enqueue(10);
	/*for (int i = 0; i < 2; i++) {
		cout<<"# "<< (i+1) << " " << obj.dequeue() << " was dequeued";
		cout << "\n";
	}*/
	obj.printDynamicQueue();
	
	
}

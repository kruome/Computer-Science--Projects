#include <iostream>
using namespace std;

// Queue IS FIFO => First IN FIRST OUT
class dynamic_Queue {
private:
	struct Node{
	public:
		int ;
		Node* next;
		Node(String n, int a, String m, Node* p = nullptr)
		{
			name = n;
			age = a;
			major = m;
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
	class UnderFlow {};
};




int main()
{
    dynamic_queue dqueue;
}

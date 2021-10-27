#include <iostream>
using namespace std;

// STACK IS LIFO => LAST IN FIRST OUT
class static_Queue {
private:
	int queue[10];
	int front;
	int rear;
	int counter;
	int size;

public:
	static_Queue()
	{
		front =-1;
		rear = -1;
		counter = 0;
		size = 10;
	}

	

	bool isEmpty()
	{
		return counter == 0;
	}

	bool isFull()
	{
		return counter == size;
	}
	int getfront(){
	    return front % 4;
	}

	void enqueue(int val)
	{
		if (!isFull())
		{
			rear = (rear + 1) % size;
			queue[rear] = val;
			++counter;
		}
		else
			throw OverFlow();
	}

	int dequeue()
	{

		if (!isEmpty())
		{
			front = (front + 1) % size;
			--counter;
			return queue[front];
			
		}
		else 
			throw UnderFlow();
			
	}

	class OverFlow {};
	class UnderFlow {};
};




int main()
{

	static_Queue obj;
	try {
		obj.enqueue(5);
		obj.enqueue(7);
		obj.enqueue(8);
		obj.enqueue(9);

		cout << obj.dequeue() << " ";
		cout << obj.dequeue() << " \n";
		
		obj.enqueue(12);
		obj.enqueue(10);
		
		cout<<obj.dequeue() << " ";
		

		
		cout << "===========================\n";
		
	cout<<obj.dequeue() << " " << " the index is " <<obj.getfront() << " ";  
	cout<<obj.dequeue() << " " << " the index is " <<obj.getfront() << " ";
	cout<<obj.dequeue() << " " << " the index is " <<obj.getfront() << " ";

		
	}
	catch (static_Queue::UnderFlow)
	{
		cout << "Wrong operation, queue is EMPTY\n";

	}
	catch (static_Queue::OverFlow)
	{
		cout << "Wrong operation, stack is Full\n";

	}
}

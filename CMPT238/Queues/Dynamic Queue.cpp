#include <iostream>
using namespace std;

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
	class UnderFlow {};
};

/*bool balancedbrackets(string){
    String a , b;
    dynamic_queue obj
    
}
*/

int main()
{
  string b;
  cout<<"Enter your expression: ";
  cin>> b;
  string balbrackets[b.length()];
  for(int i = 0; i < b.length(); i ++){
      balbrackets[i] = b[i];
      cout<< balbrackets[i] << " ";
  }
}

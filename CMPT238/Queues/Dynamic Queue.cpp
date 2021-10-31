#include <iostream>
using namespace std;

class dynamic_Queue {
private:
	struct Node {
	public:
		string val;
		Node* next;
		Node(string d, Node* p = nullptr)
		{
			val = d;
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

	void enqueue(string val)
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

	string dequeue()
	{

		if (!isEmpty())
		{
			string result = front->val;
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
dynamic_Queue balancedbrackets(string s){
    string expression[s.length()];
    dynamic_Queue balanced;

    for(int i = 0; i < s.length(); i ++){
        expression[i] = s[i];
        cout<< expression[i] << " ";
   }
    for(int i = 0; i < s.length(); i ++){
        balanced.enqueue(expression[i]);
        
    }
    return balanced;
    }



int main()
{
  string b;
  cout<<"Enter your expression: ";
  cin>> b;
  
  dynamic_Queue obj = balancedbrackets(b);
  cout<< "\n"  << obj.dequeue();
  return 0;
}

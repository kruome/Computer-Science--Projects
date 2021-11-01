#include <iostream>
using namespace std;

class dynamic_Queue {
public:
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
bool balancedbrackets(string s){
    string expression[s.length()];
    string temp = "";
    string inv = "0";
    dynamic_Queue balanced;
    int count = 0;

    if(s.length() == 1){
        return false;
    }
    for(int i = 0; i < s.length(); i ++){
        expression[i] = s[i];
   }
    for(int i = 0; i < s.length(); i ++){
        balanced.enqueue(expression[i]);
    }
    
    for(int i = 0; i < s.length();i++){
        if(balanced.front->val == "{"){
            temp = "[";
            balanced.front->val = inv;
        }else if(balanced.front ->val == "<"){
            temp = "(";
            balanced.front->val = inv;
        }else if((balanced.rear->val == "}") || (balanced.rear->val == ">")){
            balanced.front->val = inv;
        }else{
            return false;
        }
        count++;
    }
        return true;

}
int main(){
  string b;
  cout<<"Enter your expression: ";
  cin>> b;
  
  if(balancedbrackets(b)){
      cout<<"Balanced.";
  }else{
      cout<<"Not balanced.";
  }
  return 0;
}

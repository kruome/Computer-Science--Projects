#include <iostream>
using namespace std;

class dynamic_Queue {
public:
	struct Node {
	public:
	    string name;
		int age;
		string major;
		Node* next;
		Node(string n, int a, string m, Node* p = nullptr)
		{
			name = n;
			age = a;
			major = m;
			next = p;
		}
	};
	Node* front;
	Node* rear;
	Node* temp;
  
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

	void enqueue(string n, int a, string m)
	{

		if (isEmpty())
		{
			front = new Node(n, a ,m);
			rear = front;
		}
		else
		{
			rear->next = new Node(n, a, m);
			rear = rear->next;

		}
	}

	void dequeue()
	{

		if (!isEmpty())
		{
		    cout<<front->name<< " ";
		    cout<<front->age << " ";
		    cout<<front->major;
			front = front->next;
		}
	}
	int lenn(){
	    int count = 1;
	    temp = front;
	        if(temp->next != nullptr)
	        {
	            while(temp->next != nullptr)
	            {
	                temp = temp->next;
	                count++;
	            }
	        }else
	            {
	                return 0;
	            }
	        
	  return count;
	  }
};
int main(){
    dynamic_Queue MC_registrar;
    cout<<"Welcome to MC registrar services."; cout<< "\n";
    MC_registrar.enqueue("Jon",20,"Arts");
    MC_registrar.enqueue("Nazaf",21,"Computer Science");
    MC_registrar.enqueue("Jay",18,"Math");
    
    cout<<"There have been " << MC_registrar.lenn() << " new students registered for the upcoming Spring 2022 semester";
    cout<<"\n";
    
    
    
    cout<<"The following is the first stored record in the system: "<< "\n";
    cout<<"Student information: ";
    MC_registrar.dequeue();
    cout<<"\n";
    MC_registrar.dequeue();
    cout<<"\n";
    MC_registrar.dequeue();


    return 0;
    
}

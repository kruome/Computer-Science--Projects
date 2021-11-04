#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int score;
	string name;
	int age;
	string country;
	string school;
	Node *prev, *next;

	static Node* getnode(int score, string name, int age, string country, string school)
	{
		Node* newNode = (Node*)malloc(sizeof(Node));
		newNode->score = score;
		newNode->name = name;
		newNode->age = age;
		newNode->country = country;
		newNode->school = school;
		newNode->prev = newNode->next = NULL;
		return newNode;
	}
};

class Deque
{
	Node* front;
	Node* rear;
	int Size;

public:
	Deque()
	{
		front = rear = NULL;
		Size = 0;
	}

	void insertFront(int, string, int, string, string);
	void insertRear(int, string, int, string, string);
	void deleteFront();
	void deleteRear();
	void getFront();
	void getRear();
	int size();
	bool isEmpty();
	void erase();
};
bool Deque::isEmpty()
{
	return (front == NULL);
}

int Deque::size()
{
	return Size;
}

void Deque::insertFront(int score, string name, int age, string country, string school)
{
	Node* newNode = Node::getnode(score, name, age, country, school);
	if (newNode == NULL)
		cout << "OverFlow\n";
	else
	{
		if (front == NULL)
			rear = front = newNode;

		else
		{
			newNode->next = front;
			front->prev = newNode;
			front = newNode;
		}

		Size++;
	}
}

void Deque::insertRear(int score, string name, int age, string country, string school)
{
	Node* newNode = Node::getnode(score, name, age, country, school);
	if (newNode == NULL)
		cout << "OverFlow\n";
	else
	{
		if (rear == NULL)
			front = rear = newNode;

		else
		{
			newNode->prev = rear;
			rear->next = newNode;
			rear = newNode;
		}

		Size++;
	}
}

void Deque::deleteFront()
{
	if (isEmpty())
		cout << "UnderFlow\n";

	else
	{
		Node* temp = front;
		front = front->next;

		if (front == NULL)
			rear = NULL;
		else
			front->prev = NULL;
		free(temp);

		Size--;
	}
}

void Deque::deleteRear()
{
		if (isEmpty())
		cout << "UnderFlow\n";

	else
	{
		Node* temp = rear;
		rear = rear->prev;

		if (rear == NULL)
			front = NULL;
		else
			rear->next = NULL;
		free(temp);

		Size--;
	}
}

void Deque::getFront()
{
	if (isEmpty()){
		cout<<"The list is currently empty.";
	}else{
	    cout<<front->score << "  " << front->name << "  " << front->age << "  "<<front->country << "  " << front->school;
	}
}

void Deque::getRear()
{
	if (isEmpty()){
		cout<<"The list is currently empty.";
    }else{
        cout<<rear->score << "  " << rear->name << "  " << rear->age << "  "<<rear->country << "  " << rear->school;
    }
}


void Deque::erase()
{
	rear = NULL;
	while (front != NULL)
	{
		Node* temp = front;
		front = front->next;
		free(temp);
	}
	Size = 0;
}

int main()
{
	Deque scollection;
	
	cout<<"This works.";
	scollection.getRear();
	return 0;
}

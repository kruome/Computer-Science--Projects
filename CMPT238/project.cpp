#include <bits/stdc++.h>
#include  <stdlib.h>
using namespace std;

struct Node
{
  int score;
  string name;
  int age;
  string country;
  string school;
  Node *prev, *next;

  static Node *getnode (int score, string name, int age, string school,
			string country)
  {
    Node *newNode = (Node *) malloc (sizeof (Node));
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
  Node *front;
  Node *rear;
  int Size;

public:
    Deque ()
  {
    front = rear = NULL;
    Size = 0;
  }

  void insertFront (int, string, int, string, string);
  void insertRear (int, string, int, string, string);
  void deleteFront ();
  void deleteRear ();
  int getFrontscore ();
  string getFrontschool ();
  string getFrontcountry ();
  int getFrontage ();
  string getFrontname ();
  int getRearscore ();
  string getRearschool ();
  string getRearcountry ();
  int getRearage ();
  string getRearname ();
  int size ();
  bool isEmpty ();
  void erase ();
};

bool
Deque::isEmpty ()
{
  return (front == NULL);
}

int
Deque::size ()
{
  return Size;
}

void
Deque::insertFront (int score, string name, int age, string country,
		    string school)
{
  Node *newNode = Node::getnode (score, name, age, country, school);
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

void
Deque::insertRear (int score, string name, int age, string school,
		   string country)
{
  Node *newNode = Node::getnode (score, name, age, school, country);
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

void
Deque::deleteFront ()
{
  if (isEmpty ())
    cout << "UnderFlow\n";

  else
    {
      Node *temp = front;
      front = front->next;

      if (front == NULL)
	rear = NULL;
      else
	front->prev = NULL;
      free (temp);

      Size--;
    }
}

void
Deque::deleteRear ()
{
  if (isEmpty ())
    cout << "UnderFlow\n";

  else
    {
      Node *temp = rear;
      rear = rear->prev;

      if (rear == NULL)
	front = NULL;
      else
	rear->next = NULL;
      free (temp);

      Size--;
    }
}

int
Deque::getFrontscore ()
{
  if (isEmpty ())
    {
      return -1;
    }
  else
    {
      return front->score;
    }
}

string
Deque::getFrontname ()
{
  if (isEmpty ())
    {
      return "Empty.";
    }
  else
    {
      return front->name;
    }
}

int
Deque::getFrontage ()
{
  if (isEmpty ())
    {
      return -1;
    }
  else
    {
      return front->age;
    }
}

string
Deque::getFrontcountry ()
{
  if (isEmpty ())
    {
      return "Empty.";
    }
  else
    {
      return front->country;
    }
}

string
Deque::getFrontschool ()
{
  if (isEmpty ())
    {
      return "Empty.";
    }
  else
    {
      return front->school;
    }
}

int
Deque::getRearscore ()
{
  if (isEmpty ())
    {
      return -1;
    }
  else
    {
      return rear->score;
    }
}

string
Deque::getRearname ()
{
  if (isEmpty ())
    {
      return "Empty.";
    }
  else
    {
      cout << rear->name;
    }
}

int
Deque::getRearage ()
{
  if (isEmpty ())
    {
      return -1;
    }
  else
    {
      return rear->age;
    }
}

string
Deque::getRearcountry ()
{
  if (isEmpty ())
    {
      return "Empty.";
    }
  else
    {
      return rear->country;
    }
}

string
Deque::getRearschool ()
{
  if (isEmpty ())
    {
      return "Empty.";
    }
  else
    {
      return rear->school;
    }
}

void
Deque::erase ()
{
  rear = NULL;
  while (front != NULL)
    {
      Node *temp = front;
      front = front->next;
      free (temp);
    }
  Size = 0;
}
 void printMiddle(class Deque p, int c){
        int a = p.getFrontscore();
        int b = p.getRearscore();
        int count = 0;
        int size = c;
        int limit = c/2;
        if (!p.isEmpty())
        {
            while (count < limit )
            {
                p.deleteRear();
                p.deleteFront();
                a = p.getFrontscore();
                b = p.getRearscore();
                count++;
            }
            cout << "The middle element is [" << p.getRearscore() << "]" << endl;
        }else{
            cout<<endl << "Nada";
        }
}

int
main ()
{
  Deque scollection;
  int count = 1;
  int option;

  //temp values
  string tschool;
  string tcountry;
  int tage;
  int tscore;

  scollection.insertRear (1580, "A", 16, "SHS", "USA");
  scollection.insertRear (700, "A", 16, "SHS", "USA");
  scollection.insertRear (1000, "A", 16, "SHS", "USA");

  cout << "         INTERNATIONAL ICL LEADERBOARD FOR 20xx" << endl;
  cout << " Score (1600) | " << "  Participant |" << "  Age   |" <<
    "   School  |" << "   Country   | " << endl;
  for (int i = 0; i < count; i++)
    {
      cout<< scollection.getFrontscore() << "  "<<  "              " << scollection.getFrontname() << "          "<< scollection.getFrontage() <<  "        " << scollection.getFrontschool() << "       " << scollection.getFrontcountry();
    }
    cout<<"yes" << endl;
    printMiddle(scollection,3);
}

//int interpolation_search (Node* p, int value, int size)
/*{
  int low = 0;
  int high = size - 1;
  int mid;
  
  l = p->getFrontScore();
  h = p->getRearScore();
 
  while ( l<= value && h >= value)
  {
    mid = low + ((value - l) * (high - low)) / (h - l);
    if (ar[mid] < value)
    {
      low = mid + 1;
    }
    else if (ar[mid] > value)
    {
      low = mid - 1;
    }
    else
    {
      return mid;
    }
  }
 
  if (l == value)
  {
    return low;
  }
  else
  {
    return -1;
  }
}*/

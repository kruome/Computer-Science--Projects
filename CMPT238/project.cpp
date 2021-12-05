
1400,Tiffany Manwaring
1399,Terence Stephenson
1398,Horace Langstaff
1397,Jed Hopkins
1396,Gilbert Cobbett
1395,Erin Robertson
1394,Wynne Caldwell
1393,Winona Burns
1392,Virginia Shaw
1391,Lovell Hampton

1400,Zachary Weaving
1397,Leo Jacobs
1396,Seth Arnold
1394,Cameron Hewson
1391,Zac Whitworth
1380,Edward Wall
1376,Michael Wenham
1375,Piper Lawson
1374,Mila Glenn
1299,Natalie Simpson
--------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
#include <stdlib.h>
#include <fstream>
#include<iostream>
using namespace std;

struct Node
{
  int score;
  string name;
  Node *prev, *next;

  static Node *getnode (int score, string name)
  {
    Node *newNode = (Node *) malloc (sizeof (Node));
      newNode->score = score;
      newNode->name = name;
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

  void insertFront (int, string);
  void insertRear (int, string);
  void deleteFront ();
  void deleteRear ();
  int getFrontscore ();
  int getRearscore ();
  string getFrontcountry ();
  string getFrontname ();
  string getRearschool ();
  string getRearcountry ();
  string getRearname ();
  int size ();
  bool isEmpty ();
  void erase ();
  int printindex(int);

};
int Deque:: printindex(int x){
    int val = -1;
    Node* temp = new Node;
    temp = front;
    for(int i = 0; i < x; i ++){
        temp=temp->next;
    }
    val = temp->score;
    return val;
}

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
Deque::insertFront (int score, string name)
{
  Node *newNode = Node::getnode (score, name);
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
Deque::insertRear (int score, string name)
{
  Node *newNode = Node::getnode (score, name);
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
      free(temp);

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
      return rear->name;
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
int interpolation_search (Deque p, int value, int size)
{
  int low = 0;
  int high = size-1;
  int mid = -1;
  
  int l = p.getFrontscore();
  int h = p.getRearscore();
  
 while (low <= high && value >= p.printindex(low) && value <= p.printindex(high))
  {
     if (low == high)
     {
         if(p.printindex(low)==value)
         {
             return low;
         }else
         {
            return -1;
         }
    }else{
    mid = low +  (((high - low) / (p.printindex(high) - p.printindex(low))) * (value - p.printindex(low)));
    if (p.printindex(mid) < value)
    {
      low = mid+1;
    }
    else if (p.printindex(mid)> value)
    {
      high = mid-1;
    }
    else if(p.printindex(mid)==value)
    {
      return mid;
    }
   }
  }
  return -1;
}

int
main ()
{
    std::ifstream myfile ("dataset.txt");

    std::string myline;
    if ( myfile.is_open() ) {
        while ( myfile ) {
        std::getline (myfile, myline);
        std::cout << myline << ": " << myfile.tellg() << '\n';
        }
    }
    
  Deque scollection;
  
  scollection.insertRear (100, "A");
  scollection.insertRear (200, "B");

  cout<<"Welcome to the global scoreboard for the internatinal AXT test database!" << endl;
  
  int userinput; 
  int countryinput;
  int testscore;
    while(userinput != 2){
        cout<<"Please choose one of the one following options:" << endl;
        cout<<"1.Database"<<endl;
        cout<<"2.Exit"<<endl;
        cin>>userinput;
        cout<<endl;

        if(userinput == 1){
            cout<<"Please choose one of the following countries to find the test score data:"<<endl;
            cout<<"1.USA"<<endl;
            cout<<"2.Australia"<<endl;
            cout<<"3.Japan"<<endl;
            cout<<"4.China"<<endl;
            cout<<"5.Russia"<<endl;
            cin>>countryinput;
            switch(countryinput){
                case 1:
                    cout<<"Please enter the test score you would like to search for (1300-1400): "<<endl;
                    cin>>testscore;
                    break;
                case 2:
                    cout<<"Please enter the test score you would like to search for (1300-1400): "<<endl;
                    cin>>testscore;
                    break;
                case 3:
                    cout<<"Please enter the test score you would like to search for (1300-1400):"<<endl;
                    cin>>testscore;
                    break;
                case 4:
                    cout<<"Please enter the test score you would like to search for (1300-1400):"<<endl;
                    cin>>testscore;
                    break;
                case 5: 
                    cout<<"Please enter the test score you would like to search for (1300-1400):"<<endl;
                    cin>>testscore;
                    break;
                default:
                    cout<<"Invalid input. Returning back to the main menu."<<endl;
                    break;
            }
        }
        if(userinput == 2){
            cout<<"Exited." << endl;
        }
    }
}
---------------------------------------------------------------------------------
	#include <bits/stdc++.h>
#include <stdlib.h>
#include <fstream>
#include<iostream>
using namespace std;

struct Node
{
  int score;
  string name;
  Node *prev, *next;

  static Node *getnode (int score, string name)
  {
    Node *newNode = (Node *) malloc (sizeof (Node));
      newNode->score = score;
      newNode->name = name;
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

  void insertFront (int, string);
  void insertRear (int, string);
  void deleteFront ();
  void deleteRear ();
  int getFrontscore ();
  int getRearscore ();
  string getFrontcountry ();
  string getFrontname ();
  string getRearschool ();
  string getRearcountry ();
  string getRearname ();
  int size ();
  bool isEmpty ();
  void erase ();
  int printindex (int);

};

int
Deque::printindex (int x)
{
  int val = -1;
  Node *temp = new Node;
  temp = front;
  for (int i = 0; i < x; i++)
    {
      temp = temp->next;
    }
  val = temp->score;
  return val;
}

bool Deque::isEmpty ()
{
  return (front == NULL);
}

int
Deque::size ()
{
  return Size;
}

void
Deque::insertFront (int score, string name)
{
  Node *newNode = Node::getnode (score, name);
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
Deque::insertRear (int score, string name)
{
  Node *newNode = Node::getnode (score, name);
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

string Deque::getFrontname ()
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

string Deque::getRearname ()
{
  if (isEmpty ())
    {
      return "Empty.";
    }
  else
    {
      return rear->name;
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

int
interpolation_search (Deque p, int value, int size)
{
  int low = 0;
  int high = size - 1;
  int mid = -1;

  int l = p.getFrontscore ();
  int h = p.getRearscore ();

  while (low <= high && value >= p.printindex (low)
	 && value <= p.printindex (high))
    {
      if (low == high)
	{
	  if (p.printindex (low) == value)
	    {
	      return low;
	    }
	  else
	    {
	      return -1;
	    }
	}
      else
	{
	  mid =
	    low +
	    (((high - low) / (p.printindex (high) -
			      p.printindex (low))) * (value -
						      p.printindex (low)));
	  if (p.printindex (mid) < value)
	    {
	      low = mid + 1;
	    }
	  else if (p.printindex (mid) > value)
	    {
	      high = mid - 1;
	    }
	  else if (p.printindex (mid) == value)
	    {
	      return mid;
	    }
	}
    }
  return -1;
}

int
main ()
{
    
  Deque usadataset;
  
  ifstream usadb;
  usadb.open ("usa");
  string usafile;
  string usastrscore;
  string usaname;
  if (usadb.is_open ())
    {
      while (usadb)
	{			// equivalent to myfile.good()
	  getline (usadb, usafile);
	  int usafilelength = usafile.length ();
	  usastrscore = usafile.substr (0, 4);
	  usaname = usafile.substr (5,usafilelength);
	  int usaintscore = stoi(usastrscore);
	  usadataset.insertRear(usaintscore, usaname);
	  cout << usaintscore << " ";
	  cout << usaname << '\n';
	  if (usadb.eof())
				break;
	}
    }
  else
    {
      cout << "Couldn't open file\n";
    }
    
  Deque ausdataset;
  
  ifstream ausdb;
  ausdb.open ("australia");
  string ausfile;
  string ausstrscore;
  string ausname;
  if (ausdb.is_open ())
    {
      while (ausdb)
	{			// equivalent to myfile.good()
	  getline (ausdb, ausfile);
	  int ausfilelength = ausfile.length ();
	  ausstrscore = ausfile.substr (0, 4);
	  ausname = ausfile.substr (5,ausfilelength);
	  int ausintscore = stoi(ausstrscore);
	  ausdataset.insertRear(ausintscore, ausname);
	  cout << ausintscore << " ";
	  cout << ausname << '\n';
	  if (ausdb.eof())
				break;
	}
    }
  else
    {
      cout << "Couldn't open file\n";
    }
    
   
}

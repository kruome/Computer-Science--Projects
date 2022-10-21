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
  string getFrontname ();
  string getRearname ();
  int size ();
  bool isEmpty ();
  void erase ();
  int printindex (int);
  string getName(int);

};

int
Deque::printindex (int x)
{
  int val = -1;
  auto temp = front;
  for (int i = 0; i < x; i++)
    {
      temp = temp->next;
    }
  val = temp->score;
  return val;
}

string Deque::getName(int x){
    auto temp = front;
    string val;
    for(int i = 0; i < x; i++){
        temp = temp->next;
    }
    val = temp->name;
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
	  mid =
	    low +
	    (((high - low) / (p.printindex (high) -
			      p.printindex (low))) * (value -
						      p.printindex (low)));
	  if (p.printindex (mid) < value)
	    {
	      low = mid + 1;
	    }
	  else {
	      high = mid - 1;
	    }
	  if (p.printindex (mid) == value)
	    {
	      return mid;
	    }
	}
	return -1;
}


int
main ()
{
   
   //Double ended queue data set structure for 4 countries 
  Deque usadataset;
  
  ifstream usadb;
  usadb.open ("usadb");
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
  ausdb.open ("ausdb");
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
	  if (ausdb.eof())
				break;
	}
    }
  else
    {
      cout << "Couldn't open file\n";
    }
    
    Deque jpndataset;
    
    ifstream jpndb;
    jpndb.open("jpndb");
    string jpnfile;
    string jpnstrscore;
    string jpnname;
    if(jpndb.is_open()){
        while(jpndb){
            getline(jpndb,jpnfile);
            int jpnfilelength = jpnfile.length();
            jpnstrscore=jpnfile.substr(0,4);
            jpnname =jpnfile.substr(5,jpnfilelength);
            int jpnintscore = stoi(jpnstrscore);
            jpndataset.insertRear(jpnintscore,jpnname);
            if(jpndb.eof()){
                break;
            }
        }
    }
    Deque rusdataset;
    ifstream rusdb;
    rusdb.open("rusdb");
    string rusfile;
    string russtrscore;
    string rusname;
    if(rusdb.is_open()){
        while(rusdb){
            getline(rusdb,rusfile);
            int rusfilelength = rusfile.length();
            russtrscore = rusfile.substr(0,4);
            rusname = rusfile.substr(5,rusfilelength);
            int rusintscore = stoi(russtrscore);
            rusdataset.insertRear(rusintscore,rusname);
            if(rusdb.eof()){
                break;
            }
        }
    }
    
    //Main Menu
  cout<<"Welcome to the global scoreboard for the internatinal AXT test database!" << endl;
  const int dbs = 25;
  int userinput; 
  int countryinput;
  int testscore;
    while(userinput != 2){
        cout<<"Menu Options:" << endl;
        cout<<"1.Database"<<endl;
        cout<<"2.Exit"<<endl;
        cout<<"Please choose one option: ";
        cin>>userinput;
        cout<<endl;

        if(userinput == 1){
            cout<<"Country list:"<<endl;
            cout<<"1.United States of America"<<endl;
            cout<<"2.Australia"<<endl;
            cout<<"3.Japan"<<endl;
            cout<<"4.Russia"<<endl;
            cout<<"Please choose one country from the list: ";
            cin>>countryinput;
            switch(countryinput){
                case 1:
                    cout<<"Please enter the test score you would like to search for (1300-1400) in the USA leaderboard: ";
                    cin>>testscore;
                    cout<<endl;
                    if(abs(interpolation_search(usadataset,testscore,dbs)-25) >=1 && abs(interpolation_search(usadataset,testscore,dbs)-25)<=25){
                        cout<<"With the rank of #" << abs(interpolation_search(usadataset,testscore,dbs)-25)<< " " <<usadataset.getName(interpolation_search(usadataset,testscore,dbs)) << " has the score " <<testscore<<endl;
                    }else{
                        cout<<"There is no record for a test taker with score: " << testscore <<endl;
                    }break;
                case 2:{
                    cout<<"Please enter the test score you would like to search for (1300-1400) in the Australian leaderboard: ";
                    cin>>testscore;
                    cout<<endl;
                    if(abs(interpolation_search(ausdataset,testscore,dbs)-25) >=1 && abs(interpolation_search(ausdataset,testscore,dbs)-25)<=25){
                        cout<<"With the rank of #" << abs(interpolation_search(ausdataset,testscore,dbs)-25)<< " " <<ausdataset.getName(interpolation_search(ausdataset,testscore,dbs)) << " has the score " <<testscore<<endl;
                    }else{
                        cout<<"There is no record for a test taker with score: " << testscore <<endl;
                    }break;}
                case 3:
                    cout<<"Please enter the test score you would like to search for (1300-1400) in the Japanese leaderboard: ";
                    cin>>testscore;
                    cout<<endl;
                    if(abs(interpolation_search(jpndataset,testscore,dbs)-25) >=1 && abs(interpolation_search(jpndataset,testscore,dbs)-25)<=25){
                        cout<<"With the rank of #" << abs(interpolation_search(jpndataset,testscore,dbs)-25)<< " " <<jpndataset.getName(interpolation_search(jpndataset,testscore,dbs)) << " has the score " <<testscore<<endl;
                    }else{
                        cout<<"There is no record for a test taker with score: " << testscore <<endl;
                    }break;
                case 4:
                    cout<<"Please enter the test score you would like to search for (1300-1400) in the Russian leaderboard: ";
                    cin>>testscore;
                    cout<<endl;
                    interpolation_search(rusdataset,testscore,dbs);
                    break;
                default:
                    cout<<"Invalid input. Returning back to the main menu."<<endl;
                    break;
            }
        }
        if(userinput == 2){
            cout<<"Exited." << endl;
        }else{
           if(userinput!=1){
              cout<<"Please enter a valid input."<<endl;
           }
        }
    }
}

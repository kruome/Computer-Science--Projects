usadb:
1371,Rita Oliver
1372,Ferris Barrett
1374,Jamie Cooke
1376,Yvette Tillery
1379,Horace Hayes
1381,Alexander Thompson
1382,Rusty Thornton
1383,Grayson Kim
1384,Bradley Ogley
1385,Halsey Gregory
1386,Homer Andrews
1387,Ged Mallin
1388,Sienna Mitchell
1389,Jillian Binder
1390,Vince Webb
1391,Lovell Hampton
1392,Virginia Shaw
1393,Winona Burns
1394,Wynne Caldwell
1395,Erin Robertson
1396,Gilbert Cobbett
1397,Jed Hopkins
1398,Horace Langstaff
1399,Terence Stephenson
1400,Tiffany Manwaring


ausdb:
1370,Addison Magrath
1371,Lara Holt
1372,Amber Edwards
1373,Mila Glenn
1374,Piper Lawson

1375,Skye Baker
1376,Zara Quin
1378,Millie Evans
1379,Ava Weaver
1380,Nathan Noble
1381,Grace Coleman
1383,Braxton Adams
1385,Nicholas Coleman
1384,Edward Wall
1386,Jesse Griffin
1387,Jackson Kennedy
1388,Nate Whelan
1389,Natalie Simpson
1391,Zac Whitworth
1392,Michael Wenham
1394,Cameron Hewson
1396,Seth Arnold
1397,Leo Jacobs
1400,Zachary Weaving


jpndb:

1357,Okumura Hiromi
1358,Morioka Aika
1359,Imada Shig
1361,Okita Kotone
1362,Baba Rie
1364,Shinohara Masaru
1365,Nakao Nobu
1370,Nakata Misaki
1376,Izumi Saburo
1378,Suko Eri
1379,Nagasawa Akihiro
1380,Chino Suzu
1381,Okubo Akio
1382,Yoshimura Makoto
1383,Ikeda Ko
1384,Mayeda Sora
1386,Tamashiro Kaoru
1387,Mochizuki Kameyo
1389,Onishi Sakiko
1391,Tao Ayumi
1392,Yamane Eiji
1394,Jin Aiko
1395,Noda Rei
1398,Kono Yuichi
1400,Saito Kunio


rusdb:
1365,Samuil Lebedev
1367,Kuzma Smirnov
1368,Leonid Orlov
1371,Aleksandr Morozov
1372,Varushka Fedoroa
1374,Avdotia Sorokina
1375,Ioakim Frolov
1378,Nazariy Kiselev
1379,Yegor Orlov
1380,Spiridon Volkov
1381,Sashura Sokolova
1382,Demyan Frolov
1383,Yevgeniya Vasilieva
1384,Afonasei Tarasov
1385,Kalva Zhukova
1386,Tasha Dmitrieva
1387,Iolanta Ivanova
1389,Artem Semenov
1394,Nonna Koroleva
1395,Alyosha Volkov
1396,Mariya Sokoloa
1397,Osip Mikhailov
1398,Jekaterina Kozlova
1399,Ogrifina Kuzmina
1400,Filippa Novikova

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
  Node *temp = new Node;
  temp = front;
  for (int i = 0; i < x; i++)
    {
      temp = temp->next;
    }
  val = temp->score;
  return val;
}

string Deque::getName(int x){
    Node *temp = new Node;
    temp = front;
    string val;
    for(int i = 0; i < x; i ++){
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
        cout<<"Please choose one of the one following options:" << endl;
        cout<<"1.Database"<<endl;
        cout<<"2.Exit"<<endl;
        cin>>userinput;
        cout<<endl;

        if(userinput == 1){
            cout<<"Please choose one of the following countries to find the test score data:"<<endl;
            cout<<"1.United States of America"<<endl;
            cout<<"2.Australia"<<endl;
            cout<<"3.Japan"<<endl;
            cout<<"5.Russia"<<endl;
            cin>>countryinput;
            switch(countryinput){
                case 1:
                    cout<<"Please enter the test score you would like to search for (1300-1400) in the USA leaderboard: "<<endl;
                    cin>>testscore;
                    cout<<"With the rank of #" << abs(interpolation_search(usadataset,testscore,dbs)-25)<< " " <<usadataset.getName(interpolation_search(usadataset,testscore,dbs)) << " has the score " <<testscore<<endl;
                    break;
                case 2:
                    cout<<"Please enter the test score you would like to search for (1300-1400) in the Australian leaderboard: "<<endl;
                    cin>>testscore;
                    interpolation_search(ausdataset,testscore,dbs);
                    break;
                case 3:
                    cout<<"Please enter the test score you would like to search for (1300-1400) in the Japanese leaderboard: "<<endl;
                    cin>>testscore;
                    interpolation_search(jpndataset,testscore,dbs);
                    break;
                case 4:
                    cout<<"Please enter the test score you would like to search for (1300-1400) in the Russian leaderboard: "<<endl;
                    cin>>testscore;
                    interpolation_search(rusdataset,testscore,dbs);
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

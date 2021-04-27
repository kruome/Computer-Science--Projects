#include <iostream> 
#include <string> 
using namespace std; 

class Movie { 
  private: 
  string moviename; 
  string mpaa; 
  int r1, r2, r3, r4, r5; 
public: 
  string getmoviename(); 
  void setmoviename(string); 
  string getmpaarating(); 
  void setmpaarating(string); 
  void addRating(int); 
  double getAverage(); 
  Movie(string, string); 
}; 

int main() { 

  Movie movie[2] = { Movie("Mortal Kombat", "R"), Movie("Inside Out", "PG") };   
  cout << "Data entry for Movie " << movie[0].getmoviename()<< ": " << endl; 
  
  for (int i = 0; i < 5; i++) { 
    int userrating;
    cout << "Enter the rating for user " << i + 1 << " :"; 
    cin >> userrating; 
    movie[0].addRating(userrating); 
} 

  cout<<endl; 
  cout << "Data entry for Movie " << movie[1].getmoviename()<< ": " << endl; 
  
  for (int i = 0; i < 5; i++) { 
    int userrating; 
    cout << "Enter the rating for user " << i + 1 << " :"; 
    cin >> userrating; 
    movie[1].addRating(userrating); 
} 

  cout<<endl; 
  cout<<"Name: "<<movie[0].getmoviename()<<endl; 
  cout<<"MPAA: "<<movie[0].getmpaarating()<<endl; 
  cout<<"The Average rating is: " <<movie[0].getAverage(); 
  cout<<endl; 
  cout<<"Name: "<<movie[1].getmoviename()<<endl; 
  cout<<"MPAA: "<<movie[1].getmpaarating()<<endl; 
  cout<<"The Average rating is: " <<movie[1].getAverage(); 
} 

string Movie::getmoviename() { 
  return this->moviename; 
} 

void Movie::setmoviename(string moviename) { 
  this->moviename = moviename; 
} 
string Movie::getmpaarating() { 
  return this->mpaa; 
} 
void Movie::setmpaarating(string mpaa) { 
  this->mpaa = mpaa; 
} 
void Movie::addRating(int n) { 
  if (n >= 0 && n <= 5) { 
    switch (n) { 
      case 1: 
        r1 += 1; 
      case 2: 
        r2 += 1; 
      case 3: 
        r3 += 1; 
      case 4: 
        r4 += 1; 
      case 5: 
        r5 += 1; 
    } 
  } 
} 
double Movie::getAverage() { 
  double total = 0.0 + r1 + r2 + r3 + r4 + r5; 
  return total / 5; 
} 
Movie::Movie(string moviename, string mpaa) { 
  setmoviename(moviename); 
  setmpaarating(mpaa); 
  this->r1 = this->r2 = this->r3 = this->r4 = this->r5 = 0; 
} 

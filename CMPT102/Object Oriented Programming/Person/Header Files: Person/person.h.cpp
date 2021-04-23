
#include <iostream>
#include <string>
using namespace std;

class Person{
  private:
    string name;
    string phone;
    string email;
  public:
    Person();
    Person(string, string, string);
    string getName();
    void setName(string);
    string getPhone();
    void setPhone(string);
    string getEmail();
    void setEmail(string);
    void printInfo();
};
    

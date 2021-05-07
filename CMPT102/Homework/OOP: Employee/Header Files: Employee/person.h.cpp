#include <iostream>
using namespace std;

class Person{
  protected:
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

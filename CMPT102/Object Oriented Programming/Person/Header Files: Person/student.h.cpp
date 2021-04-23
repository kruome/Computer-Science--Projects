#include "person.h"

class Student : public Person {
  private:
    int id;
    string major;
  public:
    Student(string, string, string, int, string);
    int getId();
    void setId(int);
    string getMajor()
    void setMajor(string);
    void printInfo();
};

#include <iostream>
using namespace std;

class Student {
  private:
    int numofcourses;
    string *courses;
  public:
    Student(int);
    void setCourses();
    void getCourses();
    ~Student();
};

int main(){
  return 0;
}

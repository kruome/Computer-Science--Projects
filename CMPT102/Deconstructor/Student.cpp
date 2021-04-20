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
    Student s(2);
    s.setCourses();
    cout<<endl;
    s.getCourses();
    
  return 0;
}

Student::Student(int numofcourses){
    this->numofcourses = numofcourses;
    courses = new string[numofcourses];

}
void Student::setCourses(){
    for(int i = 0; i < numofcourses; i++){
        cout << "Enter a course: ";
        getline(cin,courses[i]);
    }
}
void Student::getCourses(){
    for(int i = 0; i < numofcourses; i++){
        cout<<"Course " <<i + 1<<": "<< courses[i] <<endl;
    }
}
Student::~Student(){
    delete[] courses;
}

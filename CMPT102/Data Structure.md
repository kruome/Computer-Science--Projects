```cpp
#include <iostream>
#include <string>
using namespace std;

struct Date{
    int day;
    int month;
    int year;
};

struct Student{
    int id;
    string name;
    int year;
    double gpa;
    Date dob;
};

int main(){
    
    Student y;
    
    cout<<"Enter the student ID: ";
    cin>>y.id;
    cout<<"Enter the student name: ";
    cin>>y.name;
    cout<<"Enter the student year: ";
    cin>>y.year;
    cout<<"Enter the student gpa: ";
    cin>>y.gpa;
    cout<<"Enter the date of birth (DD/MM/YY): ";
    cin>>y.dob.day >> y.dob.month >>y.dob.year;
    
    cout<<endl;
    
    cout<< "ID: "<< y.id<<endl;
    cout<< "Name: "<<y.name<<endl;
    cout<< "Year in school: " <<y.year<<endl;
    cout<<"GPA: "<<y.gpa<<endl;
    cout<<"DOB: "<<y.dob.day<<"/"<<y.dob.month<<"/"<<y.dob.year;
    
    return 0;
}
```

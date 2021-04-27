#include <iostream>
using namespace std;

class Person{
    public:
    Person(){
        cout<<"Person's constructor"<<endl;
    }
    ~Person(){
        cout<<"Person's destructor"<<endl;
    }
};

class Employee : public Person{
    public:
    Employee(){
        cout<<"Employee's constructor"<<endl;
    }
    ~Employee(){
        cout<<"Employee's destructor"<<endl;
    }
};

class Faculty : public Employee{
    public:
    Faculty(){
        cout<<"Faculty's constructor"<<endl;
    }
    ~Faculty(){
        cout<<"Facuty's destructor"<<endl;
    }
};
int main(){
    Faculty e1;
    return 0;
}

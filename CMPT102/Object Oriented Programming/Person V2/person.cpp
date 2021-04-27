#include <iostream>
using namespace std;

class Person{
    public:
    Person(){
        cout<<"Person's constructor"<<endl;
    }
};

class Employee : public Person{
    public:
    Employee(){
        cout<<"Employee's constructor"<<endl;
    }
};

class Faculty : public Employee{
    public:
    Faculty(){
        cout<<"Faculty's constructor"<<endl;
    }
};
int main(){
    Faculty e1;
    return 0;
}

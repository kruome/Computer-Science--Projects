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
int main(){
    Employee e1;
    return 0;
}

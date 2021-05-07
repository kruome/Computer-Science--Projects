#include "staff.h"

Staff::Staff(){
    title = "e.g cleaner";
}
Staff::Staff(string name, string phone, string email, string office, int salary, string title) : Employee(name, phone, email, office, salary){
    this->title = title;
}
string Staff::getTitle(){
    return title;
}
void Staff::setTitle(string title){
    this->title = title;
}
void Staff::printInfo(){
    Employee::printInfo();
    cout<<"Title: " << title << endl;
}

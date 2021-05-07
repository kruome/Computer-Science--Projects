#include "employee.h"

Employee::Employee(){
    office = "e.g Admin";
    salary = 0;
}
Employee::Employee(string name, string phone, string email, string office, int salary) : Person(name, phone, email){
    this->office = office;
    this->salary = salary;
}
string Employee::getOffice(){
    return office;
}
void Employee::setOffice(string office){
    this->office = office;
}
int Employee::getSalary(){
    return salary;
}
void Employee::setSalary(int salary){
    this->salary = salary;
}
void Employee::printInfo(){
    Person::printInfo();
    cout<<"Office: " << office << endl;
    cout<<"Salary: " << salary << endl;
}

#include "faculty.h"

Faculty::Faculty(){
    department = "e.g Arts";
    rank = "e.g teacher";
}
Faculty::Faculty(string name, string phone, string email, string office, int salary, string department, string rank) : Employee(name, phone, email, office, salary){
    this->department = department;
    this->rank = rank;
}
string Faculty::getDepartment(){
    return department;
}
void Faculty::setDepartment(string department){
    this->department = department;
}
string Faculty::getRank(){
    return rank;
}
void Faculty::setRank(string rank){
    this->rank = rank;    
}
void Faculty::printInfo(){
    Employee::printInfo();
    cout<<"Department: " << department << endl;
    cout<<"Rank: " << rank << endl;
}

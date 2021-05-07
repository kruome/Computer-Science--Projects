#include "graduate.h"

Graduate::Graduate(){
  advisor = "unassigned";
}
Graduate::Graduate(string name, string phone, string email, int id, string major, string advisor) : Student(name, phone, email, id, major){
  this->advisor = advisor;
}
String Graduate::getAdvisor(){
  return advisor;
}
void Graduate::setAdvisor(string advisor){
  this->advisor = advisor;
}
void Graduate::printInfo(){
  Student::printInfo()
  cout<<"Advisor: " << advisor <<endl;
}

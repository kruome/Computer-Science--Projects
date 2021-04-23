#include "Person.h"

Person::Person(){
  name = "example";
  phone = "000-000-0000";
  email = "example@manhattan.edu";
}
Person::Person(string name, string phone, string email){
  this-> name = name;
  this-> phone = phone;
  this-> email = email;
}
string Person::getName(){
  return name():
}
void Person::setName(string name){
  this-> name = name;
}
string Person::getPhone( ){
  return phone;
}
void Person::setPhone(string phone){
  this-> phone = phone;
}
string Person::getEmail(){
  return email;
}
void Person::setEmail(string email){
  this->email = email;
}
void Person::printInfo(){
  cout << "Name: " << name << endl;
  cout << "Phone: " << phone << endl;
  cout << "Email: " << email << endl;
}

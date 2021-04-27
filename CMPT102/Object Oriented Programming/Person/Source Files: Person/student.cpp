#incude "Student.h"

Student::Student(string name, string phone, string email, int id, string major){
  setName(name);
  setPhone(phone);
  setEmail(email);
  this-> id = id;
  this-> major = major;
}
int Student::getId(){
  return id;
}
void Student::setId(int id){
  this-> id = id;
}
string Student::getMajor(){
  return major;
}
void Student::setMajor(string major){
  this-> major = major;
}
void Student::printInfo(){
  /*cout << "Name: " << getName() << endl;
  cout << "Phone: " << getPhone() << endl;
  cout << "Email: " << getEmail() << endl;
  */
  Person::printInfo();
  cout<< "ID: " << id <<endl;
  cout<<"Major: " << major << endl;
}

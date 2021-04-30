#include <iostream>
using namespace std;

class Base{
  public:
    void x();
    void y();
};

class Derived : public Base{
  public: 
    void y();
};

int main(){
  Derived d;
  d.x();
  return 0; 
}

void Base::x(){
  y();
}
void Base::y(){
  cout<<"Base class \n";
}

void Derived::y(){
    cout<< "Derived class \n";
}

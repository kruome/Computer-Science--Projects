#include <iostream>
using namespace std;

class Base{
  public:
    void x();
    virtual void y();
};

class Derived : public Base{
  public: 
    void y();
};

int main(){
  Base b;
  Derived d;
  b.x();
  d.x();
  d.y();
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

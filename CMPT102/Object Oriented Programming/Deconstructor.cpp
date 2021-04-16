#include <iostream>
using namespace std;

class Demo{
  public:
  Demo();
  ~Demo();
};

int main(){
  Demo d; 
  cout <<"Processing the demo object \n";
  return 0;
}
  
Demo::Demo(){
  cout<<"Calling the constructor \n";
}
Demo::~Demo(){
  cout<<"Calling the destructor \n";
}

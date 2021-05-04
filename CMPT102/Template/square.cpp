#include <iostream>
using namespace std;

template <class T>
T square(T);

int main(){
  cout << square(10) << endl;
  return 0;
}

template <class T>
T square(T num){
  return num * num;
}

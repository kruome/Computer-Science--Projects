#include <iostream>
using namespace std;

template <class T>
T maximum(T, T);

int main(){
    
  cout<<maximum(2,3);
  return 0;
}

template <class T>
T maximum (T num1, T num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

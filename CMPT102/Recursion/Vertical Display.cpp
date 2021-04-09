#include <iostream>

using namespace std;

void writeVertical(int n);

int main()
{
    writeVertical(123);
    return 0;
}

void writeVertical(int n){
 if (n%10 == 0){
 return;

 }else{

 writeVertical(n/10);
  cout<<n%10<<endl;

 }
}

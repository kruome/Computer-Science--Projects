```cpp
#include <iostream>

using namespace std;

int
main ()
{
  int size;
  cout<<"How many elements? ";
  cin >> size;
  
  int *arrayptr = new int[size];
  //The address is not given prior to this line of code running., therefore, new is required to specifiy it
  
  for (int i = 0; i < size; i++){
      arrayptr[i] = i;
      cout<<arrayptr[i]<< " ";
  }
  
  delete[] arrayptr;
  return 0;
}
```
--------------------------------------------------------
```cpp
#include <iostream>
using namespace std;

int* getArray(int, int, int);

int main(){
    int* arrayptr = getArray(1,2,3);
    cout<<arrayptr<<endl;
    
    for(int i = 0; i < 3;i++){
        cout<<*(arrayptr + i)<< " ";
    }
    
    delete[] arrayptr;
}

int* getArray(int num1, int num2, int num3){
    int *a = new int[3];
    a[0] = num1;
    a[1] = num2;
    a[2] = num3;
    
    return a;
}
```

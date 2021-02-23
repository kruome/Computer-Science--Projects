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

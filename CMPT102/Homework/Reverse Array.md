```cpp
#include <iostream>
using namespace std;

int* reversearr(int *, int);
int main()
{
    const int size = 5;
    int array[size] = { 1,2,3,4,5};
    cout<<"Array: ";
    for(int i=0; i <size;i++){
        cout<<array[i]<<" ";
    }
    
    int *revarray = reversearr(array, size);
    
    cout<<endl<<"Reverse Array: ";
    for(int i=0;i<size;i++){
        cout<<*(revarray + i)<< " ";
    }
    
    delete[] revarray;
    return 0;
}

int* reversearr(int *array, int size){
    int *ptr = new int[size];
    
    for(int i=0; i<size;i++){
        *(ptr + size - i - 1) = *(array + i);
    }
    return ptr;
}
```

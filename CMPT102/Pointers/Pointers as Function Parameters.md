```cpp
#include <iostream>
using namespace std;

void displayValues(int *a, int size);
void swap(int& x, int& y);
void swap2(int* x, int* y);

int main()
{
    int number1 = 10;
    int number2 = 20;
    
    int values[3] = {4,7,11};
    displayValues(values, 3);
    cout<<endl;
    
    cout<<"Before swapping: "<<number1<<" "<<number2<<endl;
    swap(number1,number2);
    cout<<"After swapping: "<<number1<<" "<<number2<<endl;
    swap2(&number1,&number2);
    cout<<"After reverting the swap using addresses: "<<number1<<" "<<number2<<endl;

    return 0;
}

void displayValues(int *a, int size){
    for(int i = 0; i < size; i++){
        cout<<*(a+i)<<" ";
    }
}
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

void swap2(int* x, int* y){
   int temp = *x;
   *x = *y;
   *y = temp;
}
```
----------------------------------------------
```cpp
int main()
{
    int number1 = 10;
    int number2 = 20;
    
    const int a = 25;
    const int b = 35;
    const int *ptr = &a;
    cout<<ptr<<endl;
    ptr = &b;
    cout<<ptr<<endl;
    
    return 0;
}
```

```cpp
#include <iostream>
using namespace std;

void displayValues(int *a, int size);

int main()
{
    int values[3] = {4,7,11};
    displayValues(values, 3);

    return 0;
}

void displayValues(int *a, int size){
    for(int i = 0; i < size; i++){
        cout<<*a<<" ";
        *a++;
    }
}
```

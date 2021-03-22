```cpp
#include <iostream> 
using namespace std;

int sum(int n); 

int main(){ 
    cout<<"The sum is " << sum(50); 
    return 0; 
} 

int sum(int n){ 
    if(n == 0){ 
        return 0; 
    } 
    else{ 
        return n + sum(n-1); 
    } 
} 
```

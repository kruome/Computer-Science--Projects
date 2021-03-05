```cpp
#include <iostream>
using namespace std;

void countDown(int n);
void countUp(int n); //1, 2, 3, ... , n
int main(){
    
    countDown(10);
    cout<<endl;
    countUp(10);
}

void countDown(int n){
    if(n >= 0){
        cout<<n<<" ";
        countDown(n-1);
    }
}
void countUp(int n){
    if(n >= 0){
        countUp(n-1);
        cout<<n<<" ";
    }
}
```

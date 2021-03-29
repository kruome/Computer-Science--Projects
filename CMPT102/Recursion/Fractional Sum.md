```cpp
#include <iostream>
using namespace std;

double fractionsum(double n);
int main(){
    cout<<fractionsum(5);
}
double fractionsum(double n){
    if(n==0){
        return 0;
    }else{
        return (1/n)+(fractionsum(n-1));
    }
}
```

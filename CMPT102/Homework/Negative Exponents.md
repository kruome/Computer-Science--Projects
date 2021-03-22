```cpp
#include <iostream>
using namespace std;

double power(double x, double n);

int main(){
    int base, exp;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the exponent: ";
    cin>>exp;
    cout<<endl;
    cout<<power(base,exp);
}

double power(double x, double n){
    if(n==0){
        return 1;
    }
    else if(n<0){
        n = n * -1;
        return 1/(x * power(x,n-1));
    }else{
        return power(x,n-1)*x;    
    }
    

}
```

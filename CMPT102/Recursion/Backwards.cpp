#include <iostream>
using namespace std;

void backward(int n);

int main ()
{
    backward(1234);
    return 0;
}

void backward(int n)
{
    if (n == 0){
        return;
    }else{
        cout<<n%10;
        backward(n/10);
    }
    /*
    while(n>0){
        cout<<n%10; 
        n = n/10;
    }
    */

}

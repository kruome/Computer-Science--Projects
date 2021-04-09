#include <iostream>
using namespace std;

int power(int x, int n);

int main(){
    
    cout<<power(2,10);
}

int power(int x, int n){
    if(n==0){
        return 1;
    }
    return power(x,n-1)*x; // Finding the missing link 
}

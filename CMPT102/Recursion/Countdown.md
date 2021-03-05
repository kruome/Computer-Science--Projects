#include <iostream>
using namespace std;

void countDown(int n);

int main(){
    
    countDown(10);
    return 0;
}

void countDown(int n){
    while(){
        cout<<n<<endl;
        countDown(n-1);
    }
}

#include <iostream> 
using namespace std; 

int handshake(int n); 

int main(){ 

    int people; 

    cout<<"How many people are in the room? "; 

    cin>> people; 

    cout<<"The total number of handshake(s): "<<handshake(people); 

} 

int handshake(int n){ 

    if(n<2){ 

        return n - 1; 

    }else{ 

     return n - 1 + handshake(n - 1); 

    } 

} 

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

 int sum = 0;
 int scores[15][10];
 
 srand(time(0));
 for(int row = 0; row < 15;row++){
     for(int colu = 0;colu < 10;colu++){
         scores[row][colu] = rand() % 51 + 50;
         cout<< scores[row][colu]<<" ";
         sum +=scores[row][colu];
         }
         cout<<endl;
     
 }
 cout<<"The total sum is "<< sum;
    
}

#include <iostream>
using namespace std;

bool is_symmetric(int a[], int size);

int main()
{
   int numbers[5] = {1,2,1,2,1};
   if(is_symmetric(numbers,5)){
       cout<<"Symmetric\n";
   }
   else{
       cout<<"Not symmetric\n";
       
   }
   return 0;
}

bool is_symmetric(int a[], int size){

    for(int i = 0; i < size / 2 ; i++){
    
        if(a[i] != a[size - 1 - i]){
            
            return false;
        }
        
    }
    return true;
}

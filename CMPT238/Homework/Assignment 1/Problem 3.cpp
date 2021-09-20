//Kalden Yugyel Dorji
//Assignment #1 Problem 3

#include <iostream>
using namespace std;

void bubblesort(char x[], int size);
void print(char x[], int size);
int main()
{
    char arr[10] = {'a','v','e','r','q','b','c','d','p','z'};
    bubblesort(arr,10);
    print(arr,10);
    return 0;
}
void print(char x[], int size){
    for(int i = 0; i < size;i++){
        cout<<x[i] << " ";
    }
}
void bubblesort(char x[], int size){
    bool swapped = true;
    int pass = 0;
    for(int i = size - 1; i > 0 && swapped;i--){
        swapped = false;
        for(int j = 0; j < i; j++){
            if(x[j] < x[j + 1]){
                swap(x[j],x[j + 1]);
                swapped = true;
            }
            pass++;
            print(x,size);
            cout<<"\n";
        }
    }
    
}

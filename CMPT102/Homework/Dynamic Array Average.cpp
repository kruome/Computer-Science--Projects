
#include <iostream>
using namespace std;

int getaverage(int a[],int size);
int main()
{
     int size; 
    cout<<"Enter the size of the array: ";
    cin>>size;
    
    int *arrayptr = new int[size];
    
    for( int i = 0; i < size; i++){ //Ask user for array values
        cout<<"Enter the value for test score " << i+1 << ": ";
        cin>> arrayptr[i];
    }
    cout<<endl<<"This is the array you have defined: "<<endl;
    for( int i = 0; i < size; i++){ //List array values
        cout<<arrayptr[i]<<" ";
    }
    
    cout<<endl<<"The average of the user-defined array is: "<< getaverage(arrayptr, size);
    delete[] arrayptr;
    return 0;
}
int getaverage(int a[], int size){
    int sum = 0;
    
    for(int i = 0; i < size; i++){
        sum = sum + a[i];
    }
    return sum / size;
}


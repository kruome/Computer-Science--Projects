#include <algorithm>
#include <iostream>
using namespace std;

int lis(int a[], int size){
    
    int memo[size];
    int l = 0;

    for(int i = 0; i < size; i++){
        memo[i] = 1;
    }
    
    for(int i = 0; i < size; i++){
        for(int j = 1; j<size;j++){
            if (a[i] > a[j] && memo[i] < memo[j] + 1){
                memo[i] = memo[j]+1;
            }
        }
    }
    
    for (int i = 0; i < size; i++)
        if (l < memo[i]){
            l = memo[i];
        }
    return l;
}

int main(){
    int array[9] = {10,22,9,33,21,50,41,60,80};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<"The longest increasing subsequence of the given array is: " << lis(array,n);
    return 0;
}


/*The recursive case of the recursive definition of LIS() used in this algorithm is: 

 if(a[i] > a[j] && memo[i] < memo[j] + 1){
   memo[i] = memo[j] + 1;

The base case for the recursive, memoization, definition of LIS() used in this algorithm is when the nested for-loops reaches the final value for i which satisfies the condition “i < size”, where the program then continues with the rest of the code with the length of the increasing subsequence successfully obtained.
  
The running time of this algorithm is O(n^2) since there is a nested for-loop which takes precedence in terms of degree of importance when comparing the runtime of each individual statement within the function “lis”.
*/

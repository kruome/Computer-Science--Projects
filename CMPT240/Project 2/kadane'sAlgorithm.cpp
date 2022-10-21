#include <iostream>
#include <algorithm>
using namespace std; 

int max_subarray(int array[], int size){
1.   int best_sum = 0;
2.   int current_sum = 0;

3.   for( int i = 0; i < size; i++){
4.      current_sum = max(0, current_sum + array[i]);
5.      best_sum = max(best_sum, current_sum);
    }
6.  return best_sum;
}

int main(){
    
	int arr[] = {-1, 1, 4, -10, 10, -2, 4, -3};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << "Maximum contiguous sum is "<<max_subarray(arr, size) << " ";
	cout<<endl;
    return 0;
}

/*The above code runs in Θ(n) time due to the following:

Lines 1, 2, and 6’s running times are C, constant 
Lines 3, 4, and 5 have a running time of n, which is dependent on the size of the array.

Therefore, the running time equation looks like the following: 

c + c + c + n + n + n = Θ(n) since the biggest degree present is n

*/

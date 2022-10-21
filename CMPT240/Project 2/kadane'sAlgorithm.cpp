#include <iostream>
#include <algorithm>
using namespace std;

int
max_subarray (int array[], int size)
{
  
int best_sum = 0;
  
int current_sum = 0;
  
for (int i = 0; i < size; i++)
    {
      
current_sum = max (0, current_sum + array[i]);
      
best_sum = max (best_sum, current_sum);
    
} 
return best_sum;

}


int
main ()
{
  
int arr[] = { -1, 1, 4, -10, 10, -2, 4, -3 };
  
int size = sizeof (arr) / sizeof (arr[0]);
  
cout << "Maximum contiguous sum is " << max_subarray (arr, size) << " ";
  
cout << endl;
  
return 0;

}

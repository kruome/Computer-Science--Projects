#include <iostream>
using namespace std;

//global var
int results[3];


int maxCrossingSubarray(int a[], int low, int mid, int high){
	int sum = 0;
	int maxL = a[mid];
	for (int start = mid; start >= low; start--)
	{
    	sum = sum + a[start];
    	if (sum > maxL)
        	maxL = sum;
	}
    
	sum = 0;
	int maxR = a[mid + 1];
	for (int end = mid + 1; end <= high; end++)
	{
    	sum = sum + a[end];
    	if (sum > maxR)
        	maxR = sum;
	}
	return (maxL + maxR);
}
int maxSubarray(int a[], int low, int high){
    int mid;
	int leftmax, rightmax, crossmax;
	if (low == high)        	// base case (one number in array)
    	return a[low];
	mid = (low + high) / 2;        	// divide
    
	leftmax = maxSubarray(a, low, mid);     	// conquere left
	rightmax = maxSubarray(a, mid+1, high);    	// conquere right
	crossmax = maxCrossingSubarray(a, low, mid, high);
    
	if (leftmax >= rightmax && leftmax >= crossmax){   // combine
    	results[0] = leftmax;
    	results[1] = low;
    	results[2] = mid;
    	return results[1];
	}else if (rightmax >= leftmax && rightmax >= crossmax){
    	return rightmax;
	}else
	    results[0] = crossmax;
    	results[1] = low;
    	results[2] = high;
    	return results[0];
}

int main()
{
	int a[] = {-1, 1, 4, -10, 10, -2, 4, -3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubarray(a, 0, n-1);
	cout << "Maximum contiguous sum is " << max_sum << " ";
	cout<<endl;
	cout<<"The sub array elements are: " << "{ ";
	for(int i = results[1]; i < results[2];i++){
	    cout<< a[i] << ", ";
	}
	cout<<"}";
	return 0;
}

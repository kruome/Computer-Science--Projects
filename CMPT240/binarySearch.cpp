#include <iostream>
using namespace std;
int
binarysearch (int arr[], int left, int right)
{

  if (right >= left)
    C
    {

      TT int mid = left + (right - left) / 2;
      C if (arr[mid] < arr[mid - 1])
	{
	  C return binarysearch (arr, left, mid - 1);
	T (n / 2)}
      else if (arr[mid] < arr[mid + 1])
	C return binarysearch (arr, mid + 1, right);
      T (n / 2) Else C return mid;
    C}

  return 1;
C}


int
main ()
{

  int arr[] = { 1, 3, 4, 6, 7, 8, 5, 2 };

  int n = sizeof (arr) / sizeof (arr[0]);

  int result = binarysearch (arr, 0, n - 1);

  cout << "Element is present at index " << result << endl;

  cout << arr[result];

  return 0;

}

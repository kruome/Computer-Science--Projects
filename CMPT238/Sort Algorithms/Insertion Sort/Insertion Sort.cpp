#include <iostream>


using namespace std;

void print(int[], int);

void insertionSort(int[], int);
int main()
{

	int A[] = { 10,-4,5,20,0,19 };
	print(A,6);
	insertionSort(A,6);
	print(A, 6);


}

void print(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << "\n";

}


void insertionSort(int A[], int size)
{
	int key;
	int i;
	for (int j = 1; j < size; j++)
	{
		key = A[j];
		i = j - 1;

		while (i >= 0 && A[i] > key)
		{
			A[i + 1] = A[i];
			i = i - 1;
		}

		A[i + 1] = key;
	}


}

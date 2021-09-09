#include<iostream>;
using namespace std;

int LinearSearch(int[], int, int);
int binarySearch(int[], int, int);

int main() {
	int a[5] = { 5,14,2,10,1 };
	int B[6] = { 3,5,6,7,10,11 };

	int result = LinearSearch(a, 5, 10);
	/*
	if (result >= 0) {
		cout << "A match found at location " << result << "\n";
	}
	else {
		cout << "no match found\n";
	}
	*/

	result = binarySearch(B, 6, 3);
	if (result >= 0) {
		cout << "A match found at location " << result << "\n";
	}
	else {
		cout << "no match found\n";
	}
	result = binarySearch(B, 6, 22);
	if (result >= 0) {
		cout << "A match found at location " << result << "\n";
	}
	else {
		cout << "no match found\n";
	}
}
int LinearSearch(int list[], int size, int value)
{
	bool found = false;
	int position = -1;
	int index = 0;

	while (index < size && !found)
	{
		if (list[index] == value)
		{
			found = true;
			position = index;
		}
		++index;

	}
	return position;
}
int binarySearch(int X[], int size, int value)
{
	int first = 0;
	int last = size - 1;
	int position = -1;
	int middle;
	bool found = false;

	while (first <= last && !found)
	{
		middle = (first + last) / 2;
		if (X[middle] == value)
		{
			found = true;
			position = middle;
		}
		else if (value > X[middle])
			first = middle + 1;
		else
			last = middle - 1;

	}

	return position;
}

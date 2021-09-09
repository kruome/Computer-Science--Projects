#include<iostream>;
using namespace std;

int binarySearch(int[], int, int);

int main() {
	
	int B[6] = { 3,5,6,7,10,11 };
	int	result = binarySearch(B, 6, 3);

	if (result >= 0) {
		cout << "A match found at location " << result << "\n";
	}
	else {
		cout << "No match found\n";
	}

	result = binarySearch(B, 6, 11);
	if (result >= 0) {
		cout << "A match found at location " << result << "\n";
	}
	else {
		cout << "No match found\n";
	}
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

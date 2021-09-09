#include<iostream>
#include<cstdlib>
using namespace std;

int binarySearch(char x[], int, char);

int main() {

	char B[5] = {'a', 'd', 'j', 'u', 'd'};
	int	result = binarySearch(B, 5, 'u');
	
	
	if (result >= 0) {
		cout << "A match found at location " << result << "\n";
	}
	else {
		cout << "No match found\n";
	}

	result = binarySearch(B, 5, 'n');
	if (result >= 0) {
		cout << "A match found at location " << result << "\n";
	}
	else {
		cout << "No match found\n";
	}
}
int binarySearch(char X[], int size, char value)
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

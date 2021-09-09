#include<iostream>;
using namespace std;

int binarySearch(const char x[], int, int);

int main() {

	char B[3] = { "a", "b", "c" };
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
int binarySearch(const char X[], int size, int value)
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

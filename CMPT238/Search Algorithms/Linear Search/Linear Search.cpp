#include<iostream>;
using namespace std;

int LinearSearch(int[], int, int);

int main() {
	int a[5] = { 5,14,2,10,1 };
	int result = LinearSearch(a, 5, 1);

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

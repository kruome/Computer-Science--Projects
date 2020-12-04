```cpp 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int max(int a[], int size);

int main() {
	int numbers[20];

	cout << "The largest number from the array is " << max(numbers,20);
	
}

int max(int a[], int size) {
	int max = a[0];

	for (int i = 0; i < size; i++) {
		a[i] = rand() % 100;
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}
```

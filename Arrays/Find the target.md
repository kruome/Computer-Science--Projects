```cpp
#include <iostream>

int search(int a[], int size, int target);
int main() {
	int array[3] = { 1,2,5 };
	std::cout << search(array, 3, 5);
}
int search(int a[], int size, int target) {
	int value = target;
	for (int i = 0; i < size; i++) {
		if (a[i] == value) {
			value == i;
			return i;
		}
	}
	value = -1;
	return value;
}
```

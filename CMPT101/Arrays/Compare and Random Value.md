```cpp
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int randomvalue(int a[], int size);
bool compare(int a[], int b[], int size);

int main() {
	int values[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int value[10] = { 1,2,8,4,5,6,7,8,9,10 };

	if (compare(values, value, 10)) {
		cout << "Same!\n";
	}
	else {
		cout << "Not the same!\n";
	}
	system("pause");
	return 0;
}
int randomvalue(int a[], int size) {
	srand(time(0));
	int random = a[rand() % size];
	return random;
}
bool compare(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		if (a[i] != b[i]) {
			return false;
		}
	}
	return true;
  ```

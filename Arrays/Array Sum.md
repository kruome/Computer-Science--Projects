111cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int find_sum(int a[], int size);

int main() {
	int numbers[20];
	srand(time(0));

	for (int i = 0; i < 20; i++) {
		numbers[i] = rand() % 100;
		cout << numbers[i] << " ";
	}
	cout << endl;
	cout << "The sum is " << find_sum(numbers, 20) << endl;
	
	system("pause");
	return 0;
}

int find_sum(int a[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
			sum += a[i];
	}
	return sum;
}
```

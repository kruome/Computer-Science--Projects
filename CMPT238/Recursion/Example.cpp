#include <iostream>
using namespace std;

void countDown(int num) {
	if (num == 0) {
		cout << "Blast off";
	}
	else {
		cout << num << " . . . \n";
		countDown(num - 1);
	}
}

int factorial(int num) {
	float total = 1;
	for (int i = 1; i <= num; i++) {
		total = total * i;
	}
	return total;
}
int factorial2(int num) {
	if (num == 1) {
		return 1;
	}
	return (num * factorial2(num - 1));
}

int gcd(int x, int y) {
	if (x % y == 0) {
		return y;
	}
	else {
		return gcd(y, x % y);
	}
}
int partition(int arr[], int start, int end) {
	int pivotvalue = arr[start];
	int pivotposition = start;

	for (int pos = start + 1; pos <= end; pos++) {
		if (arr[pos] < pivotvalue) {
			swap(arr[pivotposition + 1], arr[pos]);
			swap(arr[pivotposition], arr[pivotposition + 1]);
			pivotposition++;

		}
		return pivotposition;
	}
}
void quicksort(int arr[], int start, int end) {
	if (start < end) {
		int p = partition(arr, start, end);
		quicksort(arr, start, p - 1);
		quicksort(arr, p + 1, end);
	}
}
int main() {

	int arr[5] = { 1,22,4,55,10 };
	quicksort(arr, 0, 5);
	cout << "yes";
}

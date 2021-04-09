#include <iostream>
using namespace std;

int indexofSmallestElement(int a[], int size);

int main() {
	int userarray[10];
	cout << "Enter 10 values for the array: ";
	cin >> userarray[0];

	for (int i = 1; i < 10; i++) {
		cout << "Enter the next value: ";
		cin >> userarray[i];
	}
	cout << "The smallest value from the given array is " << indexofSmallestElement(userarray, 10) << endl;
	
	system("pause");
	return 0;
}
int indexofSmallestElement(int a[], int size) {
	int min = a[0];

	for (int i = 0; i < size; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

#include<iostream>
using namespace std;

void bubble_sort(int x[], int size);
void print(int Array1[], int size);

int main() {
	int A[] = { 11,4,0,3,1,6 };
	print(A, 6);
	bubble_sort(A, 6);
	print(A, 6);
}
void bubble_sort(int x[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (x[j] > x[j + 1]) {
				swap(x[j], x[j + 1]);
			}
		}
	}
}
void print(int Array1[], int size) {
	for (int i = 0; i < size; i++) {
		cout << Array1[i] << " ";
	} cout << "\n";

}

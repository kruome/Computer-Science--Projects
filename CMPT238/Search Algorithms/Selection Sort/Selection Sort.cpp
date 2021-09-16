#include<iostream>
using namespace std;

void improved_bubblesort(int x[], int size);
void print(int Array1[], int size);
void selectionSort(int x[], int size);

int main() {
	int A[] = { 3,1,2,9,4,3, -1, 2, -4};
	int size = 9;
	print(A, size);
	selectionSort(A, size);
	print(A, size);
}
void improved_bubblesort(int x[], int size) {
	
	int passes = 0; 
	int comparisons = 0;
	bool swapped = true; // Identify the flag and set it as such
	for (int i = size - 1; i > 0 && swapped; i--) {
		passes++;
		swapped = false; // limit the number of passes needed 
		for (int j = 0; j < i; j++) {
			comparisons++;
			if (x[j] > x[j + 1]) {
				swap(x[j], x[j + 1]);
				swapped = true;
				
			}
		}
		cout << "Pass#: " << passes << " includes " << comparisons << " number of comparisons.\n";
		comparisons = 0;

	}
}
void print(int Array1[], int size) {
	for (int i = 0; i < size; i++) {
		cout << Array1[i] << " ";
	} cout << "\n";

}
void selectionSort(int x[], int size) {
	int min;
	int minindex;

	for (int i = 0; i < size; i++) {
		min = x[i];
		minindex = i;
		for (int j = i + 1; j < size; j++) {
			if (x[j] < min) {
				min = x[j];
				minindex = j;
			}
			swap(x[i], x[minindex]);
		}
	}
}

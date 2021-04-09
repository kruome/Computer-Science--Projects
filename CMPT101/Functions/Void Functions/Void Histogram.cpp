#include <iostream>
using namespace std;

void displayHistogram(int a[], int size);
int main() {
	int array[6] = { 5,0,3,-1,1,2};
	displayHistogram(array, 6);
}
void displayHistogram(int a[], int size) {
	for (int i = 0; i < size; i++) {
		
		if (a[i] >= 1) {
			for (int j = 0; j < a[i]; j++) {
				cout << "*";
			}
		}
		cout << endl;
		
	}
}

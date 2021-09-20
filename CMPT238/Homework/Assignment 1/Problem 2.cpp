//Kadlen Yugyel Dorji
//Assignment #1 Problem 2

#include <iostream>
#include <ctime>
using namespace std;

void print(int x[], int);
void bubblesort(int x[], int);
int binarysearch(int x[], int, int);
int binarysearch2(int x[], int, int);

int main() {
    int array[15];
    srand(time(0));
    cout << "Original randomly generated array: ";
    for (int i = 0; i < 15; i++) {
        array[i] = (rand() % 21) - 10;
    }
    print(array, 15); 
    cout << "\n";

    cout << "The bubble sort: ";
    bubblesort(array, 15);
    print(array, 15);
    cout << "\n";
    int n;
    cout << "What value would you like to search? ";
    cin >> n;
    int res = binarysearch(array, 15, n);

    if (res>=0) {
        cout << "The value was found at index " << res << " after " << binarysearch2(array, 15, n) << " comparisons.";
    }
    else{
        cout << "After " << binarysearch2(array, 15, n) << " comparisons, the value is not within the array.";
    }
    cout << "\n";
    system("pause");
    return 0;
}
void print(int x[], int size) {
    for (int i = 0; i < size; i++) {
        cout << x[i] << " ";
    }
}
void bubblesort(int x[], int size) {
    int comparisons = 0;

    int pass = 0;
    int max = size;

    bool found = false;

    while (found == false && (pass !=max)) {   
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size - 1; j++) {
                if (x[j] > x[j + 1]) {
                    swap(x[j], x[j + 1]);
                }
            }
        }
        pass++;
    }
}
int binarysearch(int x[], int size, int value) {
    int first = 0;
    int last = size - 1;
    int position = -1;
    int comparisons = 0;
    int middle;
    bool found = false;
    
    while (first <= last && found == false) {
        middle = (first + last) / 2;
        comparisons++;
        if (x[middle] == value) {
            found = true;
            position = middle;
        }
        else if (value > x[middle]) {
            first = middle + 1;
        }
        else {
            last = middle - 1;
        }
    }
    return position;
}
int binarysearch2(int x[], int size, int value) {
    int first = 0;
    int last = size - 1;
    int position = -1;
    int comparisons = 0;
    int middle;
    bool found = false;

    while (first <= last && found == false) {
        middle = (first + last) / 2;
        comparisons++;

        if (x[middle] == value) {
            found = true;
            position = middle;
        }
        else if (value > x[middle]) {
            first = middle + 1;
        }
        else {
            last = middle - 1;
        }
    }
    return comparisons;
}

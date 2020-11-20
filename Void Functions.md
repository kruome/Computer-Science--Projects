```cpp
#include <iostream>
using namespace std;

void function1();
void function2();

int main() {

	cout << "Entering the main function \n";
	
	function1();
	cout << "Exiting the main function \n";

	return 0;
}
void function1() {
	cout << "Entering function 1 \n";
	function2();
	cout << "Exiting function 1\n";
}

void function2() {
	cout << "Entering function 2 \n";
	cout << "Exiting function 2 \n";
}

/*
void print_number(int number);

int main() {
	print_number(10);
	return 0;
}

void print_number(int number) {
	cout << "The number is " << number << endl;
}
*/

/*
void print_msg();

int main() {
	print_msg();
	return 0;
}
void print_msg() {
	cout << "Hello!\n";
	return;
}*/

/*double getAverage(double n1, double n2);
double getAverage(double n1, double n2, double n3);

int main() {

	cout << getAverage(10, 10) << endl;
	cout << getAverage(10, 10, 10) << endl;
	return 0;
}

double getAverage(double n1, double n2) {
	return (n1 + n2) / 2;
}

double getAverage(double n1, double n2, double n3) {
	return (n1 + n2 + n3) / 2;
}*/

/* int square(int& n);

int main() {
	int number = 10;
	cout << square(number) << endl;
	cout << number << endl;
	return 0;
}

int square(int& n) {
	n = n * n;
	return n;
}

void get_numbers(int& n1, int& n2);
void swap_numbers(int& num1, int& num2);
void sort_numbers(int& num1, int& num2);
void print_numbers(int num1, int num2);

int main() {
	int num1, num2, temp;
	get_numbers(num1, num2);
	sort_numbers(num1, num2);
	print_numbers(num1, num2);
	
	return 0;
}

void swap_numbers(int& num1, int& num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void get_numbers(int& n1, int& n2) {
	cout << "Enter a number: ";
	cin >> n1;
	cout << "Enter a number: ";
	cin >> n2;
}

void print_numbers(int num1, int num2) {
	cout << "The two numbers are " << num1 << " " << num2 << endl;
}

void sort_numbers(int& num1, int& num2) {
	int temp = num1;
	if (num1 > num2) {
		swap_numbers(num1, num2);
	}
}*/
```

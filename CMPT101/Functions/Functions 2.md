 ```cpp
 #include <iostream>
using namespace std;

double celsius(double f);

int main() {
	int f = 0;
	cout << "Fahrenheit\tCelsius\n";
	for (double i = 0; i <= 50; i++) {
		cout << f << "\t\t" << celsius(i) << "\n";
		f++;
	}
	return 0;
}

double celsius(double f) {
	double c = (f - 32) * 5 / 9;
	return c;
}
```
--------------------------------------------------------
```cpp

int my_abs(int abs);

int main() {
	cout << "Number\tAbsolute Value\n";
	for (int i = -10; i <= 0; i++) {
		cout << i << "\t\t"<<my_abs(i) << "\n";
	}
	return 0;
}

int my_abs(int abs) {
	if (abs < 0) {
		abs = abs * -1;
	}
	else {
		abs = abs;
	}
	return abs;
}
```
--------------------------------------------------------
```cpp

int factorial(int x);

int main() {
	cout << factorial(5) << endl;
}

int factorial(int x) {
	int fact;
	fact = 1;
	for (int i = x; i > 0; i--) {
		fact = i * fact;
	}
	return fact;
}
```
--------------------------------------------------------
```cpp

bool isPrime(int n);

int main() {
	
	for (int i = 2; i <= 1000; i++) {
		if (isPrime(i)) {
			cout << i << endl;
		}
	}
}
bool isPrime(int n) {
	bool isPrime = true;
	for (int i = 2; i <= n - 1; i++) {
		if (n % i == 0) {
			isPrime = false;
			break;
		}
	}
	return isPrime;
}
```
--------------------------------------------------------
```cpp
bool isEven(int n);

int main() {
	for (int i = 2; i <= 100; i++) {
		if (isEven(i)) {
			cout << i << endl;
		}
	}
}

bool isEven(int n) {
	bool isPrime = true;
	if (n % 2 == 0) 
		return true;
	else
		return false;
}
```
--------------------------------------------------------
```cpp
int getNumber();

int main() {
	int number = getNumber();
	cout << number << endl;

	return 0;
}

int getNumber() {
	int number;
	cout << "Enter a number: ";
	cin >> number;

	return number;
}
```

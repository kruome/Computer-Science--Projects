```cpp
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;


int multiply(int num1, int num2);
int celsius(int f);

int main() {
	
	cout << multiply(10, 20) << endl;


	
	int n;
	cout << "Enter a value to find its square root: ";
	cin >> n;

	double result = sqrt(n);

	cout << result << endl;
	--------------------------------------------------------

	int result = pow(2, 3); //2^3
	cout << result;*/
	int result = floor(4.2);
	cout << result;
	int guess, userinput, i, num;
	guess = 1;
	srand(time(0));
	num = (rand() % 10) + 1;

	cout << "Guess a number between 1-10: ";
	cin >> userinput;
	
	while (userinput != num) {
		cout << "Try again: ";
		cin >> userinput;
		guess++;
	}

	if (userinput == num) {
		cout << "You guessed correctly!" << endl;
	}
	cout << "It took you " << guess << " times to figure the lucky number out.";
	*/
	system("pause");
	return 0;
}

int multiply(int num1, int num2) {
	int result = num1 * num2;
	return result;
}

int celsius(int f) {
	cin >> f;
	int result = (5 / 9) * (f - 32);
	return result;
}
```

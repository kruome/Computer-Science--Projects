```cpp
#include <iostream>
using namespace std;

int main() {
	int number;

	cout << "Enter a number: ";
	cin >> number;

	if (number > 10)
		cout << number << " is greater than 10 \n";
	else {
		cout << number << " is less than or equal to 10 \n";
		cout << number << " is " << number << endl;
	}

	system("pause");
	return 0;
}
--------------------------------------------------------
int main() {
	double n1, n2;

	cout << "Enter two numbers: ";
	cin >> n1 >> n2;

	if (n1 > n2) {
		cout << "The larger value is " << n1 << endl;
	}
	else {
		cout << "The larger value is " << n2 << endl;
	}

	system("pause");
	return 0;
}
--------------------------------------------------------
int main() {
	int number;
	
	cout << "Enter a number: ";
	cin >> number;

	if (number%2 == 0)
		cout << "The number is even \n";
	else
		cout << "The number is odd \n";
	
	system("pause");
	return 0;
}
```

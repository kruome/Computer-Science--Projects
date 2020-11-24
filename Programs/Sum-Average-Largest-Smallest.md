```cpp
#include <iostream>
using namespace std;

int main() {
	int number, average, max, min;
	double sum;

	sum = 0;
	average = 0;

	cout << "Enter the first number: ";
	cin >> number;

	min = number;
	max = number;

	while (number >= 0) {
		
		if (number > max) {
			max = number;
		}
		if (number < min) {
		min = number;
		}

		sum = sum + number;
		average++;
		cout << "Enter the next number: ";
		cin >> number;
		
	
	}
	
	if (average > 0) {
		cout << "The sum is " << sum << endl;
		cout << "The average of these numbers is " << sum / average << endl;
		cout << "The largest number is " << max << endl;
		cout << "The smallest number is " << min << endl;
	}
	else
		cout << "You did not enter any non-negative number";
	
	
	return 0;
}
```

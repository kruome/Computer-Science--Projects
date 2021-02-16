```cpp
#include <iostream>
using namespace std;

int main() {
    
	int number, count, sum;
	sum = 0;
	count = 1;
	cout << "Enter 10 positive integers: " << endl;
	cin >> number;

	while((number >=0)&&(count<=10)){
		sum = sum + number;
		count++;
		cout << "Enter your next value: " << endl;
		cin >> number;
	}
	cout << sum;
```
--------------------------------------------------------
```cpp
	int sum, number;
	sum = 0;

	for (int i = 1; i <= 10; i++) {
		
		cout << "Enter a positive number: ";
		cin >> number;

		if (number <= 0) {
			continue;
		}

		sum = sum + number;
	}


	cout << "The sum is " << sum << endl;
	

	system("Pause");
	return 0;
}
```

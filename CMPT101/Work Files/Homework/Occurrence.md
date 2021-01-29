```cpp
#include <iostream>
using namespace std;

int main() {

	int integer[10];
	int counts[100];
	int user = 2;

	for (int i = 0; i < 100; i++) {
		counts[i] = 0;
	}

	cout << "Enter 10 integers between 0 and 99: ";
	cin >> integer[0];
	counts[integer[0]]++;
	while (integer[0] < 0 || integer[0]>100) {
		cout << "Enter 10 integers between 0 and 99: ";
		cin >> integer[0];
		counts[integer[0]]++;
	}

	for (int i = 1; i < 10; i++) {
		cout << "Enter the next value: ";
		cin >> integer[i];
		counts[integer[i]]++;
		user++;
		
	}
	cout << "The array is: ";
	for (int i = 1; i < 10; i++) {
		cout << integer[i] << " ";

	}
	cout << endl;
	
	for (int i = 0; i < 100; i++) {
		if (counts[i] != 1 && counts[i] != 0) {
			cout << i << " occurs " << counts[i] << " times." << endl;
		}
		else if (counts[i] == 1 && counts[i] != 0) {
			cout << i << " occurs " << 1 << " time." << endl;
		}
		else {
			continue;
		}
		
	}

	system("pause");
	return 0;
}
```

```cpp
#include <iostream>
using namespace std;

int main() {
	float degree, rate;

	cout << "Degrees\tRadians" << endl;

	for (degree = 10; degree <= 360; degree = degree + 10) {
		rate = degree * 3.14 / 180;
		cout << degree << "\t" << rate << endl;
	}
	
	cout << "i\tj";
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cout << i << "\t" << j << endl;
		}
	}
--------------------------------------------------------
	int size;
	cin >> size;

	for (int row = 1; row <= size; row++) {
		
		for (int columns = 1; columns <= size; columns++) {
			cout << "X";
			
		}
		cout << endl;
	}
}
```

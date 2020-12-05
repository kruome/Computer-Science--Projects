```cpp
#include <iostream>
using namespace std;


int main() {

	int scores[10];
	int best = 100;

	cout << "Enter 10 scores (0-100): " << endl;
	cin >> scores[0];
	for (int i = 1; i < 10; i++) {
		cout << "Enter the next value: " << endl;
		cin >> scores[i];
	}

	for (int i = 0; i < 10; i++) {
		if (scores[i] >= (best - 10)) {
			cout << "Student " << i << " score is " << scores[i] << " and grade is " << " A " << endl;
			continue;
		}
		if (scores[i] >= (best - 10)) {
			cout << "Student " << i << " score is " << scores[i] << " and grade is " << " B " << endl;
			continue;
		}
		if (scores[i] >= (best - 10)) {
			cout << "Student " << i << " score is " << scores[i] << " and grade is " << " C " << endl;
			continue;
		}
		if (scores[i] >= (best - 10)) {
			cout << "Student " << i << " score is " << scores[i] << " and grade is " << " D " << endl;
			continue;
		}
		else {
			cout << "Student " << i << " failed." << endl;
		}
	}

	return 0;
}
```

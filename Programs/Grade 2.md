```cpp
#include <iostream>
using namespace std;

int main() {


	int grade;
	cout << "Enter your grade from 0-100: ";
	cin >> grade;

	if ((grade >= 0) && (grade <= 100)) {
		if (grade > 90)
			cout << "A";

		else if (grade > 80)
			cout << "B";
		else if (grade > 70)
			cout << "C";
		else if (grade > 60)
			cout << "D";
		else
			cout << "F";
	}

	else
		cout << "Invalid score \n";



	return 0;
}
```

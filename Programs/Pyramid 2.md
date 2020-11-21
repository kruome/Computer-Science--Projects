```cpp
#include <iostream>
using namespace std;

int main() {
	
	for (int rows = 1; rows <= 120; rows++) {
		for (int columns = 1; columns <= rows; columns++) {
			cout << "X";
		}
		cout << endl;
	}

	int userinput, fact;
	fact = 1;
	cout << "Enter a integer to find its factorial: ";
	cin >> userinput;

	for (int i = 1; i <= userinput; i++) {
		fact = fact * i;
	}
	cout << "The factorial of " << userinput << " is " << fact << endl;
	

	system("Pause");
	return 0;
}
```

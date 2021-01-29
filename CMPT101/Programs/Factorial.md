```cpp
#include <iostream>
using namespace std;

int main() {
	
	int userinput, fact;
	fact = 1;
	cout << "Enter an integer to find its factorial: ";
	cin >> userinput;

	for (int i = 1; i <= userinput; i++) {
		fact = fact * i;
	}
	cout << "The factorial of " << userinput << " is " << fact << endl;
	

	system("Pause");
	return 0;
}
```

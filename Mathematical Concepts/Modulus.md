```cpp
#include <iostream>
using namespace std;

int main() {

	int seconds;

	cout << "Enter the number of seconds: " << endl;
	cin >> seconds;
	
	cout << seconds << " seconds is equivalent to: " << endl;
	cout << "Minutes: " << seconds / 60 << endl;
	cout << "Seconds: " << seconds % 60 << endl; 

	system("pause");
	return 0;
}
```

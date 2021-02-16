```cpp
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	
	string name;

	cout << "Enter your full name: ";
	// cin >> name;
	getline(cin, name);

	cout << "Hello " << name << endl;

	system("pause");
	return 0;
}
```
--------------------------------------------------------
```cpp
int main() {
	cout << static_cast<int>(9.2) << endl;
	return 0;
}
```
--------------------------------------------------------
```cpp

int main() {
	cout << static_cast<int>('65') << endl;
}
```
--------------------------------------------------------
```cpp

int main() {
	double number = 123456.78;
	cout << fixed << setprecision(2) << number << endl;

	//cout << setw(6) << 2897 << endl;
	//cout << setw(6) << 5 << endl;
	return 0;
}
```

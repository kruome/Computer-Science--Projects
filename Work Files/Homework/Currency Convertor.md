```cpp
#include <iostream>
using namespace std;

int main() {

	int quarters, dimes, nickels;
	quarters = 25;
	dimes = 10;
	nickels = 5;

	int q2, d2, n2;
	cout << "Enter the number of quarters you have: ";
	cin >> q2;
	cout << "Enter the number of dimes you have: ";
	cin >> d2;
	cout << "Enter the number of nickels you have: ";
	cin >> n2;

	int multiq, multid, multin;
	multiq = quarters * q2;
	multid = dimes * d2;
	multin = nickels * n2;

	cout << "You have a total of " << multiq + multid + multin << "cents!" << endl;

	system("pause");
	return 0;
}
```

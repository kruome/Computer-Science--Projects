```cpp
#include <iostream>
using namespace std;

int main() {

	string month1, month2, month3;
	double m1r, m2r, m3r;

	cout << "Enter the name of the first month: ";
	cin >> month1;

	cout << "Enter the amount of rain that fell during " << month1 << ":";
	cin >> m1r;

	cout << "Enter the name of the second month: ";
	cin >> month2;

	cout << "Enter the amount of rain that fell during " << month2 << ":";
	cin >> m2r;

	cout << "Enter the name of the third month: ";
	cin >> month3;

	cout << "Enter the amount of rain that fell during " << month3 << ":";
	cin >> m3r;

	double averagerf;
	averagerf = m1r + m2r + m3r;

	cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << averagerf / 3 << " inches.";

	system("pause");
	return 0;
}
```

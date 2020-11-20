```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int gas, mileage;

	cout << "Enter the number of gallons your car can hold: ";
	cin >> gas;
	cout << "Enter the number of miles your car can be driven on a full tank: ";
	cin >> mileage;
	
	double milespergallon = mileage / gas;

	cout<< "If your car has "<< gas << " gallons of gas and can be driven " << mileage << " miles on a full tank, then you should be able to drive your car "<< setprecision(2) << milespergallon << "miles per gallon";

	system("pause");
	return 0;
}
```

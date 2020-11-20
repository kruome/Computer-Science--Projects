```cpp
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

int main() {

	double pen, nick, dim, quart;
	pen = .1;
	nick = .5;
	dim = .10;
	quart = .25;

	int one, two, three, four;
	
	cout << "Welcome to Change for a Dollar Game! \n";
	cout << "Please enter the number of pennies: \n";
	cin >> one;
	cout << "Please enter the number of nickels: \n";
	cin >> two;
	cout << "Please enter the number of dimes: \n";
	cin >> three;
	cout << "Please enter the number of quarters: \n";
	cin >> four;

	int pen1, nick2, dim3, quart4;

	pen1 = pen * one;
	nick2 = nick * two;
	dim3 = dim * three;
	quart4 = quart * four;

	double dollar = pen1 + nick2 + dim3 + quart4;

	if (dollar == 1.00) {
		cout << "Congratulations, you won the Change for a Dollar game!";
	}
	else if (dollar < 1.00)
		cout << "The amount entered was less than one dollar";
	else
		cout << "The amount entered was more than one dollar";
  
  system("pause");
	return 0;
}
```

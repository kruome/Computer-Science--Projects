```cpp
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int coinToss();
int main() {
	int coin;
	int count;
	count = 0;

	cout << "Enter the amount of times the coin should be tossed (1-10) : ";
	cin >> coin;


	if (coin == 1) {
		switch (coinToss()) {
		case 1:
			cout << "The final toss is heads!" << endl;
			break;

		case 2:
			cout << "The final toss is tails!" << endl;
			break;
		}
	}

	else if ((count == 0) && (coin > 1)) {

		switch (coinToss()) {
		case 1:
			cout << "The first toss is heads!" << endl;
			break;

		case 2:
			cout << "The first toss is tails!" << endl;
			break;
		}
		count++;
	}

	for (int i = 2; i <= coin; i++) {



		if (i != coin) {
			switch (coinToss()) {
			case 1:
				cout << "The next toss is heads!" << endl;
				break;

			case 2:
				cout << "The next toss is tails!" << endl;
				break;
			}
		count++;
		}

		else if ((i == coin)) {
			switch (coinToss()) {
			case 1:
				cout << "The final toss is heads!" << endl;
				break;
			case 2:
				cout << "The final toss is tails!" << endl;
				break;
			}
		}
	}
}
int coinToss() {
	int randomnumber = (rand() % 2) + 1;
	return randomnumber;
}
```

```cpp
#include <iostream>
using namespace std;

int main() {
	/*
	int guess;
	int LUCKYNUM = 7;
	cout << "Guess a number between 1 and 10: \n";
	cin >> guess;

	while ((guess != LUCKYNUM) && (guess >= 1) && (guess <= 10)) {
		if (guess > LUCKYNUM) {
			cout << "Your guess is too high \n"
				 << "Please try again.. \n";
			cin >> guess;
		}
		else
			cout << "Your guess is too low \n"
				 << "Please try again.. \n";
		cin >> guess;
	}

	while ((guess < 1) || (guess > 10)) {
		cout << "Invalid Entry! \n";
		cout << "Enter a valid number between 1-10: \n";
		cin >> guess;
	}
	
	cout << "You won!";
  
  return 0;
}

  ```

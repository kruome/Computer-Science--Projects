#include <iostream>
using namespace std;

int main() {
	
	
	int luckynumber = 5;
	int guess;
	int chances = 5;

	cout << "Please guess a number between 1 and 10: ";
	cin >> guess;

	chances = chances - 1;
	

	while ((chances > 0) && (guess != luckynumber)) {
		cout << "Try again..\n";
		cout << "Please guess a number between 1 and 10:";
		cin >> guess;
		chances = chances - 1;
	}

	if (guess == 5) {
		cout << "you won! \n";
	}
	if ((chances == 0) && (guess != luckynumber)){
		cout << "You lost \n";
	}
	
	return 0;
}

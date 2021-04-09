#include <iostream>
using namespace std;

int main() {

	cout << "Enter a character: ";
	cin >> input;

	if ((input >= 'A') && (input <= 'Z')) {
		cout << "You entered an uppercase letter \n";
	}
	else if ((input >= 'a') && (input <= 'z')) {
		cout << "You entered a lowercase letter \n";
	}
	else if ((input >= '0') && (input <= '9')) {
		cout << "You entered a number \n";
	}
	else {
		cout << "Invalid input \n";
	}
}

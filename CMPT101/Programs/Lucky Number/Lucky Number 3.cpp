#include <iostream>
using namespace std;

int main() {
	int number , luckynumber;
	luckynumber = 3;
	
	cout << "Enter a number from 0-10: ";
	cin >> number;

	if (luckynumber == number) {
		cout << "Congratulations! You won the mini-game." << endl;
	}
	else{
		cout << "Sorry, you lost. Please try again." << endl;
		cout << "The lucky number is " << number << endl;
	}

	system("Pause");
	return 0;
}

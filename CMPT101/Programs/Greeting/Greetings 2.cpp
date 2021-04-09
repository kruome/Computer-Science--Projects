#include <iostream>
using namespace std;

int main() {

	char input;
	do {
		cout << "Hello \n";
		cout << "Would you like more greetings <Y/N>? \n";
		cin >> input;
		if ((input != 'n') || (input == 'N') && (input != 'y') || (input == 'Y')) {
			cout << "Invalid input! \n";
			cout << "Please enter a 'y' or a 'n'. \n";
			cin >> input;
		}
		if ((input == 'n') || (input == 'N')) {
			cout << "Have a good day then!";
		}
	} while ((input == 'y') || (input == 'Y'));
  
  return 0;	
}

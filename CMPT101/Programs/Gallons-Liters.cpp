#include <iostream>
#include <string>
using namespace std;

int main() {

	int choice;
	int volume;
	double rate;
	double cost;
	string unit;
	const double GALLON_TO_LITER = 0.264;
	
	cout << "Which unit would you like to use? \n";
	cout << "Choose 1 for gallon. \n";
	cout << "Choose 2 for liters. \n";
	cout << "Enter your choice and press enter: \n";
	cin >> choice;

	switch(choice){
	case 1:
		cout << "Enter the volume you would like to buy: \n";
		cin >> volume;
		rate = 2.79;
		cost = rate * volume;
		cout << "That will be $" << cost << " for " << volume << " gallons \n";
		break;
	case 2:
		cout <<"Enter the volume you would like to buy: \n";
		cin >> volume;
		rate = 2.79 * GALLON_TO_LITER;
		cost = rate * volume;
		cout << "That will be $" << cost << " for " << volume << " liters \n";
		break;
	default:
		cout << "Invalid choice. Please restart the system. \n";
	}

	switch (choice) {
	case 1:
		rate = 2.79;
		unit = "gallons";
		break;
	case 2:
		rate = 2.79 * GALLON_TO_LITER;
		unit = "liters";
		break;
	default:
		rate = -1;
		cout << "Invalid choice \n";
	}
	if (rate != -1) {
	
		cout << "Enter the volume: \n";
		cin >> volume;
		cost = rate * volume;

		cout << "That will be $" << cost << " for " << volume << " " << unit << endl;
	}
	return 0;
}

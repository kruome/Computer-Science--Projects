#include <iostream>
using namespace std;

int main() {

double distance, weight;

	cout << "What is the weight of your package in kilograms? \n";
	cin >> weight;

	if ((weight > 0) && (weight < 21)) {
		cout << "How far is the distance in miles? \n";
		cin >> distance;
		if ((distance > 10) && (distance < 3000)) {
			double cost, rate;
			if (weight <= 2) {
				rate = 1.10;
				cost = (distance / 500) * rate;
				cout << "The total cost will be $ " << cost << "\n";
			}
			else if ((weight > 2) && (weight < 6)) {
				rate = 2.20;
				cost = (distance / 500) * rate;
				cout << "The total cost will be $ " << cost << "\n";
			}
			else if ((weight > 6) && (weight < 10)) {
				rate = 3.70;
				cost = (distance / 500) * rate;
				cout << "The total cost will be $ " << cost << "\n";
			}
			else if (weight > 10) {
				rate = 4.80;
				cost = (distance / 500) * rate;
				cout << "The total cost will be $ " << cost << "\n";
			}
		}
		else
			cout << "The distance has to be between 10 miles to 3000 miles \n";
	}
	else
		cout << "The weight cannot exceed 20kgs \n";


	system("pause");
	return 0;
}

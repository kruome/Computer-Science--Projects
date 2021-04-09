#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float weight, height, age;

	cout << "Enter your weight in pounds: " << endl;
	cin >> weight;
	cout << "Enter your height in inches: " << endl;
	cin >> height;
	cout << "Enter your age in years: " << endl;
	cin >> age;

	char gender;
	int BMR;

	cout << "Are you male or female? (Enter f or m): " << endl;
	cin >> gender;

	if (gender == 'f') {
		BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
		cout << "Your BMR is " << BMR << endl;
	}
	if (gender == 'm'){
		BMR = 655 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
		cout << "Your BMR is " << BMR << endl;
	}

	int chocolatebars = BMR / 230;
	
	cout << "You would need to eat " << chocolatebars << " chocolate bars to maintain your weight!" << endl;

	if (chocolatebars == 100) {
		cout << "That is a lot of chocolate bars!";
	}
	
	return 0;
}

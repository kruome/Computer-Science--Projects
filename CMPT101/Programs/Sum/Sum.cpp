#include <iostream>
using namespace std;

int main() {

	double number, sum, average;
	

	sum = 0;
	average = 0;
	

	cout << "Enter the first number: \n";
	cin >> number;


	while (number > 0) {
		sum = sum + number;
		average = average + 1;
		cout << "Enter the next number: \n";
		cin >> number;
	}

	cout << "The sum of the numbers you entered is " << sum << endl;
	cout << "The average of the numbers you have entered is " << sum / average << endl;

	return 0;
}

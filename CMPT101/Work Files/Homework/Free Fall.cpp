#include <iostream>
using namespace std;

int fallingDistance();

int main() {
	
	double time = fallingDistance();
	double distance = 9.8 * pow(time, 2);
	cout << "The object fell " << distance << " meters in the span of " << time << " seconds." << endl;
	
	int timeplus = 1;
	int i;

	cout << "Time\tDistance" << endl;


	for ( i = 1; i <= 10; i++) {
		int distance2 = (9.8 * pow(timeplus, 2));
		cout << timeplus << "s" << "\t\t" << distance2<<"m" << endl;
		timeplus++;
	}
	system("pause");
	return 0;
}

int fallingDistance() {
	double time;
	cout << "Enter a value for time to find the distance traveled: ";
	cin >> time;

	return time;
}

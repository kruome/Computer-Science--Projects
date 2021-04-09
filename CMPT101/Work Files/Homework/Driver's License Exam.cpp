#include <iostream>
using namespace std;

int main() {

	char cheatsheet[20] = { 'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B' };
	char answers[20];
	int points = 0;

	cout << "Enter the answer for question 1: ";
	cin >> answers[0];
	while (answers[0] != 'A' && answers[0] != 'B' && answers[0] != 'C' && answers[0] != 'D') {
		cout << "Enter the answer for question 1 (A-D): ";
		cin >> answers[0];
	}

	for (int i = 1; i < 20; i++) {
		cout << "Enter the answer for question " << i + 1 << ": ";
		cin >> answers[i];
		while (answers[i] != 'A' && answers[i] != 'B' && answers[i] != 'C' && answers[i] != 'D') {
			cout << "Enter the answer for question "<<i+1<<" (A-D): ";
			cin >> answers[i];
		}
	}
	
	cout << "Your answer sheet: ";
	for (int i = 0; i < 20; i++) {
		cout << i+1<<"."<< answers[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 20; i++) {
		if (answers[i] == cheatsheet[i]) {
			points++;
		}
		else {
			cout << "You have answered question " << i + 1 << " incorrectly." << endl;
		}
	}

	cout << "Your total grade is " << points << " out of 20 questions." << endl;
	cout << "You entered " << points << " question(s) correctly and " << 20 - points << " question(s) incorrectly." << endl;

	if (points >= 2) {
		cout << "You have passed the exam";
	}
	else {
		cout << "You have failed the exam";
	}
	cout << endl;
	system("pause");
	return 0;
}

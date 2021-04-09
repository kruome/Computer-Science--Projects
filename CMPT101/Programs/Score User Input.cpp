#include <iostream>
using namespace std;

int main() {
	int score;
	
	cout << "Enter your score: ";
	cin >> score;

	if ((score >= 0) && (score <= 100))
		cout << "Valid \n";
	else
		cout << "Not valid \n";

	system("Pause");
	return 0;
}

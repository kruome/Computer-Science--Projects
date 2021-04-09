#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool isEven(int num);

int main() {

	int num[20];

	srand(time(0));
	//Random numbers
	cout << "These are the series of random numbers: ";
	for (int i = 0; i < 20; i++) {
		num[i] = rand() % 100;
		cout << num[i] << " ";
	}
	cout << endl;
	cout << "These are the even numbers: ";
	for (int i = 0; i < 20; i++) {
		if (isEven(num[i]) == true) {
			cout << num[i] << " ";
		}
	}

	return 0;
}

bool isEven(int num) {
	if (num % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

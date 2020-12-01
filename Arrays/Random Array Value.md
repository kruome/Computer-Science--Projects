```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {

	int scores[20];
	srand(time(0));
	int sum = 0;
	int aboveaverage = 0;
	int belowaverage = 0;
	int average;

	for (int i = 0; i < 20; i++) {

		scores[i] = (rand() % 41) + 60;
		sum += scores[i];
		cout << scores[i] << " ";
	}
	cout << endl;

	average = sum / 20;
	cout << "The average of these numbers is " << average << endl;
	
	for (int i = 0; i < 20; i++) {

		if (scores[i] > average) {
			aboveaverage++;
		}
		else {
			belowaverage++;
		}
	}
	cout << "There are " << aboveaverage << " numbers above the average." << endl;
	cout << "There are " << belowaverage << " numbers below the average." << endl;


	system("pause");
	return 0;
}
```

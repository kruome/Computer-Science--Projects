```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {

	const int NUMBER_OF_STUDENTS = 20;

	int old_scores[NUMBER_OF_STUDENTS];
	int new_scores[NUMBER_OF_STUDENTS];

	srand(time(0));
	cout << "Old scores are equal to: ";

	for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {

		old_scores[i] = (rand() % 41) + 60;
		new_scores[i] = old_scores[i];

		cout << old_scores[i] << " ";
	}
	cout << endl;
	cout << "New scores are equal to: ";
	for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
		cout << new_scores[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}


```

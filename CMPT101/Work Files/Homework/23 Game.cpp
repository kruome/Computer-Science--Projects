#include <iostream>
using namespace std;

int main() {
	
	int user, computer, pile, turn;
	pile = 23;
	turn = 0;

	while (pile > 0) {
		
		cout << "There are " << pile << " toothpicks remaining." << endl;

		switch (turn) {
		case 0:
			cout << "How many are you drawing? " << endl;
			cin >> user;
			while((!((user == 1 || user == 2 || user == 3) && user<= pile))) {
				cout << "Invalid input";
				cout << "Enter a valid input";

				cin >> user;
			}
				pile = pile - user;
				turn = (turn + 1) % 2;
				break;
			
		case 1:
			if (pile > 4) {
				computer = 4 - user;
			}
			else if (pile == 2) {
				computer = pile - 1;
			}
			else if (pile == 3) {
				computer = pile - 2;
			}
			else if (pile == 4) {
				computer = pile - 3;
			}
			else
				computer = pile - 1;

			cout << "The computer drew " << computer << endl;
			turn = (turn + 1) % 2;
			break;
		}
	}

	if (turn == 1) {
		cout << "You lost!";
	}
	else {
		cout << "You won!";
	}

	system("pause");
	return 0;
}

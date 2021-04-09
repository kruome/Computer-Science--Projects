int main() {
	char grade;
	cout << "What is your grade? ";
	cin >> grade;

	switch (grade) {
	case 'A':
		cout << "Excellent! \n";
		break;
	case 'B':
		cout << "Good Job! \n";
		break;
	case 'C':
		cout << "You passed. \n";
		break;
	case 'D':
	case 'F':
		cout << "You need to take the course again. \n";
		break;
	default:
		cout << "Invalid grade. Enter an input from A-F";
	}

	return 0;

}

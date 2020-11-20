```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {

	int number, sum;
	sum = 0;
	ifstream input;
	ofstream output;
	
	input.open("input.txt");
	output.open("output.txt");

	if (input.fail()) {
		cout << "The input file cannot be found\n";
	}
	else {
		while (!input.eof()) {
			input >> number;
			sum = sum + number;
		}
		output << sum << endl;
	}

	input.close();
	output.close();
		/*for (int i = 1; i <= 10; i++) {
			input >> number;
			std::cout << number << std::endl;
		}*/
		/*while (input >> number) {
			std::cout << number << std::endl;
		}*/

	return 0;
}
```

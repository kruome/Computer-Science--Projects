```cpp
#include <iostream>
using namespace std;

void function1();
void function2();

int main() {

	cout << "Entering the main function \n";
	
	function1();
	cout << "Exiting the main function \n";

	return 0;
}
void function1() {
	cout << "Entering function 1 \n";
	function2();
	cout << "Exiting function 1\n";
}

void function2() {
	cout << "Entering function 2 \n";
	cout << "Exiting function 2 \n";
}
```

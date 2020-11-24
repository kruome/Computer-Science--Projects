```cpp
#include <iostream>
using namespace std;

int main(){
char input;

	int count;
	
	cout << "How many greetings would you like? ";
	cin >> count;

	while (count > 0) {
		cout << "Hello! \n";
		count = count - 1;
	}
}
```

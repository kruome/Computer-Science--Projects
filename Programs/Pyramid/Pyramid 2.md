```cpp
#include <iostream>
using namespace std;

int main() {
	
	for (int rows = 1; rows <= 120; rows++) {
		for (int columns = 1; columns <= rows; columns++) {
			cout << "X";
		}
		cout << endl;
	}
	
	system("Pause");
	return 0;
}
```

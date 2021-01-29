```cpp
#include <iostream>
using namespace std;

void print_time(int seconds);

int main() {
	print_time(70000);
}

void print_time(int s) {
	int hours = (s / 3600) % 24;
	int minutes = (s / 60) % 60;
	int seconds = s % 60;
	cout << hours << " h," << minutes << " m," << seconds << " s,";

}
```

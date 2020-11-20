```cpp
#include <iostream>
using namespace std;

int main() {
    int i, userinput, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> userinput;
    
    for (i = 1; i <= userinput; i++)
    {
        if ((userinput % i == 0) && (userinput != i)) {
            sum = sum + i;
        }
    }
    
    if (sum == userinput) {
        cout << endl;
        cout << userinput << " is a perfect number." << endl;
    }
    else {
        cout << endl;
        cout << userinput << " is not a perfect number." << endl;
    }
    
    system("pause");
    return 0;
}
```

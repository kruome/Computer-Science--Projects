```cpp
#include <iostream>
using namespace std;

int gcd (int x, int y);

int main ()
{

cout << gcd (10,100);
}

int gcd (int x, int y)
{
    if (x % y == 0)			//base case
        return y;
    else
        return gcd (y, x % y);

}
```

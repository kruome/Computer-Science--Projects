```cpp
#include <iostream>
using namespace std;

int main()
{
    int scores[5];
    
    scores[0] = 90;
    scores[1] = 80;
    scores[2] = 70;
    scores[3] = 60;
    scores[4] = 50;
    cout<<scores[2];
--------------------------------------------------------
    int scores[5] = {90, 80, 70, 60, 50 };
    cout<<scores[0];
    
    for (int i = 0; i <= 4; i++)
    {
      cout << scores[i] << endl;
    }
    
    return 0;
}
```

```cpp

#include <iostream>
using namespace std;

int main()
{
    int num = 25;
    int *ptr = &num;
    
    cout<<num<<endl;
    cout<<&num<<endl;
    
    cout << ptr << endl;
    cout<<*ptr<<endl;
    
    *ptr = 30;
    cout<<num<<endl;
    cout<<ptr<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *intptr = &num;
    
    cout<< num; 
    cout<<endl;
    cout<< *intptr;
    cout<<intptr;
    return 0;
}

```

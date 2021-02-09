```cpp

#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int a[3][3] = { {1,2,3}, {3,4,2} , {3,2,1} };
    int b[3][3] = { {1,1,1}, {3,4,2}, {3,2,1} };
    int c[3][3];
    
    for(int rows = 0; rows < 3;rows++){
        for(int col = 0; col < 3; col++){
            c[rows][col] = a[rows][col] * b[rows][col];
            cout<< c[rows][col] << " ";
            
        }
        cout<<endl;
    }
    
    return 0;
}
```

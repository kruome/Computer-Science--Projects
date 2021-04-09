#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "The prime numbers from 3 to 100 are: " << endl;

    for (int i = 3; i <= 100; i++) {
        for (int j = 0; j <= 0; j++) {
            if (i % 2 != 0) {
                cout << i;
            }
        }
        cout << "\n";
    }

    return 0;
}

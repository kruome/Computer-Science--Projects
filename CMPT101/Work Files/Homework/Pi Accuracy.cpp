#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double userinput, pi, three;
    int one, two;
    three = 1;
    pi = 0;
     
    cout << "Enter a value: ";
    cin >> userinput;
    for ( one = 1,  two = 2; one < userinput; one++, two++)
     {
         pi = pi + pow((-1), two) * 4 / three;
         three = three + 2;
     }

    cout << "Pi is " << pi;
    return 0;
}

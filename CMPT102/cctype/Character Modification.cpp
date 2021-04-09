#include <cctype>
#include <iostream>

using namespace std;

int main()
{
    char c;
    
    cout<<"Enter a character: ";
    cin>> c;
    
    cout<<static_cast<char>(toupper(c))<<endl;;
    
    return 0;
}

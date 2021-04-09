#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int getSum(string s);

int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    cout<<endl;
    
    
    cout<<"The sum of the string is "<< getSum(s);
    return 0;
}

int getSum(string s){
    int sum = 0;
    for(int i=0;i<s.length();i++ ){
        if(isdigit(s[i])){
            sum += (s[i] - 48); //ASCII CODE FOR 0 IS 48 -- '0' CAN ALSO BE USED
        }
    }
    return sum;
}

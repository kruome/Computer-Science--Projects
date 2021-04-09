#include <cctype>
#include <string>
#include <iostream>

using namespace std;

int main()
{
   string s = "hello!";
   
   for (int i = 0; i < s.length(); i++){
       cout<<s[i]<<endl;
   }
    return 0;
}

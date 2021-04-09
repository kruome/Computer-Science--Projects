#include <cctype>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //string s = ""; == Empty string
    string s1, s2;
    cout<<"Enter the first string: ";
    getline(cin,s1); // cin>>s1;
    cout<<"Enter the second string: ";
    getline(cin,s2); // cin>>s2;
    
    if (s1 < s2){
        cout<<s1<<"\t"<<s2<<endl;
    }else{
        cout<<s2<<"\t"<<s1<<endl;
    }
    
    return 0;
}

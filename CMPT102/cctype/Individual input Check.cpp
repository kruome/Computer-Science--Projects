#include <cctype>
#include <string>
#include <iostream>
using namespace std;

bool isValid(string s); //LLLNNNN is the format 

int main()
{
    string s;
    cout<<"Enter your customer number: ";
    cin>>s;
    
    if(isValid(s)){
        cout<<"This is in the correct format."<<endl;
    }else{
        cout<<"This is not in the correct format."<<endl;
    }
    return 0;
}

bool isValid(string s){
    // Need to add a limit for the string to be 7
    for(int i = 0; i < 3; i++){
        if(!isalpha(s[i])){
            return false;
        }
        
    }
    for(int i = 3; i < 7 ; i++){
        if(!isdigit(s[i])){
            return false;
        }
    }
    
    return true;
}

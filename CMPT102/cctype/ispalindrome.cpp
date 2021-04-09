#include <cctype>
#include <iostream>
#include <string>
using namespace std;
string removePunct(string s);
string toUpper(string s);
bool isPalindrome(string s);

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    
    
    s = removePunct(s);
    cout<<s<<endl;
    
    s = toUpper(s);
    cout<<s<<endl;
    
    if(isPalindrome(s)){
        cout<<s<< " is a palindrome!";
    }else{
        cout<<s<<" is not a palindrome.";
    }
}
string removePunct(string s){
    string no_punct = ""; 
    for(int i = 0; i < s.length();i++){
        if(isalpha(s[i])){
            no_punct = no_punct + s[i];
        }
    }
    return no_punct;
}
string toUpper(string s){
    string upper = "";
    
    for(int i = 0; i < s.length(); i++){
        if(islower(s[i])){
            upper = upper + static_cast<char>(toupper(s[i]));
        } else{
            upper = upper + s[i];
        }
    }
    
    return upper;
}
bool isPalindrome(string s){
    for(int i = 0; i< (s.length()/2);i++){
        if(s[i]==s[s.length()- 1 - i]){
            continue;
        }else{
            return false;
        }
    }
    return true;
}

#include <iostream> 
#include <cctype>
using namespace std;

bool validString(string s);
int getmax(string s);
int getmin(string s);

int main(){
    
    string s;
    cout<<"Enter a string of digits: ";
    getline(cin, s);
    
    if(validString(s)){
        cout<<"The string is full of digits.";
    }
    else{
        cout<<"The string is not full of digits.";
    }
    cout<<endl;
    
    cout<<getmax(s)<<" is the highest digit.";
    cout<<endl;
    cout<<getmin(s)<<" is the lowest digit.";
}

bool validString(string s){
    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            continue;
        }else{
            return false;
        }
    }
    return true;
}
int getmax(string s){
    int max = s[0];
    for(int i = 0; i < s.length(); i++){
        if(s[i] > max){
            max = s[i];
        }
    }
    max = max - 48;
    return max;
}
int getmin(string s){
    int min = s[0];
    for(int i = 0; i<s.length();i++){
        if(s[i]<min){
            min = s[i];
        }
    }
    min = min - 48;
    return min;
}

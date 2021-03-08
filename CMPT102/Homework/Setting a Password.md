```cpp
#include <iostream> 
#include <cctype>
using namespace std;

bool validlength(string s);
bool validletter(string s);
bool validnumber(string s);

int main(){
    
    
    string s;
    
    cout<<"For your new password, it has to be:" <<endl<<endl;
    cout<<"1. Six characters long."<<endl;
    cout<<"2. Contain at least one uppercase and lowercase letter."<<endl;
    cout<<"3. Contain at least one number."<<endl<<endl;
    cout<<"Enter your new password: ";
    getline(cin,s);
    
    if(!validlength(s)){
        cout<<"Your password needs to be at least 6 characters long. Please restart the program and try again.";
    }
    if(!validletter(s)){
        cout<<"Your password needs to contain at least one uppercase and lowercase letter. Please restart the program and try again.";
    }
    if(!validnumber(s)){
        cout<<"Your password needs to contain at least one number.";
    }
    
    cout<<endl<<"Your password has been set.";
}
bool validlength(string s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        count++;
    }
    if(count>=6){
        return true;
    }else{
        return false;
    }
}
bool validletter(string s){
    int count = 0;
    for (int i = 0; i < s.length();i++){
        if(islower(s[i])){
            count++;
            break;
        }else{continue;}
    }
    
    for (int i = 0; i < s.length();i++){
        if(isupper(s[i])){
            count++;
            break;
        }else{continue;}
    }
    if(count == 2){
        return true;
    }else{return false;}
}
bool validnumber(string s){
    for(int i = 0; i <s.length();i++){
        if(isdigit(s[i])){
            return true;
        }else{continue;}
    }
    return false;
}
```

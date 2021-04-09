#include <cctype>
#include <iostream>

using namespace std;

int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    
    if (isdigit(c)){
        cout<<"It is a digit."<<endl;
    }else if(isalpha(c)){
        if(isupper(c)){
            cout<<"It is an uppercase letter."<<endl;
        }else{
            cout<<"It is a lowercase letter."<<endl;
        }
    }else{
        cout<<"It is neither a digit nor a letter."<<endl;
    }

    return 0;
}

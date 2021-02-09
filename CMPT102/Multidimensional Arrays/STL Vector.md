```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> scores;
    scores.push_back(70);
    scores.push_back(80);
    scores.push_back(90);
    
    //scores.pop_back();
    //scores.clear();
    if(scores.empty()){
        cout<<"The vector is empty."<<endl;
    }else{
        for(int i= 0; i < scores.size(); i++){
        cout<<scores[i]<<endl;
    }
    }

    return 0;
}
```

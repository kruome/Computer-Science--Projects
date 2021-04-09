#include <iostream> 
#include <vector> 
using namespace std; 

int main() 

{ 
    int num; 
    int score; 
  
    cout<<"How many students are there in your class?"<<endl; 
    cin>> num; 

    if(num < 0){ 
        cout<<"Enter a valid number:"<<endl; 
        cin>>num; 
    } 
  
    vector<int> scores(num); 

    for(int i = 0; i < num ; i++){ 
        cout<<"Enter test score "<< i + 1<<" :"<<endl; 
        cin>>score; 
        while((score<0)||(score>100)){ 
            cout<<"Enter a valid score: "<<endl; 
            cin>>score; 
        } 
        scores[i] = score; 
      
    } 

    int sum =0; 
  
    cout<<endl; 
    cout<<"These are the test scores:"; 
  
    for(int i = 0; i< num; i++){ 
        cout<<scores[i]<< " "; 
        sum = scores[i] + sum; 
    } 

    cout<<endl; 
    cout<<"The average of all test scores is " << sum/num; 

    return 0; 

} 


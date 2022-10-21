#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int num;
    
    cout<<"Enter the number of jobs: ";
    cin>>num;
    cout<<"Enter the the days it takes to complete the job and its associated fine: " << endl;
    double jobs[2][num];
    for( int i = 0; i < num; i++){
        cin >> jobs[0][i] >> jobs[1][i];
    }
    // Collects the information of jobs and fines
    
    double key;
    int j = 0;
    double ratio[num];
    double answers[num];
    
    for(int i = 0; i < num; i++){
        ratio[i] = (jobs[0][i]/jobs[1][i]);
    }
    
    for(int i = 1; i < num; i++){
        key = ratio[i];
        j = i;
        while(j > 0 && ratio[j-1]>key) {
            ratio[j] = ratio[j-1];
            j--;
        }
        ratio[j] = key; 
    }
    //sorted array of ratios
    
    for (int i = 0; i < num; i++){
        answers[i] = -1;
    }
    for(int i =0; i < num; i++){
        for(int j = 0 ;j <  num; j++){
            if(ratio[i] ==(jobs[0][j]/jobs[1][j])){
                answers[i] = j+1;
                jobs[0][j] = 0;
                jobs[1][j] = 1;
                break;
            }
        }
        
    }
    for (int i = 0 ; i < num ; i++){
        if(answers[i] == answers[i-1]){
            cout<< answers[i] + 1 << " ";
        }else{
            cout<<answers[i] << " ";
        }
    }
}

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int sum = 0;
    int totalsum=0;
    int scores[15][10];
    int countsum = 0;
    int countavg = 0;
    
    srand(time(0));
    for(int row = 0; row < 15; row++){
        for (int col = 0; col < 10; col++){
            scores[row][col]= rand()%51 + 50;
            cout<<scores[row][col]<<" ";
            totalsum+=scores[row][col];
            sum += scores[row][col];
            countsum++;
            countavg++;
        }
        cout<<endl;
        cout<<"The average of student "<<row + 1<< " is "<< sum/countavg;
        sum = 0;
        cout<<endl;
        countavg = 0;

    }
    cout<<"There are "<<countsum<<" numbers"<<endl;
    cout<<"The total sum is " << totalsum<<endl;
    cout<< "The average is "<<totalsum/countsum;
    
    return 0;
}

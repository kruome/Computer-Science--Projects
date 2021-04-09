```cpp
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
const int NUMBER_OF_STUDENTS = 15;
const int NUMBER_OF_HOMEWORK=10;
    int scores[NUMBER_OF_STUDENTS][NUMBER_OF_HOMEWORK];

    srand(time(0));
    int sum = 0;
    for(int row = 0; row <NUMBER_OF_STUDENTS; row++){
        sum = 0;
        for (int col = 0; col < NUMBER_OF_HOMEWORK; col++){
            sum += scores[row][col];
            
        }
        cout<<"Student "<<row + 1<<" has an average of " << sum/NUMBER_OF_HOMEWORK<<endl;
          
     
    }

    for(int col = 0; col < NUMBER_OF_HOMEWORK; col++){
        sum = 0;
        for(int row = 0; row < NUMBER_OF_STUDENTS; row++){
            sum+=scores[row][col];
        }
        cout<<"Homework "<< col + 1 << " has an average of" << sum/NUMBER_OF_HOMEWORK<<endl;
    }
    return 0;
}
```
--------------------------------------------------------
```
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    const int NUMBER_OF_STUDENTS =15;
    const int NUMBER_OF_TESTS = 10;
    int sum = 0;
    int totalsum=0;
    int scores[NUMBER_OF_STUDENTS][NUMBER_OF_TESTS];
    int countsum = 0;
    int countavg = 0;
    
    srand(time(0));
    for(int row = 0; row < NUMBER_OF_STUDENTS; row++){
        for (int col = 0; col < NUMBER_OF_TESTS; col++){
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
```

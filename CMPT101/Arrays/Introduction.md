```cpp
#include <iostream>
using namespace std;

int main()
{
    int scores[5];
    
    scores[0] = 90;
    scores[1] = 80;
    scores[2] = 70;
    scores[3] = 60;
    scores[4] = 50;
    cout<<scores[2];
--------------------------------------------------------
    int scores[5] = {90, 80, 70, 60, 50 };
    cout<<scores[0];
    
    for (int i = 0; i < 5; i++)
    {
      cout << scores[i] << endl;
    }
--------------------------------------------------------
    //Assignment//
    
    int scores[5];
    
    for (int i = 0; i < 5; i++) {
        scores[i] = 100;
    }
    
    for (int i = 0; i < 5; i++) {
        cout << scores[i] << endl;
    }
--------------------------------------------------------
     int scores[5];

  for (int i = 0; i < 5; i++)
    {
      cout << "Enter a score: ";
      cin >> scores[i];
    }

  for (int i = 0; i < 5; i++)
    {
      cout << scores[i] << endl;
    }
--------------------------------------------------------
    int dates[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

  cout << "For the year 2020: " << endl;
  for (int i = 0; i < 12; i++)
    {
      cout << "Month " << (i + 1) << " has " << dates[i] << " days." << endl;
    }
    --------------------------------------------------------
  //#include <string>//
  
  int dates[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  string months[12] = { "January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

  cout << "For the year 2020: " << endl;
  
  for (int i = 0; i < 12; i++){

    cout << months[i] << " has " << dates[i] << " days." << endl;

  }

    return 0;
}
```

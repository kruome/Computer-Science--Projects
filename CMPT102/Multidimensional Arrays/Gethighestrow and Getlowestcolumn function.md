```cpp
#include <iostream> 

using namespace std; 

  

void getHighestInRow(int a[][3], int r); 

void getLowestInColumn(int a[][3], int c); 

  

int main() 

{ 

    int array[3][3] = { {4,9,2} , {3,5,7} , {8,1,6} }; 

     

    getHighestInRow(array,3); 

   getLowestInColumn(array, 3); 

    return 0; 

     

} 

  

void getHighestInRow(int a[][3], int r) 

{ 

    int highest = a[0][0]; 

     

    for (int rows = 0; rows < 1; rows++) 

  { 

      for (int col = 0; col < r; col++) 

      { 

         if (a[rows][col] > highest) 

         { 

            highest = a[rows][col]; 

         } 

      } 

        cout << "The " << rows + 1 << " rows highest value is " << highest << endl; 

        highest=a[rows][r]; 

     } 

  

highest = a[1][0]; 

  

     for (int rows = 1; rows < 2; rows++) 

  { 

      for (int col = 0; col < r; col++) 

      { 

         if (a[rows][col] > highest) 

         { 

            highest = a[rows][col]; 

         } 

      } 

        cout << "The " << rows + 1 << " rows highest value is " << highest << endl; 

        highest=a[rows][r]; 

     } 

  

highest = a[2][0]; 

  

     for (int rows = 2; rows < 3; rows++) 

  { 

      for (int col = 0; col < r; col++) 

      { 

         if (a[rows][col] > highest) 

         { 

            highest = a[rows][col]; 

         } 

      } 

        cout << "The " << rows + 1 << " rows highest value is " << highest << endl; 

        highest=a[rows][r]; 

     } 

   

  

} 

  

void getLowestInColumn(int a[][3], int c){ 

    int lowest = a[0][0]; 

     

    for(int col = 0; col < 1; col++){ 

        for(int rows = 0; rows < c; rows++){ 

            if(a[rows][col] <lowest){ 

                lowest = a[rows][col]; 

            } 

        } 

        cout<< "The "<< col + 1<< " column lowest value is " << lowest<< endl; 

    } 

      lowest = a[0][1]; 

     

    for(int col = 1; col < 2; col++){ 

        for(int rows = 0; rows < c; rows++){ 

            if(a[rows][col] <lowest){ 

                lowest = a[rows][col]; 

            } 

        } 

        cout<< "The "<< col + 1<< " column lowest value is " << lowest<< endl; 

    } 

      lowest = a[0][2]; 

     

    for(int col = 2; col < 3; col++){ 

        for(int rows = 0; rows < c; rows++){ 

            if(a[rows][col] <lowest){ 

                lowest = a[rows][col]; 

            } 

        } 

        cout<< "The "<< col + 1<< " column lowest value is " << lowest<< endl; 

    } 
```

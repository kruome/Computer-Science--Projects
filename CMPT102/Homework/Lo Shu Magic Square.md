```cpp
#include <iostream> 

using namespace std; 

  

bool isLSMS(int a[][3], int rows); 

  

int main() 

{ 

   int loshu[3][3] = { {4,9,2} , {3,5,7} , {8,1,6} }; 

    

   for(int rows = 0; rows<3;rows++){ 

       for(int col = 0; col < 3; col++){ 

           cout<<loshu[rows][col] << " "; 

       } 

       cout<<endl; 

   } 

    

   if(isLSMS(loshu, 3)){ 

       cout<<"It is a Lo Shu Magic Square"; 

   }else{ 

       cout<<"This array is not a Lo Shu Magic Sqaure."; 

   } 

    

   return 0; 

} 

  

bool isLSMS(int a[][3], int r){ 

  

    int rowsum = 0; 

    //check rows 

    for (int rows = 0; rows < 3; rows++){ 

        for(int col = 0; col < 3; col++){ 

            rowsum = rowsum + a[rows][col]; 

        } 

        if(rowsum==15){ 

            rowsum = 0; 

            continue; 

        } 

        else{ 

            return false; 

        } 

    } 

    //check columns 

    int colsum =0; 

    for(int col = 0; col < 3; col++){ 

            for(int rows = 0; rows < 3; rows++){ 

                colsum = colsum + a[rows][col]; 

        } 

         

        if(colsum == 15){ 

            colsum=0; 

            continue; 

        }else{ 

            return false; 

        } 

    } 

    //check right diagonal 

    int rightdiagsum = 0; 

     

    for(int rows = 0; rows < r; rows++){ 

        for(int col = 0; col < r; col++){ 

            if(col == rows){ 

                rightdiagsum = rightdiagsum + a[rows][col]; 

            } 

        } 

    } 

     

    if(rightdiagsum =! 15){ 

        return false; 

    } 

     

    int leftdiagsum = 0; 

     

    for (int rows = 0; rows < r;rows++){ 

        for(int col = 0; col < r; col++){ 

            if((rows+col) == (r-1)){ 

                leftdiagsum = leftdiagsum + a[rows][col]; 

            } 

        } 

    } 

    if (leftdiagsum =! 15){ 

        return false; 

    } 

     

    return true; 

  

} 
```

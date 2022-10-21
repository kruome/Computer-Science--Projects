#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void lcs(string original){
    
    int n = original.length();
    int m = original.length();
    string reverse = original;
    int len1 = -1 , len2 = -1;
    int length[original.length()+1][reverse.length()+1];
    int choice[original.length()+1][reverse.length()+1];

    for (int i = 0; i < n / 2; i++)
        swap(reverse[i], reverse[n - i - 1]);
    for(int i = 0 ; i <=m;i++){
        length[i][0] = 0;
    }
    for(int i = 0 ; i <=n;i++){
        length[0][i] = 0;
    }
    for(int i = 1; i <=n; i++){
        for(int j = 1;j<=m;j++){
            if (original[i-1] == reverse[j-1]){
                length[i][j] = length[i-1][j-1] + 1;
                choice[i][j] = 1;
            }
            else{
                length[i][j] = max(length[i-1][j] , length[i][j-1]);
            }
        }
    }
    int size = length[m][n]; //check
    char lps[size+1];

    while (m > 0 && n > 0) {
        if (original[m - 1] == reverse[n - 1]) {
            lps[size - 1] = original[m - 1]; 
            m--;
            n--;
            size--;
        }else if (length[m - 1][n] > length[m][n - 1]){
            m--;
        }else{
            n--;
        }
    }
    
    cout<< lps;
}



int main()
{
    lcs("character");

    return 0;
}
/*The recursive definition of the value of the solution for the length() function is as follows:

  if (original[i-1] == reverse[j-1]){
                length[i][j] = length[i-1][j-1] + 1;
            }
            else{
                length[i][j] = max(length[i-1][j] , length[i][j-1]);
            }
The statement checks if the two strings are equivalent to one another. If they are, delete the last element from the strings and recur for the remaining substring. If not, split it into two subproblems:

Compare original string with reverse -1 substring
Compare reverse string with original -1 substring
Then choose the max from the two to get the LPS

The running time of this algorithm is O(n^2) since there is a nested for-loop, 2 loops, which takes precedence over the other lines of code, some of which are c, c, c, n, n etc
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void
lcs (string original)
{
  
int n = original.length ();
  
int m = original.length ();
  
string reverse = original;
  
int len1 = -1, len2 = -1;
  
int length[original.length () + 1][reverse.length () + 1];
  
int choice[original.length () + 1][reverse.length () + 1];
  
for (int i = 0; i < n / 2; i++)
    
swap (reverse[i], reverse[n - i - 1]);
  
for (int i = 0; i <= m; i++)
    {
      
length[i][0] = 0;
  
} 
for (int i = 0; i <= n; i++)
    {
      
length[0][i] = 0;
  
} 
for (int i = 1; i <= n; i++)
    {
      
for (int j = 1; j <= m; j++)
	{
	  
if (original[i - 1] == reverse[j - 1])
	    {
	      
length[i][j] = length[i - 1][j - 1] + 1;
	      
choice[i][j] = 1;
	    
}
	  
	  else
	    {
	      
length[i][j] = max (length[i - 1][j], length[i][j - 1]);
	    
}
	
}
    
}
  int size = length[m][n];	//check
  char lps[size + 1];
  
while (m > 0 && n > 0)
    {
      
if (original[m - 1] == reverse[n - 1])
	{
	  
lps[size - 1] = original[m - 1];
	  
m--;
	  
n--;
	  
size--;
	
}
      else if (length[m - 1][n] > length[m][n - 1])
	{
	  
m--;
	
}
      else
	{
	  
n--;
	
}
    
}
  
cout << lps;

}


int
main () 
{
  
lcs ("character");
  
return 0;

}

#include <iostream>
#include <string.h> 
using namespace std;
void permute(char a[], int i, int n)
{
    int j;
    if (i == n)                  // If we've chosen all
       cout << a << endl;        // we're done, output
    else
    {
     for (j = i; j <= n; j++) // a[0] to a[j-1] are done
      {                       // so try all possible a[j]
       swap(a[i], a[j]);    // Choose a[j] or a[n]
       permute(a, i+1, n);  // Choose the remaining lett.
       swap(a[i], a[j]);    
	  }
	}
}; 
void swap(char *x, char *y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
int main() 
{ 
    char str[] = "ABC"; 
    int n = strlen(str); 
    permute(str, 0, n-1); 
    return 0; 
} 

#include <iostream>
#include <string.h> 
using namespace std;
const int n = 5;
 int pi[n];
 int main()
{
  int r=110;    // chose the value   
  pi[n]=1;
  int fact=1;   // we use var. to calculate j! recursively
  for(int j=1;j<n;++j)
    {
    fact=fact*j;
    int d=(r%(fact*(j+1)))/fact;  // equation (4)
    r=r-d*fact;
    pi[n-j]=d+1;
    for(int i=n-j+1;i<n+1;++i)
    if(pi[i]>d)
	  {
	  pi[i]=pi[i]+1;   // equation (5)
	  }
	}
	 
  for(int i=1;i<n+1;++i) 
  cout << pi[i];
  return 0;
}


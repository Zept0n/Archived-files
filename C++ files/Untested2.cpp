#include <iostream>
using namespace std;

int main ()
{
    const int n=6;
	int i,j,d,r,fact;
	int pi[n];
	r=23; 
	pi[n]=1; 
    fact=1; 
    for (j=1;j<n-1;j++)
    {
	    fact=fact*j; 
		d=(r%(fact*(j+1))) / fact; 
		r=r-d*fact; 
		pi[n-j]=d+1; 
		for (i=n-j+1;i<n;i++)  
		if (pi[i]>d) 
		{
		pi[i]=pi[i]+1; 
		}
	}
    for (i=1;i<n;i++)
    {
    	cout<<pi[i]<<endl;
	}

}


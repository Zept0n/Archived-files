#include <iostream>
#include <string.h> 
using namespace std;
const int n = 4;
int pi[n]; int pi_prime[n];int j;
int main(){
 int r=0;
 pi[1]=3;pi[2]=2;pi[3]=1;pi[4]=4;
 for(int i=1;i<n+1;++i)pi_prime[i]=pi[i];
 for(j=1;j<n;++j){
 int fact =1;
   for(int k=2; k<(n-j+1);++k)fact =fact*k;
   r=r+(pi_prime[j]-1)*fact;
   for(int i=j+1;i<n+1;++i)
    if(pi_prime[i]>pi_prime[j])pi_prime[i]=pi_prime[i]-1;}
 cout << r << endl;
   return 0;}


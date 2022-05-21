#include <iostream>
using namespace std;
int main ()
{
	float H[22];
	int n,i,j,g,temp;
	cout<<"Vuvedi broq na elementi"<<endl;
	cin>>n;
	if (n>22||n<1)
	{
		cout<<"Error-Broq na elementite trqbva da e <22 i >1"<<endl;
		return 1;
	}
	for (i=0;i<n;i++)
	cin>>H[i];
	cout<<"Masiv predi sortirane"<<endl;
	for (i=0;i<n;i++)
	cout<<H[i]<<endl;
	for(g = n/2;g > 0; g /= 2)
 {
     for(i = g; i<n; i++)
     {
         temp = H[i];
         for(j = i; j >= g ;j-=g)
         {
             if(temp > H[j-g])
             {
                 H[j] = H[j-g];
             }
             else
             {
                 break;
             }
         }
         H[j] = temp;
     }
 }
 cout<<"Masiv sled sortirane"<<endl;
	for (i=0;i<n;i++)
	cout<<H[i]<<endl;
}

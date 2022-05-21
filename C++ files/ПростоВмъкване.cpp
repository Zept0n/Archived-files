/*Да се състави програма,която да сортира едномерен масив 
от цели числа тип short с име А състоящ се от 14 елемента.
Сортирането да се извърши във възходящ ред по метода на 
простото вмъкване. */
#include <iostream>
using namespace std;
int main ()
{
	/* Едномерен масив от цели числа тип short с име A */
	short A[14];
	/* Създаване на променливи n,i,j,temp от тип int
	n-броя на елементите, които ще се въвеждат и сортират(1-14)
	i,j-за използване в for
	temp-използва се като временна променлива при
	размяната на стойности в A */
	int n,i,j,temp;
	//Въвеждане броя на елементите
	do 
	{
		cout<<"Vuvedi broq na elementi"<<endl;
		cin>>n;
		if (n>14||n<1)
		cout<<"Greshka \n Broq na elementite trqbva da e <14 i >1"<<endl;
	}
	while (n>14||n<1);
	cout<<"Vuvedi "<<n<<" elementa"<<endl;
	//Въвеждане на стойностите на масива
	for (i=0;i<n;i++)
	cin>>A[i];
	//Сортиране на масива
	for(i=1;i<n;i++)
   {
      int temp = A[i];
      int j= i-1;
      
/*Премества елементи на А[0..i-1],които 
са по-големи от временната променлива temp 
с една позиция напред от текущата им позиция.*/
      while(j>=0 && temp <= A[j])
      {
         A[j+1] = A[j];
         j = j-1;
      }
   A[j+1] = temp;
   }
	
	cout<<"Sortiran masiv vuv vuzhod.red"<<endl;
	//Извеждане на масива
	for (i=0;i<n;i++)
	cout<<A[i]<<endl;
}

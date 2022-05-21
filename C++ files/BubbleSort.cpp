/*Да се състави програма,която да сортира едномерен масив 
от цели числа тип short с име K състоящ се от 12 елемента.
Сортирането да се извърши в низходящ ред по метода на 
мехурчето. */
#include <iostream>
using namespace std;
int main ()
{
	/* Едномерен масив от цели числа тип short с име K */
	short K[12];
	/* Създаване на променливи n,i,j,temp от тип int
	n-броя на елементите, които ще се сортират
	i,j-за използване в for
	temp-използва се като временна променлива при
	размяната на стойности в К */
	int n,i,j,temp;
	//Въвеждане броя на елементите
	do 
	{
		cout<<"Vuvedi broq na elementi"<<endl;
		cin>>n;
		if (n>12||n<1)
		cout<<"Error \n Broq na elementite trqbva da e <12 i >1"<<endl;
	}
	while (n>12||n<1);
	cout<<"Vuvedi "<<n<<" elementa"<<endl;
	//Въвеждане на стойностите на масива
	for (i=0;i<n;i++)
	cin>>K[i];
	//Сортиране на масива
	for (i=0;i<(n-1);i++)
	{
		for (j=0;j<n-i-1;j++)
		{
		/* Ако текушият елемент е по-малък от 
		следващият елемент местата им се разменят
		като се използва временната променлива temp*/
			if (K[j]<K[j+1])
			{
			temp=K[j];
			K[j]=K[j+1];
			K[j+1]=temp;
			}
		}
		
	}
	cout<<"Sortiran masiv v nishodqsht red"<<endl;
	//Извеждане на масива
	for (i=0;i<n;i++)
	cout<<K[i]<<endl;
}

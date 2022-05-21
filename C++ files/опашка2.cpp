#include <iostream>
#include <conio.h>
using namespace std;
void push(int n);
int pop(int n);
const int q=10;
int qu[q];
int first=0,last=0;
int main ()
{
	int num;
	cout<<"\n Vuvejdane \n";
	while ((last<q)&&(cin>>num))
	{
		push(num);
	}
	cout<<"\n Danni: \n";
	while (first<last)
	{
		cout<<pop(num)<<"\t";
	}
	cout<<"\n";
	getch ();
	return 0;
}
void push(int n)
{
	qu[last++]=n;
}
int pop (int n)
{
	n=qu[first ++];
	return n;
}

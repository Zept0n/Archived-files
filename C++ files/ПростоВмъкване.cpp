/*�� �� ������� ��������,����� �� ������� ��������� ����� 
�� ���� ����� ��� short � ��� � ������� �� �� 14 ��������.
����������� �� �� ������� ��� �������� ��� �� ������ �� 
�������� ��������. */
#include <iostream>
using namespace std;
int main ()
{
	/* ��������� ����� �� ���� ����� ��� short � ��� A */
	short A[14];
	/* ��������� �� ���������� n,i,j,temp �� ��� int
	n-���� �� ����������, ����� �� �� �������� � ��������(1-14)
	i,j-�� ���������� � for
	temp-�������� �� ���� �������� ���������� ���
	��������� �� ��������� � A */
	int n,i,j,temp;
	//��������� ���� �� ����������
	do 
	{
		cout<<"Vuvedi broq na elementi"<<endl;
		cin>>n;
		if (n>14||n<1)
		cout<<"Greshka \n Broq na elementite trqbva da e <14 i >1"<<endl;
	}
	while (n>14||n<1);
	cout<<"Vuvedi "<<n<<" elementa"<<endl;
	//��������� �� ����������� �� ������
	for (i=0;i<n;i++)
	cin>>A[i];
	//��������� �� ������
	for(i=1;i<n;i++)
   {
      int temp = A[i];
      int j= i-1;
      
/*��������� �������� �� �[0..i-1],����� 
�� ��-������ �� ���������� ���������� temp 
� ���� ������� ������ �� �������� �� �������.*/
      while(j>=0 && temp <= A[j])
      {
         A[j+1] = A[j];
         j = j-1;
      }
   A[j+1] = temp;
   }
	
	cout<<"Sortiran masiv vuv vuzhod.red"<<endl;
	//��������� �� ������
	for (i=0;i<n;i++)
	cout<<A[i]<<endl;
}

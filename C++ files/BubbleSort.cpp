/*�� �� ������� ��������,����� �� ������� ��������� ����� 
�� ���� ����� ��� short � ��� K ������� �� �� 12 ��������.
����������� �� �� ������� � �������� ��� �� ������ �� 
���������. */
#include <iostream>
using namespace std;
int main ()
{
	/* ��������� ����� �� ���� ����� ��� short � ��� K */
	short K[12];
	/* ��������� �� ���������� n,i,j,temp �� ��� int
	n-���� �� ����������, ����� �� �� ��������
	i,j-�� ���������� � for
	temp-�������� �� ���� �������� ���������� ���
	��������� �� ��������� � � */
	int n,i,j,temp;
	//��������� ���� �� ����������
	do 
	{
		cout<<"Vuvedi broq na elementi"<<endl;
		cin>>n;
		if (n>12||n<1)
		cout<<"Error \n Broq na elementite trqbva da e <12 i >1"<<endl;
	}
	while (n>12||n<1);
	cout<<"Vuvedi "<<n<<" elementa"<<endl;
	//��������� �� ����������� �� ������
	for (i=0;i<n;i++)
	cin>>K[i];
	//��������� �� ������
	for (i=0;i<(n-1);i++)
	{
		for (j=0;j<n-i-1;j++)
		{
		/* ��� �������� ������� � ��-����� �� 
		���������� ������� ������� �� �� ��������
		���� �� �������� ���������� ���������� temp*/
			if (K[j]<K[j+1])
			{
			temp=K[j];
			K[j]=K[j+1];
			K[j+1]=temp;
			}
		}
		
	}
	cout<<"Sortiran masiv v nishodqsht red"<<endl;
	//��������� �� ������
	for (i=0;i<n;i++)
	cout<<K[i]<<endl;
}

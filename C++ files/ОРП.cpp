#include <iostream>
#include <conio.h>
#include <iomanip> 
using namespace std;
class Point3 
{
	double x,y,z;
	public:
		Point3(); //����������� �� ������������
		~Point3(); //����������
		void setto(); //�������
	    friend Point3 operator* (Point3 v1,Point3 v2);
	    Point3 operator- (Point3 v2);
		//����� �� ����������� �� �����
		void show(char i,int g);
};
Point3::Point3() //���.�� ����������� �� ������������
{
	
}
Point3::~Point3() //����������
{
	
}
void Point3::setto()
	{
		cout<<"X=";
		cin>>x;
	    cout<<"Y=";
		cin>>y;
		cout<<"Z=";
		cin>>z;
	}
Point3 operator* (Point3 v1,Point3 v2)
{
	Point3 v;
	v.x=v1.x*v2.x;
	v.y=v1.y*v2.y;
	v.z=v1.z*v2.z;
	return v;
}
Point3 Point3::operator- (Point3 v2)
{
	Point3 v;
	v.x=x-v2.x;
	v.y=y-v2.y;
	v.z=z-v2.z;
	return v;
}
void Point3::show(char i,int g)
{
	cout<<"Tochka "<<i<<"["<<g<<"]"<<": ("<<x<<","<<y<<","<<z<<")"<<endl;	
}
int main()
{
	Point3 *A;
	int n=10;
	int i;
	A=new Point3[n];
	for (i=0;i<n;i++)
	A[i].setto();
	cout<<"Stoinosti na masiva"<<endl;
	for  (i=0;i<n;i++)
	A[i].show('A',i);
	cout<<"Stoinosti na masiva sled izpulnenie na A[9]=A[8]-A[7]"<<endl;
	A[9]=A[8]-A[7];
	for ( i=0;i<n;i++)
	A[i].show('A',i);
	delete A;
	getch ();
return 0;
}

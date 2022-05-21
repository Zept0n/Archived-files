/* Курсова работа на Себастиян Пламенов Георгиев
Зад.13 Да се създаде клас Point3 определящ точки
в тримерното пространство x,y,z(реални числа тип
float) и име на точката,метод за отпечатване,мутатор,
конструктор по подразбиране и деструктор.За дадения
клас да се извърши предефиниране на операцията 
изваждане по правилото x-x,y-y и z-z чрез приятелска
функция.Програмата да създава масив A[10] от елементи
на класа.Като първият елемент да се получава по
правилото A[0]=[A8]-A[5]. */
#include <iostream>
#include <conio.h>
#include <iomanip> 
using namespace std;
class Point3 
{
	float x,y,z;
	public:
		Point3(); //Конструктор по подразбиране
		Point3(float,float,float);
		~Point3(); //Деструктор
		void set(); //Мутатор
		//Мутатор с предварително зададени стойности
		void set(float,float,float);  
		//Предефиниране на операцията изваждане
		friend Point3 operator- (Point3 v1,Point3 v2);
		//Метод за отпечатване 
		void show(char i);
		//Метод за отпечатване на масив
		void show(char i,int g);
};
Point3::Point3() //Деф.на конструктор по подразбиране
{
	x=0;
	y=0;
	z=0;
}
Point3::Point3(float a,float b,float c) //2-ри конструкт.
{
	x=a;
	y=b;
	z=c;
}
Point3::~Point3() //Деструктор
{
	
}
//Дефиниция на мутатор за промяна на стойност
void Point3::set()
	{
		cout<<"X=";
		cin>>x;
	    cout<<"Y=";
		cin>>y;
		cout<<"Z=";
		cin>>z;
	}
void Point3::set(float a,float b,float c)
{
	x=a;
	y=b;
	z=c;
}
//Предефиниране на операцията изваждане
Point3 operator- (Point3 v1,Point3 v2)
{
	Point3 v;
	v.x=v1.x-v2.x;
	v.y=v1.y-v2.y;
	v.z=v1.z-v2.z;
	return v;
}
//Деф. на метод за отпечатване 
void Point3::show(char i) 
{
	cout<<"Tochka "<<i<<": ("<<x<<","<<y<<","<<z<<")"<<endl;	
}
//Деф. на метод за отпечатване на масив
void Point3::show(char i,int g)
{
	cout<<"Tochka "<<i<<"["<<g<<"]"<<": ("<<x<<","<<y<<","<<z<<")"<<endl;	
}
int main ()
{
	//Създаване на масив от елементи Point3
	Point3 A[10];
	char ch;
	int p,n,i;
	
	do
	{
	  cout<<"________________________________________________ \n";
	  cout<<"1.Promqna na tochka v masiva \n";
	  cout<<"2.Vuvejdane na vsichki tochki v masiva \n";
	  cout<<"3.Pokazvane na tochka \n";
	  cout<<"4.Pokazvane na vsichki tochki \n";
	  cout<<"5.Test na predefinirane na izvajdane \n";
	  cout<<"6.Izpulnenie na A[0]=A[8]-A[5] \n";
	  cout<<"7.Exit \n";
	  cout<<"________________________________________________ \n";
	  cin>>ch;
	  switch (ch)
	  {
	    case '1':
	    do 
	{
		cout<<"Koq tochka iskate da promenite?"<<endl;
		cin>>p;
		if (p>10||p<1||!cin)
		{
			cout<<"Error-Tochka mejdu 1-10"<<endl;
			cin.clear();
			cin.ignore(100, '\n'); 
		}
		
	}
	while (p>10||p<1||!cin);
        cout<<"A["<<p<<"]"<<endl;
	    A[p].set();
		cout<<endl;
		break;  
		
		case '2':
		for (i=0;i<10;i++)
		{
			cout<<"A"<<"["<<i<<"]"<<endl;
			A[i].set();
			cout<<endl;
		}
		break;  
		case '3':
			do
			{
			cout<<"Koq tochka iskate da izkarate?"<<endl;
			cin>>p;
			if (p>10||p<1||!cin)
			{
				cout<<"Error \n Tochka mejdu 1-10"<<endl;
				cin.clear();
				cin.ignore(100, '\n'); 
			}
			
			}
			while (p>10||p<1);
			A[p].show('A',p);
			cout<<endl;
		break; 
		case '4':
		for (i=0;i<10;i++)
		{
			A[i].show('A',i);
			cout<<endl;
		}
		break;  
		case '5':
			int e,r,t;
			cout<<"A-";
			cin>>e;
			cout<<"= \nA-";
			cin>>r;
			cout<<"- \nA-";
			cin>>t;
			cout<<endl;
			cout<<"Purvonachalna stoinost na ";
			A[e].show('A',e);
			cout<<"Stoinost na A["<<e<<"] sled izpulnenie na : ";
			cout<<"A["<<e<<"]=A["<<r<<"]-A["<<t<<"]";
			A[e]=A[r]-A[t];
			cout<<endl;
		    A[r].show('A',r);
		    cout<<setw(17)<<"-"<<endl;
		    A[t].show('A',t);
		    cout<<setw(17)<<"="<<endl;
			A[e].show('A',e);
		break; 
		case '6':
		    cout<<"A[0]=A[8]-A[5]"<<endl;
		    A[0]=A[8]-A[5];
		    cout<<endl;
		    A[8].show('A',8);
		    cout<<setw(17)<<"-"<<endl;
		    A[5].show('A',5);
		    cout<<setw(17)<<"="<<endl;
		    A[0].show('A',0);
		break;  
		default:    
			{
				if (ch!='7')
				cout<<"Error"<<endl;
			};
	  }
	}
	while (ch!='7'); 
	getch ();
}

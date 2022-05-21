/*Да се състави програма,която реализира структурата опашка от динамичен тип.
Елементите на структурата да са реални числа тип float.Програмага да предста
-вя основните операции със структурата включване и изключване на елемент. */
#include <iostream>
#include <conio.h>
using namespace std;
struct node
{
	float data;  /*Елементите на структурата от тип float */
	node *next;
};

class queue
{

	node *rear,*front;
	public:
		queue()            /*конструктор*/
		{
		rear=NULL;
		front=NULL;
		}
		void qinsert ();  /*Деклариране на функцията за включване на елемент*/
		void qdelete ();  /*Деклариране на функцията за изключване на елемент*/
		void qdisplay (); /*Деклариране на функцията за показване на всички елементи*/
		~queue ();        /*Деклариране на деструктор*/
		
};

void queue::qinsert() /*Дефиниране на функцията за включване на елемент*/
{
	node *temp;
	temp=new node;
	cout<<"Dobavqne na element:";
	cin>>temp->data;
	temp->next=NULL;
	if (rear==NULL)
         {
		 rear=temp;
		 front=temp;
		 }
	else 
	     {
		 rear->next=temp;
		 rear=temp;
		 }
}
void queue::qdelete() /*Дефиниране на функцията за изключване на елемент*/
{
	if(front!=NULL)
      {
            node *temp=front;
            cout<<"Element "<<front->data<<" e iztrit \n";
            front=front->next;
            delete temp;
            if(front==NULL)
                  rear=NULL;
      }
      else
            cout<<"Opashkata e prazna.."<<endl;
	
}
queue::~queue()  /*Дефиниране на деструктор*/
{
	while (front!=NULL)
	{
		node *temp=front;
		front=front->next;
		delete temp;
	}
}
void queue::qdisplay() /*Дефиниране на функцията за показване на всички елементи*/
{
	node *temp=front;
	while (temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int main ()
{
/*Създаване на обект от клас queue*/
	queue obj;    
/*Създаване на символ (character) с име ch,който ще се използва в оператора switch */
	char ch;      
	do
	{
	  cout<<"1.Vkluchvane \n 2.Izkluchvane \n ";
	  cout<<"3.Pokazvane na elementi \n 4.Izlizane \n";
	  cin>>ch;
	  switch (ch)
	  {
	  	/*При натискане на 1 ще се изпълни функцията за включване на елемент*/
	    case '1':cout<<endl;obj.qinsert();cout<<endl;break;  
		/*При натискане на 2 ще се изпълни функцията за изключване на елемент*/
		case '2':cout<<endl;obj.qdelete();cout<<endl;break;  
		/*При натискане на 3 ще се изпълни функцията за показване на елементи*/
		case '3':cout<<endl;obj.qdisplay();cout<<endl;break; 
		/*Във всички други случай освен 1,2,3,4 ще изписва грешка*/
		default:    
			{
				if (ch!='4')
				cout<<"Error"<<endl;
			};
	  }
	}
	while (ch!='4'); /*Докато ch не е равно на 4 ще повтаря тялото на do */
}
	



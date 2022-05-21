/*�� �� ������� ��������,����� ��������� ����������� ������ �� ��������� ���.
���������� �� ����������� �� �� ������ ����� ��� float.���������� �� �������
-�� ��������� �������� ��� ����������� ��������� � ���������� �� �������. */
#include <iostream>
#include <conio.h>
using namespace std;
struct node
{
	float data;  /*���������� �� ����������� �� ��� float */
	node *next;
};

class queue
{

	node *rear,*front;
	public:
		queue()            /*�����������*/
		{
		rear=NULL;
		front=NULL;
		}
		void qinsert ();  /*����������� �� ��������� �� ��������� �� �������*/
		void qdelete ();  /*����������� �� ��������� �� ���������� �� �������*/
		void qdisplay (); /*����������� �� ��������� �� ��������� �� ������ ��������*/
		~queue ();        /*����������� �� ����������*/
		
};

void queue::qinsert() /*���������� �� ��������� �� ��������� �� �������*/
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
void queue::qdelete() /*���������� �� ��������� �� ���������� �� �������*/
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
queue::~queue()  /*���������� �� ����������*/
{
	while (front!=NULL)
	{
		node *temp=front;
		front=front->next;
		delete temp;
	}
}
void queue::qdisplay() /*���������� �� ��������� �� ��������� �� ������ ��������*/
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
/*��������� �� ����� �� ���� queue*/
	queue obj;    
/*��������� �� ������ (character) � ��� ch,����� �� �� �������� � ��������� switch */
	char ch;      
	do
	{
	  cout<<"1.Vkluchvane \n 2.Izkluchvane \n ";
	  cout<<"3.Pokazvane na elementi \n 4.Izlizane \n";
	  cin>>ch;
	  switch (ch)
	  {
	  	/*��� ��������� �� 1 �� �� ������� ��������� �� ��������� �� �������*/
	    case '1':cout<<endl;obj.qinsert();cout<<endl;break;  
		/*��� ��������� �� 2 �� �� ������� ��������� �� ���������� �� �������*/
		case '2':cout<<endl;obj.qdelete();cout<<endl;break;  
		/*��� ��������� �� 3 �� �� ������� ��������� �� ��������� �� ��������*/
		case '3':cout<<endl;obj.qdisplay();cout<<endl;break; 
		/*��� ������ ����� ������ ����� 1,2,3,4 �� ������� ������*/
		default:    
			{
				if (ch!='4')
				cout<<"Error"<<endl;
			};
	  }
	}
	while (ch!='4'); /*������ ch �� � ����� �� 4 �� ������� ������ �� do */
}
	


